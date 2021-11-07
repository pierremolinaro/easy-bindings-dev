#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//----------------------------------------------------------------------------------------------------------------------
// @computeRoutineGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computeRoutineGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computeRoutineGeneration * p = (const cPtr_computeRoutineGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientName.objectCompare (p->mProperty_mTransientName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientType.objectCompare (p->mProperty_mTransientType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computeRoutineGeneration::objectCompare (const GALGAS_computeRoutineGeneration & inOperand) const {
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

GALGAS_computeRoutineGeneration::GALGAS_computeRoutineGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration::GALGAS_computeRoutineGeneration (const cPtr_computeRoutineGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computeRoutineGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration GALGAS_computeRoutineGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                  const GALGAS_string & inAttribute_mTransientName,
                                                                                  const GALGAS_typeKind & inAttribute_mTransientType,
                                                                                  const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_computeRoutineGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mTransientName.isValid () && inAttribute_mTransientType.isValid () && inAttribute_mDependencyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computeRoutineGeneration (inAttribute_mOwnerName, inAttribute_mTransientName, inAttribute_mTransientType, inAttribute_mDependencyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeRoutineGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeRoutineGeneration::setter_setMTransientName (GALGAS_string inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeRoutineGeneration::setter_setMTransientType (GALGAS_typeKind inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mTransientType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeRoutineGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computeRoutineGeneration::readProperty_mOwnerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computeRoutineGeneration::readProperty_mTransientName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mTransientName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_computeRoutineGeneration::readProperty_mTransientType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mTransientType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_computeRoutineGeneration::readProperty_mDependencyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_transientDependencyListForGeneration () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @computeRoutineGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_computeRoutineGeneration::cPtr_computeRoutineGeneration (const GALGAS_string & in_mOwnerName,
                                                              const GALGAS_string & in_mTransientName,
                                                              const GALGAS_typeKind & in_mTransientType,
                                                              const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mTransientName (in_mTransientName),
mProperty_mTransientType (in_mTransientType),
mProperty_mDependencyList (in_mDependencyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computeRoutineGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeRoutineGeneration ;
}

void cPtr_computeRoutineGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@computeRoutineGeneration:" ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computeRoutineGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_computeRoutineGeneration (mProperty_mOwnerName, mProperty_mTransientName, mProperty_mTransientType, mProperty_mDependencyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@computeRoutineGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computeRoutineGeneration ("computeRoutineGeneration",
                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computeRoutineGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeRoutineGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computeRoutineGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computeRoutineGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration GALGAS_computeRoutineGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_computeRoutineGeneration result ;
  const GALGAS_computeRoutineGeneration * p = (const GALGAS_computeRoutineGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computeRoutineGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeRoutineGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_computeRoutineGeneration_2D_weak::objectCompare (const GALGAS_computeRoutineGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_computeRoutineGeneration_2D_weak::GALGAS_computeRoutineGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration_2D_weak & GALGAS_computeRoutineGeneration_2D_weak::operator = (const GALGAS_computeRoutineGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration_2D_weak::GALGAS_computeRoutineGeneration_2D_weak (const GALGAS_computeRoutineGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration_2D_weak GALGAS_computeRoutineGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_computeRoutineGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration GALGAS_computeRoutineGeneration_2D_weak::bang_computeRoutineGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_computeRoutineGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computeRoutineGeneration) ;
      result = GALGAS_computeRoutineGeneration ((cPtr_computeRoutineGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@computeRoutineGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computeRoutineGeneration_2D_weak ("computeRoutineGeneration-weak",
                                                         & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computeRoutineGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeRoutineGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computeRoutineGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computeRoutineGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration_2D_weak GALGAS_computeRoutineGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_computeRoutineGeneration_2D_weak result ;
  const GALGAS_computeRoutineGeneration_2D_weak * p = (const GALGAS_computeRoutineGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computeRoutineGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeRoutineGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @transientPropertyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_transientPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerate.objectCompare (p->mProperty_mGenerate) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_transientPropertyGeneration::objectCompare (const GALGAS_transientPropertyGeneration & inOperand) const {
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

GALGAS_transientPropertyGeneration::GALGAS_transientPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration::GALGAS_transientPropertyGeneration (const cPtr_transientPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientPropertyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                        const GALGAS_string & inAttribute_mClassName,
                                                                                        const GALGAS_typeKind & inAttribute_mType,
                                                                                        const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList,
                                                                                        const GALGAS_bool & inAttribute_mGenerate
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mType.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mGenerate.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientPropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mType, inAttribute_mDependencyList, inAttribute_mGenerate COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMGenerate (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientPropertyGeneration::readProperty_mClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_transientPropertyGeneration::readProperty_mType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientPropertyGeneration::readProperty_mDependencyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_transientDependencyListForGeneration () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientPropertyGeneration::readProperty_mGenerate (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mGenerate ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @transientPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_transientPropertyGeneration::cPtr_transientPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                    const GALGAS_string & in_mClassName,
                                                                    const GALGAS_typeKind & in_mType,
                                                                    const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                    const GALGAS_bool & in_mGenerate
                                                                    COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mType (in_mType),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mGenerate (in_mGenerate) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

void cPtr_transientPropertyGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@transientPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerate.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mGenerate COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@transientPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyGeneration ("transientPropertyGeneration",
                                                    & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration result ;
  const GALGAS_transientPropertyGeneration * p = (const GALGAS_transientPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientPropertyGeneration_2D_weak::objectCompare (const GALGAS_transientPropertyGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_transientPropertyGeneration_2D_weak::GALGAS_transientPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration_2D_weak & GALGAS_transientPropertyGeneration_2D_weak::operator = (const GALGAS_transientPropertyGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration_2D_weak::GALGAS_transientPropertyGeneration_2D_weak (const GALGAS_transientPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration_2D_weak GALGAS_transientPropertyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration_2D_weak::bang_transientPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_transientPropertyGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientPropertyGeneration) ;
      result = GALGAS_transientPropertyGeneration ((cPtr_transientPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@transientPropertyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyGeneration_2D_weak ("transientPropertyGeneration-weak",
                                                            & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration_2D_weak GALGAS_transientPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration_2D_weak result ;
  const GALGAS_transientPropertyGeneration_2D_weak * p = (const GALGAS_transientPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@transientPropertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_transientPropertyGenerationList : public cCollectionElement {
  public: GALGAS_transientPropertyGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_transientPropertyGenerationList (const GALGAS_transientPropertyGeneration & in_mProperty
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_transientPropertyGenerationList (const GALGAS_transientPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_transientPropertyGenerationList::cCollectionElement_transientPropertyGenerationList (const GALGAS_transientPropertyGeneration & in_mProperty
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_transientPropertyGenerationList::cCollectionElement_transientPropertyGenerationList (const GALGAS_transientPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_transientPropertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientPropertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_transientPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_transientPropertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_transientPropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_transientPropertyGenerationList * operand = (cCollectionElement_transientPropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_transientPropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList::GALGAS_transientPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList::GALGAS_transientPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientPropertyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::constructor_listWithValue (const GALGAS_transientPropertyGeneration & inOperand0
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_transientPropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_transientPropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_transientPropertyGeneration & in_mProperty
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_transientPropertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_transientPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::addAssign_operation (const GALGAS_transientPropertyGeneration & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_transientPropertyGenerationList::setter_append (GALGAS_transientPropertyGenerationList_2D_element inElement,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inElement COMMA_THERE)) ;
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

void GALGAS_transientPropertyGenerationList::setter_insertAtIndex (const GALGAS_transientPropertyGeneration inOperand0,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_transientPropertyGenerationList::setter_removeAtIndex (GALGAS_transientPropertyGeneration & outOperand0,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
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

void GALGAS_transientPropertyGenerationList::setter_popFirst (GALGAS_transientPropertyGeneration & outOperand0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_popLast (GALGAS_transientPropertyGeneration & outOperand0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::method_first (GALGAS_transientPropertyGeneration & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::method_last (GALGAS_transientPropertyGeneration & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::add_operation (const GALGAS_transientPropertyGenerationList & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_transientPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientPropertyGenerationList result = GALGAS_transientPropertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientPropertyGenerationList result = GALGAS_transientPropertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_transientPropertyGenerationList result = GALGAS_transientPropertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::plusAssign_operation (const GALGAS_transientPropertyGenerationList inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_transientPropertyGeneration inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  GALGAS_transientPropertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_transientPropertyGenerationList::cEnumerator_transientPropertyGenerationList (const GALGAS_transientPropertyGenerationList & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element cEnumerator_transientPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientPropertyGenerationList * p = (const cCollectionElement_transientPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration cEnumerator_transientPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_transientPropertyGenerationList * p = (const cCollectionElement_transientPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@transientPropertyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyGenerationList ("transientPropertyGenerationList",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGenerationList result ;
  const GALGAS_transientPropertyGenerationList * p = (const GALGAS_transientPropertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@transientDependencyListForGeneration transientComputeFunctionCall'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_transientComputeFunctionCall (const GALGAS_transientDependencyListForGeneration & inObject,
                                                            const GALGAS_bool & constinArgument_inPreferences,
                                                            const GALGAS_string & constinArgument_inOwnerName,
                                                            const GALGAS_string & constinArgument_inTransientName,
                                                            const GALGAS_string & constinArgument_inFunctionNamePrefix,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("unwSelf.") ;
  }
  GALGAS_string var_uwself_19245 = temp_0 ;
  result_outResult = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_ident_19333 = GALGAS_string ("        ") ;
  result_outResult.plusAssign_operation(var_ident_19333.add_operation (GALGAS_string ("switch ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 439)) ;
  const GALGAS_transientDependencyListForGeneration temp_2 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_19403 (temp_2, kENUMERATION_UP) ;
  while (enumerator_19403.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(extensionGetter_modelStringForSelf (enumerator_19403.current_mDependency (HERE), var_uwself_19245, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 442)).add_operation (GALGAS_string (".selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 442)) ;
    if (enumerator_19403.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 444)) ;
    }
    enumerator_19403.gotoNextObject () ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 446)) ;
  result_outResult.plusAssign_operation(var_ident_19333.add_operation (GALGAS_string ("case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 447)) ;
  const GALGAS_transientDependencyListForGeneration temp_3 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_19596 (temp_3, kENUMERATION_UP) ;
  GALGAS_uint index_19589 ((uint32_t) 0) ;
  while (enumerator_19596.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (".single (let v").add_operation (index_19589.getter_string (SOURCE_FILE ("transient-property.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 450)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 450)) ;
    if (enumerator_19596.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 452)) ;
    }
    enumerator_19596.gotoNextObject () ;
    index_19589.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 448)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 454)) ;
  result_outResult.plusAssign_operation(var_ident_19333.add_operation (GALGAS_string ("  return .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 455)) ;
  result_outResult.plusAssign_operation(constinArgument_inFunctionNamePrefix.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 456)).add_operation (constinArgument_inOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 456)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 456)).add_operation (constinArgument_inTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 456)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 457)) ;
  const GALGAS_transientDependencyListForGeneration temp_4 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_19880 (temp_4, kENUMERATION_UP) ;
  GALGAS_uint index_19873 ((uint32_t) 0) ;
  while (enumerator_19880.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("v").add_operation (index_19873.getter_string (SOURCE_FILE ("transient-property.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 460)) ;
    if (enumerator_19880.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 462)) ;
    }
    enumerator_19880.gotoNextObject () ;
    index_19873.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 458)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string ("))\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 464)) ;
  result_outResult.plusAssign_operation(var_ident_19333.add_operation (GALGAS_string ("case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 465)) ;
  const GALGAS_transientDependencyListForGeneration temp_5 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_20032 (temp_5, kENUMERATION_UP) ;
  while (enumerator_20032.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (".multiple"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 468)) ;
    if (enumerator_20032.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 470)) ;
    }
    enumerator_20032.gotoNextObject () ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 472)) ;
  result_outResult.plusAssign_operation(var_ident_19333.add_operation (GALGAS_string ("  return .multiple\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 473)) ;
  result_outResult.plusAssign_operation(var_ident_19333.add_operation (GALGAS_string ("default :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 474)) ;
  result_outResult.plusAssign_operation(var_ident_19333.add_operation (GALGAS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 475)) ;
  result_outResult.plusAssign_operation(var_ident_19333.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 476)) ;
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@transientDependencyListForGeneration needs_unwSelf'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_needs_5F_unwSelf (const GALGAS_transientDependencyListForGeneration & inObject,
                                              const GALGAS_bool & constinArgument_inPreferences,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
  const GALGAS_transientDependencyListForGeneration temp_0 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_20585 (temp_0, kENUMERATION_UP) ;
  bool bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.galgas", 484)).isValidAndTrue () ;
  if (enumerator_20585.hasCurrentObject () && bool_1) {
    while (enumerator_20585.hasCurrentObject () && bool_1) {
      result_outResult = extensionGetter_needs_5F_unwSelf (enumerator_20585.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 485)) ;
      enumerator_20585.gotoNextObject () ;
      if (enumerator_20585.hasCurrentObject ()) {
        bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.galgas", 484)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@observablePropertyAST generateAddObserverCall'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_generateAddObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                       const GALGAS_bool & constinArgument_inPreferences,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_21078 = temp_0 ;
  const GALGAS_observablePropertyAST temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_21325 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_21203_controllerName = extractPtr_21325->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_21225_propertyName = extractPtr_21325->mAssociatedValue1 ;
      result_outResult = var_prefix_21078.add_operation (extractedValue_21203_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 497)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 497)).add_operation (extractedValue_21225_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 497)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 497)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_21581 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_21389_controllerName = extractPtr_21581->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_21411_propertyName = extractPtr_21581->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_21442_secondaryPropertyName = extractPtr_21581->mAssociatedValue2 ;
      result_outResult = var_prefix_21078.add_operation (extractedValue_21389_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 499)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 499)).add_operation (extractedValue_21411_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 499)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 499)).add_operation (extractedValue_21442_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 499)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 499)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_21821 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_21641_controllerName = extractPtr_21821->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_21663_propertyName = extractPtr_21821->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_21694_secondaryPropertyName = extractPtr_21821->mAssociatedValue2 ;
      result_outResult = var_prefix_21078.add_operation (extractedValue_21641_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 501)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 501)).add_operation (extractedValue_21663_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 501)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 501)).add_operation (extractedValue_21694_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 501)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_21994 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_21880_controllerName = extractPtr_21994->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_21902_propertyName = extractPtr_21994->mAssociatedValue1 ;
      result_outResult = var_prefix_21078.add_operation (extractedValue_21880_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 503)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 503)).add_operation (extractedValue_21902_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 503)).add_operation (GALGAS_string ("_property.<<4>>"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 503)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_22193 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22119_masterName = extractPtr_22193->mAssociatedValue0 ;
      result_outResult = var_prefix_21078.add_operation (extractedValue_22119_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 507)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 507)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_22320 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22244_masterName = extractPtr_22320->mAssociatedValue0 ;
      result_outResult = var_prefix_21078.add_operation (extractedValue_22244_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 509)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 509)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_22494 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22366_masterName = extractPtr_22494->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_22395_elementPropertyName = extractPtr_22494->mAssociatedValue1 ;
      result_outResult = var_prefix_21078.add_operation (extractedValue_22366_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 511)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 511)).add_operation (extractedValue_22395_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 511)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_22681 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22541_masterName = extractPtr_22681->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_22570_elementPropertyName = extractPtr_22681->mAssociatedValue1 ;
      result_outResult = var_prefix_21078.add_operation (extractedValue_22541_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 513)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 513)).add_operation (extractedValue_22570_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 513)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 513)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_22800 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22726_masterName = extractPtr_22800->mAssociatedValue0 ;
      result_outResult = var_prefix_21078.add_operation (extractedValue_22726_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 515)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 515)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_22922 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22844_propertyName = extractPtr_22922->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("preferences_").add_operation (extractedValue_22844_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 517)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 517)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_23056 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22976_propertyName = extractPtr_23056->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("preferences_").add_operation (extractedValue_22976_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 519)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 519)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_23176 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_23097_masterName = extractPtr_23176->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_23097_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 521)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 521)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_23300 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_23221_masterName = extractPtr_23300->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_23221_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 523)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 523)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_23478 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_23351_masterName = extractPtr_23478->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_23371_optionName = extractPtr_23478->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_23351_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 525)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 525)).add_operation (extractedValue_23371_optionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 525)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 525)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_23662 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_23537_relationshipName = extractPtr_23662->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_23559_propertyName = extractPtr_23662->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_23537_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 527)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 527)).add_operation (extractedValue_23559_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 527)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 243 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 245 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 247 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_23987 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_23911_propertyName = extractPtr_23987->mAssociatedValue1 ;
      result_outResult = var_prefix_21078.add_operation (extractedValue_23911_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 535)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 535)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@observablePropertyAST generateRemoveObserverCall'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_generateRemoveObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_24393 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_24267_controllerName = extractPtr_24393->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_24289_propertyName = extractPtr_24393->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_24267_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 544)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 544)).add_operation (extractedValue_24289_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 544)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 544)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_24653 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_24457_controllerName = extractPtr_24653->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_24479_propertyName = extractPtr_24653->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_24510_secondaryPropertyName = extractPtr_24653->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_24457_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 546)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 546)).add_operation (extractedValue_24479_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 546)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 546)).add_operation (extractedValue_24510_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 546)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 546)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_24897 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_24713_controllerName = extractPtr_24897->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_24735_propertyName = extractPtr_24897->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_24766_secondaryPropertyName = extractPtr_24897->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_24713_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 548)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 548)).add_operation (extractedValue_24735_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 548)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 548)).add_operation (extractedValue_24766_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 548)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_25089 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_24955_controllerName = extractPtr_25089->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_24977_propertyName = extractPtr_25089->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_24955_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 550)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 550)).add_operation (extractedValue_24977_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 550)).add_operation (GALGAS_string ("_property.removeEBObserverOf_<<5>>"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 550)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_25291 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25213_masterName = extractPtr_25291->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_25213_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 554)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 554)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_25422 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25342_masterName = extractPtr_25422->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_25342_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 556)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 556)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_25600 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25468_masterName = extractPtr_25600->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_25497_elementPropertyName = extractPtr_25600->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_25468_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 558)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 558)).add_operation (extractedValue_25497_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 558)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_25791 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25647_masterName = extractPtr_25791->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_25676_elementPropertyName = extractPtr_25791->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_25647_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 560)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 560)).add_operation (extractedValue_25676_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 560)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 560)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_25914 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25836_masterName = extractPtr_25914->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_25836_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 562)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 562)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_26039 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25958_propertyName = extractPtr_26039->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("preferences_").add_operation (extractedValue_25958_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 564)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 564)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_26176 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26093_propertyName = extractPtr_26176->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("preferences_").add_operation (extractedValue_26093_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 566)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 566)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_26299 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26217_masterName = extractPtr_26299->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_26217_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 568)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 568)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_26480 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26350_masterName = extractPtr_26480->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_26370_optionName = extractPtr_26480->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_26350_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 570)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 570)).add_operation (extractedValue_26370_optionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 570)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 570)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_26607 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26525_masterName = extractPtr_26607->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_26525_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 572)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 572)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_26794 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26666_relationshipName = extractPtr_26794->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_26688_propertyName = extractPtr_26794->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_26666_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 574)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 574)).add_operation (extractedValue_26688_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 574)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 270 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 272 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 274 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_27123 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_27043_propertyName = extractPtr_27123->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_27043_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 582)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 582)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
// @transientRoutineGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_transientRoutineGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientRoutineGeneration * p = (const cPtr_transientRoutineGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientName.objectCompare (p->mProperty_mTransientName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientType.objectCompare (p->mProperty_mTransientType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGeneratedFunctionNamePrefix.objectCompare (p->mProperty_mGeneratedFunctionNamePrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_transientRoutineGeneration::objectCompare (const GALGAS_transientRoutineGeneration & inOperand) const {
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

GALGAS_transientRoutineGeneration::GALGAS_transientRoutineGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration::GALGAS_transientRoutineGeneration (const cPtr_transientRoutineGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientRoutineGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration GALGAS_transientRoutineGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                      const GALGAS_string & inAttribute_mTransientName,
                                                                                      const GALGAS_typeKind & inAttribute_mTransientType,
                                                                                      const GALGAS_string & inAttribute_mGeneratedFunctionNamePrefix,
                                                                                      const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_transientRoutineGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mTransientName.isValid () && inAttribute_mTransientType.isValid () && inAttribute_mGeneratedFunctionNamePrefix.isValid () && inAttribute_mDependencyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientRoutineGeneration (inAttribute_mOwnerName, inAttribute_mTransientName, inAttribute_mTransientType, inAttribute_mGeneratedFunctionNamePrefix, inAttribute_mDependencyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMTransientName (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMTransientType (GALGAS_typeKind inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mTransientType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMGeneratedFunctionNamePrefix (GALGAS_string inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mGeneratedFunctionNamePrefix = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientRoutineGeneration::readProperty_mOwnerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientRoutineGeneration::readProperty_mTransientName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mTransientName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_transientRoutineGeneration::readProperty_mTransientType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mTransientType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientRoutineGeneration::readProperty_mGeneratedFunctionNamePrefix (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mGeneratedFunctionNamePrefix ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientRoutineGeneration::readProperty_mDependencyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_transientDependencyListForGeneration () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @transientRoutineGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_transientRoutineGeneration::cPtr_transientRoutineGeneration (const GALGAS_string & in_mOwnerName,
                                                                  const GALGAS_string & in_mTransientName,
                                                                  const GALGAS_typeKind & in_mTransientType,
                                                                  const GALGAS_string & in_mGeneratedFunctionNamePrefix,
                                                                  const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mTransientName (in_mTransientName),
mProperty_mTransientType (in_mTransientType),
mProperty_mGeneratedFunctionNamePrefix (in_mGeneratedFunctionNamePrefix),
mProperty_mDependencyList (in_mDependencyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientRoutineGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration ;
}

void cPtr_transientRoutineGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@transientRoutineGeneration:" ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGeneratedFunctionNamePrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientRoutineGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientRoutineGeneration (mProperty_mOwnerName, mProperty_mTransientName, mProperty_mTransientType, mProperty_mGeneratedFunctionNamePrefix, mProperty_mDependencyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@transientRoutineGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientRoutineGeneration ("transientRoutineGeneration",
                                                   & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientRoutineGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientRoutineGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientRoutineGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration GALGAS_transientRoutineGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientRoutineGeneration result ;
  const GALGAS_transientRoutineGeneration * p = (const GALGAS_transientRoutineGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientRoutineGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientRoutineGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientRoutineGeneration_2D_weak::objectCompare (const GALGAS_transientRoutineGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_transientRoutineGeneration_2D_weak::GALGAS_transientRoutineGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration_2D_weak & GALGAS_transientRoutineGeneration_2D_weak::operator = (const GALGAS_transientRoutineGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration_2D_weak::GALGAS_transientRoutineGeneration_2D_weak (const GALGAS_transientRoutineGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration_2D_weak GALGAS_transientRoutineGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_transientRoutineGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration GALGAS_transientRoutineGeneration_2D_weak::bang_transientRoutineGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_transientRoutineGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientRoutineGeneration) ;
      result = GALGAS_transientRoutineGeneration ((cPtr_transientRoutineGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@transientRoutineGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientRoutineGeneration_2D_weak ("transientRoutineGeneration-weak",
                                                           & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientRoutineGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientRoutineGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientRoutineGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration_2D_weak GALGAS_transientRoutineGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientRoutineGeneration_2D_weak result ;
  const GALGAS_transientRoutineGeneration_2D_weak * p = (const GALGAS_transientRoutineGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientRoutineGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientRoutineGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind::GALGAS_proxyKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyKind::constructor_propertyProxy (UNUSED_LOCATION_ARGS) {
  GALGAS_proxyKind result ;
  result.mEnum = kEnum_propertyProxy ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyKind::constructor_toManyProxy (UNUSED_LOCATION_ARGS) {
  GALGAS_proxyKind result ;
  result.mEnum = kEnum_toManyProxy ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_proxyKind::optional_propertyProxy () const {
  const bool ok = mEnum == kEnum_propertyProxy ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_proxyKind::optional_toManyProxy () const {
  const bool ok = mEnum == kEnum_toManyProxy ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_proxyKind [3] = {
  "(not built)",
  "propertyProxy",
  "toManyProxy"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_proxyKind::getter_isPropertyProxy (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_propertyProxy == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_proxyKind::getter_isToManyProxy (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_toManyProxy == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyKind::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @proxyKind: " << gEnumNameArrayFor_proxyKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_proxyKind::objectCompare (const GALGAS_proxyKind & inOperand) const {
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
//@proxyKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_proxyKind ("proxyKind",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_proxyKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_proxyKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyKind::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_proxyKind result ;
  const GALGAS_proxyKind * p = (const GALGAS_proxyKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_proxyKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @toManyProxyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toManyProxyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toManyProxyGeneration * p = (const cPtr_toManyProxyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyKind.objectCompare (p->mProperty_mProxyKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyTypeName.objectCompare (p->mProperty_mToManyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObservedRelationshipName.objectCompare (p->mProperty_mObservedRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObservedPropertyName.objectCompare (p->mProperty_mObservedPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_toManyProxyGeneration::objectCompare (const GALGAS_toManyProxyGeneration & inOperand) const {
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

GALGAS_toManyProxyGeneration::GALGAS_toManyProxyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration::GALGAS_toManyProxyGeneration (const cPtr_toManyProxyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyProxyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                            const GALGAS_proxyKind & inAttribute_mProxyKind,
                                                                            const GALGAS_string & inAttribute_mToManyTypeName,
                                                                            const GALGAS_string & inAttribute_mObservedRelationshipName,
                                                                            const GALGAS_string & inAttribute_mObservedPropertyName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mProxyKind.isValid () && inAttribute_mToManyTypeName.isValid () && inAttribute_mObservedRelationshipName.isValid () && inAttribute_mObservedPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyProxyGeneration (inAttribute_mPropertyName, inAttribute_mProxyKind, inAttribute_mToManyTypeName, inAttribute_mObservedRelationshipName, inAttribute_mObservedPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMToManyTypeName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mToManyTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mObservedRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mObservedPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_toManyProxyGeneration::readProperty_mProxyKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_proxyKind () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mProxyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::readProperty_mToManyTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mToManyTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::readProperty_mObservedRelationshipName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mObservedRelationshipName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::readProperty_mObservedPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mObservedPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @toManyProxyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_toManyProxyGeneration::cPtr_toManyProxyGeneration (const GALGAS_string & in_mPropertyName,
                                                        const GALGAS_proxyKind & in_mProxyKind,
                                                        const GALGAS_string & in_mToManyTypeName,
                                                        const GALGAS_string & in_mObservedRelationshipName,
                                                        const GALGAS_string & in_mObservedPropertyName
                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mProxyKind (in_mProxyKind),
mProperty_mToManyTypeName (in_mToManyTypeName),
mProperty_mObservedRelationshipName (in_mObservedRelationshipName),
mProperty_mObservedPropertyName (in_mObservedPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toManyProxyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration ;
}

void cPtr_toManyProxyGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@toManyProxyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObservedRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObservedPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyProxyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toManyProxyGeneration (mProperty_mPropertyName, mProperty_mProxyKind, mProperty_mToManyTypeName, mProperty_mObservedRelationshipName, mProperty_mObservedPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@toManyProxyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyProxyGeneration ("toManyProxyGeneration",
                                              & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyProxyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyProxyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGeneration result ;
  const GALGAS_toManyProxyGeneration * p = (const GALGAS_toManyProxyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyProxyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyProxyGeneration_2D_weak::objectCompare (const GALGAS_toManyProxyGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_toManyProxyGeneration_2D_weak::GALGAS_toManyProxyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration_2D_weak & GALGAS_toManyProxyGeneration_2D_weak::operator = (const GALGAS_toManyProxyGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration_2D_weak::GALGAS_toManyProxyGeneration_2D_weak (const GALGAS_toManyProxyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration_2D_weak GALGAS_toManyProxyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_toManyProxyGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGeneration_2D_weak::bang_toManyProxyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyProxyGeneration) ;
      result = GALGAS_toManyProxyGeneration ((cPtr_toManyProxyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@toManyProxyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyProxyGeneration_2D_weak ("toManyProxyGeneration-weak",
                                                      & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyProxyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyProxyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration_2D_weak GALGAS_toManyProxyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGeneration_2D_weak result ;
  const GALGAS_toManyProxyGeneration_2D_weak * p = (const GALGAS_toManyProxyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyProxyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@toManyProxyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_toManyProxyGenerationList : public cCollectionElement {
  public: GALGAS_toManyProxyGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGeneration & in_mProperty
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_toManyProxyGenerationList::cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGeneration & in_mProperty
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_toManyProxyGenerationList::cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_toManyProxyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toManyProxyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toManyProxyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_toManyProxyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_toManyProxyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyProxyGenerationList * operand = (cCollectionElement_toManyProxyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyProxyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList::GALGAS_toManyProxyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList::GALGAS_toManyProxyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyProxyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::constructor_listWithValue (const GALGAS_toManyProxyGeneration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyProxyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toManyProxyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_toManyProxyGeneration & in_mProperty
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyProxyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_toManyProxyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::addAssign_operation (const GALGAS_toManyProxyGeneration & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_toManyProxyGenerationList::setter_append (GALGAS_toManyProxyGenerationList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inElement COMMA_THERE)) ;
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

void GALGAS_toManyProxyGenerationList::setter_insertAtIndex (const GALGAS_toManyProxyGeneration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_toManyProxyGenerationList::setter_removeAtIndex (GALGAS_toManyProxyGeneration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
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

void GALGAS_toManyProxyGenerationList::setter_popFirst (GALGAS_toManyProxyGeneration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_popLast (GALGAS_toManyProxyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::method_first (GALGAS_toManyProxyGeneration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::method_last (GALGAS_toManyProxyGeneration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::add_operation (const GALGAS_toManyProxyGenerationList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result = GALGAS_toManyProxyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result = GALGAS_toManyProxyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result = GALGAS_toManyProxyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::plusAssign_operation (const GALGAS_toManyProxyGenerationList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_setMPropertyAtIndex (GALGAS_toManyProxyGeneration inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  GALGAS_toManyProxyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_toManyProxyGenerationList::cEnumerator_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element cEnumerator_toManyProxyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyProxyGenerationList * p = (const cCollectionElement_toManyProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration cEnumerator_toManyProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toManyProxyGenerationList * p = (const cCollectionElement_toManyProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@toManyProxyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyProxyGenerationList ("toManyProxyGenerationList",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyProxyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyProxyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGenerationList result ;
  const GALGAS_toManyProxyGenerationList * p = (const GALGAS_toManyProxyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyProxyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @atomicProxyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_atomicProxyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicProxyGeneration * p = (const cPtr_atomicProxyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyKind.objectCompare (p->mProperty_mProxyKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObservedRelationshipName.objectCompare (p->mProperty_mObservedRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObservedPropertyName.objectCompare (p->mProperty_mObservedPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_atomicProxyGeneration::objectCompare (const GALGAS_atomicProxyGeneration & inOperand) const {
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

GALGAS_atomicProxyGeneration::GALGAS_atomicProxyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration::GALGAS_atomicProxyGeneration (const cPtr_atomicProxyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicProxyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                            const GALGAS_proxyKind & inAttribute_mProxyKind,
                                                                            const GALGAS_typeKind & inAttribute_mType,
                                                                            const GALGAS_string & inAttribute_mObservedRelationshipName,
                                                                            const GALGAS_string & inAttribute_mObservedPropertyName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mProxyKind.isValid () && inAttribute_mType.isValid () && inAttribute_mObservedRelationshipName.isValid () && inAttribute_mObservedPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicProxyGeneration (inAttribute_mPropertyName, inAttribute_mProxyKind, inAttribute_mType, inAttribute_mObservedRelationshipName, inAttribute_mObservedPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mObservedRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mObservedPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_atomicProxyGeneration::readProperty_mProxyKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_proxyKind () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mProxyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicProxyGeneration::readProperty_mType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicProxyGeneration::readProperty_mObservedRelationshipName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mObservedRelationshipName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicProxyGeneration::readProperty_mObservedPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mObservedPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @atomicProxyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_atomicProxyGeneration::cPtr_atomicProxyGeneration (const GALGAS_string & in_mPropertyName,
                                                        const GALGAS_proxyKind & in_mProxyKind,
                                                        const GALGAS_typeKind & in_mType,
                                                        const GALGAS_string & in_mObservedRelationshipName,
                                                        const GALGAS_string & in_mObservedPropertyName
                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mProxyKind (in_mProxyKind),
mProperty_mType (in_mType),
mProperty_mObservedRelationshipName (in_mObservedRelationshipName),
mProperty_mObservedPropertyName (in_mObservedPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicProxyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration ;
}

void cPtr_atomicProxyGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@atomicProxyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObservedRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObservedPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicProxyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicProxyGeneration (mProperty_mPropertyName, mProperty_mProxyKind, mProperty_mType, mProperty_mObservedRelationshipName, mProperty_mObservedPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@atomicProxyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicProxyGeneration ("atomicProxyGeneration",
                                              & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicProxyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicProxyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGeneration result ;
  const GALGAS_atomicProxyGeneration * p = (const GALGAS_atomicProxyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicProxyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicProxyGeneration_2D_weak::objectCompare (const GALGAS_atomicProxyGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_atomicProxyGeneration_2D_weak::GALGAS_atomicProxyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration_2D_weak & GALGAS_atomicProxyGeneration_2D_weak::operator = (const GALGAS_atomicProxyGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration_2D_weak::GALGAS_atomicProxyGeneration_2D_weak (const GALGAS_atomicProxyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration_2D_weak GALGAS_atomicProxyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_atomicProxyGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGeneration_2D_weak::bang_atomicProxyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicProxyGeneration) ;
      result = GALGAS_atomicProxyGeneration ((cPtr_atomicProxyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@atomicProxyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicProxyGeneration_2D_weak ("atomicProxyGeneration-weak",
                                                      & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicProxyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicProxyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration_2D_weak GALGAS_atomicProxyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGeneration_2D_weak result ;
  const GALGAS_atomicProxyGeneration_2D_weak * p = (const GALGAS_atomicProxyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicProxyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@atomicProxyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_atomicProxyGenerationList : public cCollectionElement {
  public: GALGAS_atomicProxyGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGeneration & in_mProperty
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_atomicProxyGenerationList::cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGeneration & in_mProperty
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_atomicProxyGenerationList::cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_atomicProxyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_atomicProxyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_atomicProxyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_atomicProxyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_atomicProxyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_atomicProxyGenerationList * operand = (cCollectionElement_atomicProxyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_atomicProxyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList::GALGAS_atomicProxyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList::GALGAS_atomicProxyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_atomicProxyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::constructor_listWithValue (const GALGAS_atomicProxyGeneration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicProxyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_atomicProxyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_atomicProxyGeneration & in_mProperty
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicProxyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_atomicProxyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::addAssign_operation (const GALGAS_atomicProxyGeneration & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_atomicProxyGenerationList::setter_append (GALGAS_atomicProxyGenerationList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inElement COMMA_THERE)) ;
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

void GALGAS_atomicProxyGenerationList::setter_insertAtIndex (const GALGAS_atomicProxyGeneration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_atomicProxyGenerationList::setter_removeAtIndex (GALGAS_atomicProxyGeneration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
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

void GALGAS_atomicProxyGenerationList::setter_popFirst (GALGAS_atomicProxyGeneration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_popLast (GALGAS_atomicProxyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::method_first (GALGAS_atomicProxyGeneration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::method_last (GALGAS_atomicProxyGeneration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::add_operation (const GALGAS_atomicProxyGenerationList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result = GALGAS_atomicProxyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result = GALGAS_atomicProxyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result = GALGAS_atomicProxyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::plusAssign_operation (const GALGAS_atomicProxyGenerationList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_setMPropertyAtIndex (GALGAS_atomicProxyGeneration inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  GALGAS_atomicProxyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_atomicProxyGenerationList::cEnumerator_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element cEnumerator_atomicProxyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicProxyGenerationList * p = (const cCollectionElement_atomicProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration cEnumerator_atomicProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicProxyGenerationList * p = (const cCollectionElement_atomicProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@atomicProxyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicProxyGenerationList ("atomicProxyGenerationList",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicProxyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicProxyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGenerationList result ;
  const GALGAS_atomicProxyGenerationList * p = (const GALGAS_atomicProxyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicProxyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @atomicPropertyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_atomicPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNeedsValidation.objectCompare (p->mProperty_mNeedsValidation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsProxy.objectCompare (p->mProperty_mIsProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValueInSwift.objectCompare (p->mProperty_mDefaultValueInSwift) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInPreferences.objectCompare (p->mProperty_mInPreferences) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_atomicPropertyGeneration::objectCompare (const GALGAS_atomicPropertyGeneration & inOperand) const {
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

GALGAS_atomicPropertyGeneration::GALGAS_atomicPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration::GALGAS_atomicPropertyGeneration (const cPtr_atomicPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                  const GALGAS_bool & inAttribute_mNeedsValidation,
                                                                                  const GALGAS_typeKind & inAttribute_mType,
                                                                                  const GALGAS_bool & inAttribute_mIsProxy,
                                                                                  const GALGAS_string & inAttribute_mDefaultValueInSwift,
                                                                                  const GALGAS_bool & inAttribute_mInPreferences
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mNeedsValidation.isValid () && inAttribute_mType.isValid () && inAttribute_mIsProxy.isValid () && inAttribute_mDefaultValueInSwift.isValid () && inAttribute_mInPreferences.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicPropertyGeneration (inAttribute_mPropertyName, inAttribute_mNeedsValidation, inAttribute_mType, inAttribute_mIsProxy, inAttribute_mDefaultValueInSwift, inAttribute_mInPreferences COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMNeedsValidation (GALGAS_bool inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mNeedsValidation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMIsProxy (GALGAS_bool inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mIsProxy = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMDefaultValueInSwift (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mDefaultValueInSwift = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMInPreferences (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mInPreferences = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::readProperty_mNeedsValidation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mNeedsValidation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicPropertyGeneration::readProperty_mType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::readProperty_mIsProxy (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mIsProxy ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicPropertyGeneration::readProperty_mDefaultValueInSwift (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mDefaultValueInSwift ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::readProperty_mInPreferences (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mInPreferences ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @atomicPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_atomicPropertyGeneration::cPtr_atomicPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                              const GALGAS_bool & in_mNeedsValidation,
                                                              const GALGAS_typeKind & in_mType,
                                                              const GALGAS_bool & in_mIsProxy,
                                                              const GALGAS_string & in_mDefaultValueInSwift,
                                                              const GALGAS_bool & in_mInPreferences
                                                              COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mNeedsValidation (in_mNeedsValidation),
mProperty_mType (in_mType),
mProperty_mIsProxy (in_mIsProxy),
mProperty_mDefaultValueInSwift (in_mDefaultValueInSwift),
mProperty_mInPreferences (in_mInPreferences) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration ;
}

void cPtr_atomicPropertyGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@atomicPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNeedsValidation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultValueInSwift.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInPreferences.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicPropertyGeneration (mProperty_mPropertyName, mProperty_mNeedsValidation, mProperty_mType, mProperty_mIsProxy, mProperty_mDefaultValueInSwift, mProperty_mInPreferences COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@atomicPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGeneration ("atomicPropertyGeneration",
                                                 & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration result ;
  const GALGAS_atomicPropertyGeneration * p = (const GALGAS_atomicPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicPropertyGeneration_2D_weak::objectCompare (const GALGAS_atomicPropertyGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_atomicPropertyGeneration_2D_weak::GALGAS_atomicPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration_2D_weak & GALGAS_atomicPropertyGeneration_2D_weak::operator = (const GALGAS_atomicPropertyGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration_2D_weak::GALGAS_atomicPropertyGeneration_2D_weak (const GALGAS_atomicPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration_2D_weak GALGAS_atomicPropertyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGeneration_2D_weak::bang_atomicPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicPropertyGeneration) ;
      result = GALGAS_atomicPropertyGeneration ((cPtr_atomicPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@atomicPropertyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGeneration_2D_weak ("atomicPropertyGeneration-weak",
                                                         & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration_2D_weak GALGAS_atomicPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration_2D_weak result ;
  const GALGAS_atomicPropertyGeneration_2D_weak * p = (const GALGAS_atomicPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@atomicPropertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_atomicPropertyGenerationList : public cCollectionElement {
  public: GALGAS_atomicPropertyGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGeneration & in_mProperty
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_atomicPropertyGenerationList::cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGeneration & in_mProperty
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_atomicPropertyGenerationList::cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_atomicPropertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_atomicPropertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_atomicPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_atomicPropertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_atomicPropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_atomicPropertyGenerationList * operand = (cCollectionElement_atomicPropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_atomicPropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList::GALGAS_atomicPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList::GALGAS_atomicPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_atomicPropertyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::constructor_listWithValue (const GALGAS_atomicPropertyGeneration & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicPropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_atomicPropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_atomicPropertyGeneration & in_mProperty
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicPropertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::addAssign_operation (const GALGAS_atomicPropertyGeneration & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_atomicPropertyGenerationList::setter_append (GALGAS_atomicPropertyGenerationList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inElement COMMA_THERE)) ;
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

void GALGAS_atomicPropertyGenerationList::setter_insertAtIndex (const GALGAS_atomicPropertyGeneration inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_atomicPropertyGenerationList::setter_removeAtIndex (GALGAS_atomicPropertyGeneration & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
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

void GALGAS_atomicPropertyGenerationList::setter_popFirst (GALGAS_atomicPropertyGeneration & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_popLast (GALGAS_atomicPropertyGeneration & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::method_first (GALGAS_atomicPropertyGeneration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::method_last (GALGAS_atomicPropertyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::add_operation (const GALGAS_atomicPropertyGenerationList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::plusAssign_operation (const GALGAS_atomicPropertyGenerationList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_atomicPropertyGeneration inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  GALGAS_atomicPropertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_atomicPropertyGenerationList::cEnumerator_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element cEnumerator_atomicPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration cEnumerator_atomicPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@atomicPropertyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGenerationList ("atomicPropertyGenerationList",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList result ;
  const GALGAS_atomicPropertyGenerationList * p = (const GALGAS_atomicPropertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne::cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * ptr = dynamic_cast<const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany::cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany::description (C_String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * ptr = dynamic_cast<const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship::GALGAS_toOneOppositeRelationship (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::constructor_oppositeIsToOne (const GALGAS_lstring & inAssociatedValue0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_oppositeIsToOne ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::constructor_oppositeIsToMany (const GALGAS_lstring & inAssociatedValue0
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_oppositeIsToMany ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneOppositeRelationship::method_oppositeIsToOne (GALGAS_lstring & outAssociatedValue0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_oppositeIsToOne) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @toOneOppositeRelationship oppositeIsToOne invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneOppositeRelationship::method_oppositeIsToMany (GALGAS_lstring & outAssociatedValue0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_oppositeIsToMany) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @toOneOppositeRelationship oppositeIsToMany invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toOneOppositeRelationship::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toOneOppositeRelationship::optional_oppositeIsToOne (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_oppositeIsToOne ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) unsafePointer () ;
    // const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toOneOppositeRelationship::optional_oppositeIsToMany (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_oppositeIsToMany ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) unsafePointer () ;
    // const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toOneOppositeRelationship [4] = {
  "(not built)",
  "none",
  "oppositeIsToOne",
  "oppositeIsToMany"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneOppositeRelationship::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneOppositeRelationship::getter_isOppositeIsToOne (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oppositeIsToOne == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneOppositeRelationship::getter_isOppositeIsToMany (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oppositeIsToMany == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneOppositeRelationship::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @toOneOppositeRelationship: " << gEnumNameArrayFor_toOneOppositeRelationship [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toOneOppositeRelationship::objectCompare (const GALGAS_toOneOppositeRelationship & inOperand) const {
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
//@toOneOppositeRelationship type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneOppositeRelationship ("toOneOppositeRelationship",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOneOppositeRelationship::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneOppositeRelationship ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOneOppositeRelationship::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneOppositeRelationship (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  const GALGAS_toOneOppositeRelationship * p = (const GALGAS_toOneOppositeRelationship *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneOppositeRelationship *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneOppositeRelationship", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertyMap::cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_propertyKind & in_mKind,
                                                  const GALGAS_actionMap & in_mActionMap,
                                                  const GALGAS_bool & in_mIsOverriding
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mActionMap (in_mActionMap),
mProperty_mIsOverriding (in_mIsOverriding) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mActionMap.isValid () && mProperty_mIsOverriding.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mKind, mProperty_mActionMap, mProperty_mIsOverriding COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_propertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsOverriding" ":" ;
  mProperty_mIsOverriding.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_propertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertyMap * operand = (cMapElement_propertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (operand->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionMap.objectCompare (operand->mProperty_mActionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsOverriding.objectCompare (operand->mProperty_mIsOverriding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap::GALGAS_propertyMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap::GALGAS_propertyMap (const GALGAS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap & GALGAS_propertyMap::operator = (const GALGAS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::constructor_mapWithMapToOverride (const GALGAS_propertyMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_propertyKind & inArgument0,
                                              const GALGAS_actionMap & inArgument1,
                                              const GALGAS_bool & inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_propertyKind inArgument0,
                                           GALGAS_actionMap inArgument1,
                                           GALGAS_bool inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyMap_searchKey = "there is no '%K' property" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_propertyKind & outArgument0,
                                           GALGAS_actionMap & outArgument1,
                                           GALGAS_bool & outArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_propertyMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mActionMap ;
    outArgument2 = p->mProperty_mIsOverriding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_propertyMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_propertyMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyMap::getter_mIsOverridingForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mIsOverriding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMKindForKey (GALGAS_propertyKind inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMIsOverridingForKey (GALGAS_bool inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mIsOverriding = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertyMap * GALGAS_propertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_propertyMap::cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GALGAS_propertyMap_2D_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mActionMap, p->mProperty_mIsOverriding) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind cEnumerator_propertyMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap cEnumerator_propertyMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mActionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_propertyMap::current_mIsOverriding (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsOverriding ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_propertyKind & outArgument0,
                                             GALGAS_actionMap & outArgument1,
                                             GALGAS_bool & outArgument2) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mActionMap ;
    outArgument2 = p->mProperty_mIsOverriding ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  const GALGAS_propertyMap * p = (const GALGAS_propertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@toOnePropertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_toOnePropertyGenerationList : public cCollectionElement {
  public: GALGAS_toOnePropertyGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGeneration & in_mProperty
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGeneration & in_mProperty
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_toOnePropertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toOnePropertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toOnePropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_toOnePropertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_toOnePropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toOnePropertyGenerationList * operand = (cCollectionElement_toOnePropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toOnePropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList::GALGAS_toOnePropertyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList::GALGAS_toOnePropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toOnePropertyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::constructor_listWithValue (const GALGAS_toOnePropertyGeneration & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toOnePropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toOnePropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_toOnePropertyGeneration & in_mProperty
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_toOnePropertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::addAssign_operation (const GALGAS_toOnePropertyGeneration & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_toOnePropertyGenerationList::setter_append (GALGAS_toOnePropertyGenerationList_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inElement COMMA_THERE)) ;
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

void GALGAS_toOnePropertyGenerationList::setter_insertAtIndex (const GALGAS_toOnePropertyGeneration inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_toOnePropertyGenerationList::setter_removeAtIndex (GALGAS_toOnePropertyGeneration & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
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

void GALGAS_toOnePropertyGenerationList::setter_popFirst (GALGAS_toOnePropertyGeneration & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_popLast (GALGAS_toOnePropertyGeneration & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::method_first (GALGAS_toOnePropertyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::method_last (GALGAS_toOnePropertyGeneration & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::add_operation (const GALGAS_toOnePropertyGenerationList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::plusAssign_operation (const GALGAS_toOnePropertyGenerationList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_toOnePropertyGeneration inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  GALGAS_toOnePropertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_toOnePropertyGenerationList::cEnumerator_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList_2D_element cEnumerator_toOnePropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration cEnumerator_toOnePropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@toOnePropertyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGenerationList ("toOnePropertyGenerationList",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOnePropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOnePropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList result ;
  const GALGAS_toOnePropertyGenerationList * p = (const GALGAS_toOnePropertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOnePropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite::cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (const GALGAS_lstring & inAssociatedValue0
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance::cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST::GALGAS_toManyRelationshipOptionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::constructor_hasOpposite (const GALGAS_lstring & inAssociatedValue0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_hasOpposite ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::constructor_hasDependance (const GALGAS_lstring & inAssociatedValue0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_hasDependance ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionAST::method_hasOpposite (GALGAS_lstring & outAssociatedValue0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasOpposite) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @toManyRelationshipOptionAST hasOpposite invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionAST::method_hasDependance (GALGAS_lstring & outAssociatedValue0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasDependance) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @toManyRelationshipOptionAST hasDependance invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionAST::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionAST::optional_hasOpposite (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_hasOpposite ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) unsafePointer () ;
    // const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionAST::optional_hasDependance (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_hasDependance ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) unsafePointer () ;
    // const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toManyRelationshipOptionAST [4] = {
  "(not built)",
  "none",
  "hasOpposite",
  "hasDependance"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionAST::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionAST::getter_isHasOpposite (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasOpposite == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionAST::getter_isHasDependance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasDependance == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<enum @toManyRelationshipOptionAST: " << gEnumNameArrayFor_toManyRelationshipOptionAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyRelationshipOptionAST::objectCompare (const GALGAS_toManyRelationshipOptionAST & inOperand) const {
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
//@toManyRelationshipOptionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ("toManyRelationshipOptionAST",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipOptionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipOptionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipOptionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  const GALGAS_toManyRelationshipOptionAST * p = (const GALGAS_toManyRelationshipOptionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipOptionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite::cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite (const GALGAS_string & inAssociatedValue0
                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite::description (C_String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance::cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance (const GALGAS_string & inAssociatedValue0,
                                                                                                                                                const GALGAS_string & inAssociatedValue1
                                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance::description (C_String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration::GALGAS_toManyRelationshipOptionGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::constructor_hasOpposite (const GALGAS_string & inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_hasOpposite ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::constructor_hasDependance (const GALGAS_string & inAssociatedValue0,
                                                                                                                const GALGAS_string & inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_hasDependance ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionGeneration::method_hasOpposite (GALGAS_string & outAssociatedValue0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasOpposite) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @toManyRelationshipOptionGeneration hasOpposite invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionGeneration::method_hasDependance (GALGAS_string & outAssociatedValue0,
                                                                      GALGAS_string & outAssociatedValue1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasDependance) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @toManyRelationshipOptionGeneration hasDependance invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionGeneration::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionGeneration::optional_hasOpposite (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_hasOpposite ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) unsafePointer () ;
    // const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionGeneration::optional_hasDependance (GALGAS_string & outAssociatedValue0,
                                                                        GALGAS_string & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_hasDependance ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) unsafePointer () ;
    // const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toManyRelationshipOptionGeneration [4] = {
  "(not built)",
  "none",
  "hasOpposite",
  "hasDependance"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionGeneration::getter_isHasOpposite (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasOpposite == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionGeneration::getter_isHasDependance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasDependance == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<enum @toManyRelationshipOptionGeneration: " << gEnumNameArrayFor_toManyRelationshipOptionGeneration [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyRelationshipOptionGeneration::objectCompare (const GALGAS_toManyRelationshipOptionGeneration & inOperand) const {
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
//@toManyRelationshipOptionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ("toManyRelationshipOptionGeneration",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipOptionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipOptionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipOptionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  const GALGAS_toManyRelationshipOptionGeneration * p = (const GALGAS_toManyRelationshipOptionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipOptionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @toManyPropertyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toManyPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRelationshipType.objectCompare (p->mProperty_mRelationshipType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInPreferences.objectCompare (p->mProperty_mInPreferences) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCustomStore.objectCompare (p->mProperty_mCustomStore) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsedForSignature.objectCompare (p->mProperty_mUsedForSignature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_toManyPropertyGeneration::objectCompare (const GALGAS_toManyPropertyGeneration & inOperand) const {
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

GALGAS_toManyPropertyGeneration::GALGAS_toManyPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration::GALGAS_toManyPropertyGeneration (const cPtr_toManyPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyPropertyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                  const GALGAS_propertyKind & inAttribute_mRelationshipType,
                                                                                  const GALGAS_toManyRelationshipOptionGeneration & inAttribute_mOption,
                                                                                  const GALGAS_bool & inAttribute_mInPreferences,
                                                                                  const GALGAS_bool & inAttribute_mCustomStore,
                                                                                  const GALGAS_bool & inAttribute_mUsedForSignature
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mRelationshipType.isValid () && inAttribute_mOption.isValid () && inAttribute_mInPreferences.isValid () && inAttribute_mCustomStore.isValid () && inAttribute_mUsedForSignature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyPropertyGeneration (inAttribute_mPropertyName, inAttribute_mRelationshipType, inAttribute_mOption, inAttribute_mInPreferences, inAttribute_mCustomStore, inAttribute_mUsedForSignature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGeneration::setter_setMRelationshipType (GALGAS_propertyKind inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    p->mProperty_mRelationshipType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGeneration::setter_setMOption (GALGAS_toManyRelationshipOptionGeneration inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    p->mProperty_mOption = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGeneration::setter_setMInPreferences (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    p->mProperty_mInPreferences = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGeneration::setter_setMCustomStore (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    p->mProperty_mCustomStore = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGeneration::setter_setMUsedForSignature (GALGAS_bool inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_toManyPropertyGeneration::readProperty_mRelationshipType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyKind () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mRelationshipType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyPropertyGeneration::readProperty_mOption (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_toManyRelationshipOptionGeneration () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mOption ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::readProperty_mInPreferences (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mInPreferences ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::readProperty_mCustomStore (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mCustomStore ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::readProperty_mUsedForSignature (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @toManyPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_toManyPropertyGeneration::cPtr_toManyPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                              const GALGAS_propertyKind & in_mRelationshipType,
                                                              const GALGAS_toManyRelationshipOptionGeneration & in_mOption,
                                                              const GALGAS_bool & in_mInPreferences,
                                                              const GALGAS_bool & in_mCustomStore,
                                                              const GALGAS_bool & in_mUsedForSignature
                                                              COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mRelationshipType (in_mRelationshipType),
mProperty_mOption (in_mOption),
mProperty_mInPreferences (in_mInPreferences),
mProperty_mCustomStore (in_mCustomStore),
mProperty_mUsedForSignature (in_mUsedForSignature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toManyPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration ;
}

void cPtr_toManyPropertyGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@toManyPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInPreferences.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCustomStore.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toManyPropertyGeneration (mProperty_mPropertyName, mProperty_mRelationshipType, mProperty_mOption, mProperty_mInPreferences, mProperty_mCustomStore, mProperty_mUsedForSignature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@toManyPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGeneration ("toManyPropertyGeneration",
                                                 & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration result ;
  const GALGAS_toManyPropertyGeneration * p = (const GALGAS_toManyPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyPropertyGeneration_2D_weak::objectCompare (const GALGAS_toManyPropertyGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_toManyPropertyGeneration_2D_weak::GALGAS_toManyPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration_2D_weak & GALGAS_toManyPropertyGeneration_2D_weak::operator = (const GALGAS_toManyPropertyGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration_2D_weak::GALGAS_toManyPropertyGeneration_2D_weak (const GALGAS_toManyPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration_2D_weak GALGAS_toManyPropertyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGeneration_2D_weak::bang_toManyPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyPropertyGeneration) ;
      result = GALGAS_toManyPropertyGeneration ((cPtr_toManyPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@toManyPropertyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGeneration_2D_weak ("toManyPropertyGeneration-weak",
                                                         & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration_2D_weak GALGAS_toManyPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration_2D_weak result ;
  const GALGAS_toManyPropertyGeneration_2D_weak * p = (const GALGAS_toManyPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@toManyPropertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_toManyPropertyGenerationList : public cCollectionElement {
  public: GALGAS_toManyPropertyGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_toManyPropertyGenerationList (const GALGAS_toManyPropertyGeneration & in_mProperty
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_toManyPropertyGenerationList (const GALGAS_toManyPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_toManyPropertyGenerationList::cCollectionElement_toManyPropertyGenerationList (const GALGAS_toManyPropertyGeneration & in_mProperty
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_toManyPropertyGenerationList::cCollectionElement_toManyPropertyGenerationList (const GALGAS_toManyPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_toManyPropertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toManyPropertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toManyPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_toManyPropertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_toManyPropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyPropertyGenerationList * operand = (cCollectionElement_toManyPropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyPropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList::GALGAS_toManyPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList::GALGAS_toManyPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyPropertyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::constructor_listWithValue (const GALGAS_toManyPropertyGeneration & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyPropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toManyPropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_toManyPropertyGeneration & in_mProperty
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyPropertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::addAssign_operation (const GALGAS_toManyPropertyGeneration & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_toManyPropertyGenerationList::setter_append (GALGAS_toManyPropertyGenerationList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (inElement COMMA_THERE)) ;
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

void GALGAS_toManyPropertyGenerationList::setter_insertAtIndex (const GALGAS_toManyPropertyGeneration inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_toManyPropertyGenerationList::setter_removeAtIndex (GALGAS_toManyPropertyGeneration & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
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

void GALGAS_toManyPropertyGenerationList::setter_popFirst (GALGAS_toManyPropertyGeneration & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_popLast (GALGAS_toManyPropertyGeneration & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::method_first (GALGAS_toManyPropertyGeneration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::method_last (GALGAS_toManyPropertyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::add_operation (const GALGAS_toManyPropertyGenerationList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result = GALGAS_toManyPropertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result = GALGAS_toManyPropertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result = GALGAS_toManyPropertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::plusAssign_operation (const GALGAS_toManyPropertyGenerationList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_toManyPropertyGeneration inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  GALGAS_toManyPropertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_toManyPropertyGenerationList::cEnumerator_toManyPropertyGenerationList (const GALGAS_toManyPropertyGenerationList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element cEnumerator_toManyPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyPropertyGenerationList * p = (const cCollectionElement_toManyPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration cEnumerator_toManyPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toManyPropertyGenerationList * p = (const cCollectionElement_toManyPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@toManyPropertyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGenerationList ("toManyPropertyGenerationList",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList result ;
  const GALGAS_toManyPropertyGenerationList * p = (const GALGAS_toManyPropertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@validationStubRoutineListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_validationStubRoutineListForGeneration : public cCollectionElement {
  public: GALGAS_validationStubRoutineListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_string & in_mObjectTypeName,
                                                                     const GALGAS_string & in_mModelName,
                                                                     const GALGAS_string & in_mModelTypeName
                                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_string & in_mObjectTypeName,
                                                                                                                      const GALGAS_string & in_mModelName,
                                                                                                                      const GALGAS_string & in_mModelTypeName
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mObjectTypeName, in_mModelName, in_mModelTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mObjectTypeName, inElement.mProperty_mModelName, inElement.mProperty_mModelTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_validationStubRoutineListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_validationStubRoutineListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_validationStubRoutineListForGeneration (mObject.mProperty_mObjectTypeName, mObject.mProperty_mModelName, mObject.mProperty_mModelTypeName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_validationStubRoutineListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObjectTypeName" ":" ;
  mObject.mProperty_mObjectTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelName" ":" ;
  mObject.mProperty_mModelName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelTypeName" ":" ;
  mObject.mProperty_mModelTypeName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_validationStubRoutineListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_validationStubRoutineListForGeneration * operand = (cCollectionElement_validationStubRoutineListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_validationStubRoutineListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration::GALGAS_validationStubRoutineListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration::GALGAS_validationStubRoutineListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_validationStubRoutineListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_validationStubRoutineListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_string & in_mObjectTypeName,
                                                                               const GALGAS_string & in_mModelName,
                                                                               const GALGAS_string & in_mModelTypeName
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (in_mObjectTypeName,
                                                                            in_mModelName,
                                                                            in_mModelTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                         const GALGAS_string & inOperand1,
                                                                         const GALGAS_string & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_validationStubRoutineListForGeneration::setter_append (GALGAS_validationStubRoutineListForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inElement COMMA_THERE)) ;
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

void GALGAS_validationStubRoutineListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                          const GALGAS_string inOperand1,
                                                                          const GALGAS_string inOperand2,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_validationStubRoutineListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mObjectTypeName ;
        outOperand1 = p->mObject.mProperty_mModelName ;
        outOperand2 = p->mObject.mProperty_mModelTypeName ;
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

void GALGAS_validationStubRoutineListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::add_operation (const GALGAS_validationStubRoutineListForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::plusAssign_operation (const GALGAS_validationStubRoutineListForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_setMObjectTypeNameAtIndex (GALGAS_string inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObjectTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mObjectTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mObjectTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_setMModelNameAtIndex (GALGAS_string inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mModelNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mModelName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_setMModelTypeNameAtIndex (GALGAS_string inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mModelTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mModelTypeName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_validationStubRoutineListForGeneration::cEnumerator_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element cEnumerator_validationStubRoutineListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mObjectTypeName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mObjectTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mModelName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mModelName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mModelTypeName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mModelTypeName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@validationStubRoutineListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ("validationStubRoutineListForGeneration",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration result ;
  const GALGAS_validationStubRoutineListForGeneration * p = (const GALGAS_validationStubRoutineListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_validationStubRoutineListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_actionMap::cMapElement_actionMap (const GALGAS_lstring & inKey
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_actionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_actionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_actionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_actionMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_actionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_actionMap * operand = (cMapElement_actionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap::GALGAS_actionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap::GALGAS_actionMap (const GALGAS_actionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap & GALGAS_actionMap::operator = (const GALGAS_actionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_actionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::constructor_mapWithMapToOverride (const GALGAS_actionMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_actionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_actionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = NULL ;
  macroMyNew (p, cMapElement_actionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@actionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionMap::setter_insertKey (GALGAS_lstring inKey,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = NULL ;
  macroMyNew (p, cMapElement_actionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' action" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_actionMap_searchKey = "the '%K' action is not defined" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionMap::method_searchKey (GALGAS_lstring inKey,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_actionMap_searchKey
                                                                                   COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_actionMap) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_actionMap * GALGAS_actionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * result = (cMapElement_actionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_actionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_actionMap::cEnumerator_actionMap (const GALGAS_actionMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap_2D_element cEnumerator_actionMap::current (LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actionMap) ;
  return GALGAS_actionMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_actionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actionMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_actionMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionMap ("actionMap",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actionMap result ;
  const GALGAS_actionMap * p = (const GALGAS_actionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @actionFileGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_actionFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_actionFileGeneration * p = (const cPtr_actionFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_actionFileGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionName.objectCompare (p->mProperty_mActionName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_actionFileGeneration::objectCompare (const GALGAS_actionFileGeneration & inOperand) const {
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

GALGAS_actionFileGeneration::GALGAS_actionFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_actionFileGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration::GALGAS_actionFileGeneration (const cPtr_actionFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actionFileGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::constructor_new (const GALGAS_string & inAttribute_mClassName,
                                                                          const GALGAS_string & inAttribute_mActionName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_actionFileGeneration result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mActionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_actionFileGeneration (inAttribute_mClassName, inAttribute_mActionName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionFileGeneration::setter_setMClassName (GALGAS_string inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionFileGeneration::setter_setMActionName (GALGAS_string inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mActionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionFileGeneration::readProperty_mClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionFileGeneration::readProperty_mActionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    return p->mProperty_mActionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @actionFileGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_actionFileGeneration::cPtr_actionFileGeneration (const GALGAS_string & in_mClassName,
                                                      const GALGAS_string & in_mActionName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mClassName (in_mClassName),
mProperty_mActionName (in_mActionName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_actionFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

void cPtr_actionFileGeneration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@actionFileGeneration:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_actionFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_actionFileGeneration (mProperty_mClassName, mProperty_mActionName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@actionFileGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionFileGeneration ("actionFileGeneration",
                                             & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionFileGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionFileGeneration result ;
  const GALGAS_actionFileGeneration * p = (const GALGAS_actionFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actionFileGeneration_2D_weak::objectCompare (const GALGAS_actionFileGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_actionFileGeneration_2D_weak::GALGAS_actionFileGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration_2D_weak & GALGAS_actionFileGeneration_2D_weak::operator = (const GALGAS_actionFileGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration_2D_weak::GALGAS_actionFileGeneration_2D_weak (const GALGAS_actionFileGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration_2D_weak GALGAS_actionFileGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_actionFileGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration GALGAS_actionFileGeneration_2D_weak::bang_actionFileGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_actionFileGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actionFileGeneration) ;
      result = GALGAS_actionFileGeneration ((cPtr_actionFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actionFileGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionFileGeneration_2D_weak ("actionFileGeneration-weak",
                                                     & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionFileGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionFileGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionFileGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration_2D_weak GALGAS_actionFileGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionFileGeneration_2D_weak result ;
  const GALGAS_actionFileGeneration_2D_weak * p = (const GALGAS_actionFileGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionFileGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST::GALGAS_multipleBindingComparisonAST (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_lower (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lower ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_greater (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greater ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_notEqual () const {
  const bool ok = mEnum == kEnum_notEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_lower () const {
  const bool ok = mEnum == kEnum_lower ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_lowerOrEqual () const {
  const bool ok = mEnum == kEnum_lowerOrEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_greater () const {
  const bool ok = mEnum == kEnum_greater ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_greaterOrEqual () const {
  const bool ok = mEnum == kEnum_greaterOrEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_multipleBindingComparisonAST [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lower",
  "lowerOrEqual",
  "greater",
  "greaterOrEqual"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLower (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lower == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreater (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greater == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingComparisonAST::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @multipleBindingComparisonAST: " << gEnumNameArrayFor_multipleBindingComparisonAST [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_multipleBindingComparisonAST::objectCompare (const GALGAS_multipleBindingComparisonAST & inOperand) const {
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
//@multipleBindingComparisonAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingComparisonAST ("multipleBindingComparisonAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multipleBindingComparisonAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multipleBindingComparisonAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingComparisonAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  const GALGAS_multipleBindingComparisonAST * p = (const GALGAS_multipleBindingComparisonAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingComparisonAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingComparisonAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractBooleanMultipleBindingExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (const cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractBooleanMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractBooleanMultipleBindingExpressionAST::cPtr_abstractBooleanMultipleBindingExpressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractBooleanMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ("abstractBooleanMultipleBindingExpressionAST",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_abstractBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionAST * p = (const GALGAS_abstractBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak & GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::bang_abstractBooleanMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
      result = GALGAS_abstractBooleanMultipleBindingExpressionAST ((cPtr_abstractBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractBooleanMultipleBindingExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak ("abstractBooleanMultipleBindingExpressionAST-weak",
                                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @negateBooleanMultipleBindingExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionAST * p = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mBinding.objectCompare (p->mProperty_mBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (const cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionAST (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_negateBooleanMultipleBindingExpressionAST::setter_setMBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::readProperty_mBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @negateBooleanMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionAST::cPtr_negateBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mBinding
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mBinding (in_mBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

void cPtr_negateBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingExpressionAST:" ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionAST (mProperty_mBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@negateBooleanMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ("negateBooleanMultipleBindingExpressionAST",
                                                                  & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  const GALGAS_negateBooleanMultipleBindingExpressionAST * p = (const GALGAS_negateBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak & GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_negateBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak (const GALGAS_negateBooleanMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::bang_negateBooleanMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
      result = GALGAS_negateBooleanMultipleBindingExpressionAST ((cPtr_negateBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@negateBooleanMultipleBindingExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak ("negateBooleanMultipleBindingExpressionAST-weak",
                                                                          & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @comparisonMultipleBindingExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_comparisonMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
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


typeComparisonResult GALGAS_comparisonMultipleBindingExpressionAST::objectCompare (const GALGAS_comparisonMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (const cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_multipleBindingComparisonAST & inAttribute_mOperator,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mOperator, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionAST::setter_setMOperator (GALGAS_multipleBindingComparisonAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionAST::readProperty_mOperator (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_multipleBindingComparisonAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @comparisonMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionAST::cPtr_comparisonMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mOperator (in_mOperator),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

void cPtr_comparisonMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@comparisonMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ("comparisonMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  const GALGAS_comparisonMultipleBindingExpressionAST * p = (const GALGAS_comparisonMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_comparisonMultipleBindingExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::GALGAS_comparisonMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST_2D_weak & GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_comparisonMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::GALGAS_comparisonMultipleBindingExpressionAST_2D_weak (const GALGAS_comparisonMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST_2D_weak GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::bang_comparisonMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonMultipleBindingExpressionAST) ;
      result = GALGAS_comparisonMultipleBindingExpressionAST ((cPtr_comparisonMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonMultipleBindingExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2D_weak ("comparisonMultipleBindingExpressionAST-weak",
                                                                       & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST_2D_weak GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_comparisonMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_comparisonMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @andBooleanMultipleBindingExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (const cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @andBooleanMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionAST::cPtr_andBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

void cPtr_andBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@andBooleanMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@andBooleanMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ("andBooleanMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  const GALGAS_andBooleanMultipleBindingExpressionAST * p = (const GALGAS_andBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak & GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_andBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak (const GALGAS_andBooleanMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::bang_andBooleanMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
      result = GALGAS_andBooleanMultipleBindingExpressionAST ((cPtr_andBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@andBooleanMultipleBindingExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak ("andBooleanMultipleBindingExpressionAST-weak",
                                                                       & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @orBooleanMultipleBindingExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (const cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @orBooleanMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionAST::cPtr_orBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                        const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

void cPtr_orBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@orBooleanMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@orBooleanMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ("orBooleanMultipleBindingExpressionAST",
                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  const GALGAS_orBooleanMultipleBindingExpressionAST * p = (const GALGAS_orBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak & GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_orBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak (const GALGAS_orBooleanMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::bang_orBooleanMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
      result = GALGAS_orBooleanMultipleBindingExpressionAST ((cPtr_orBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@orBooleanMultipleBindingExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak ("orBooleanMultipleBindingExpressionAST-weak",
                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @xorBooleanMultipleBindingExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xorBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorBooleanMultipleBindingExpressionAST * p = (const cPtr_xorBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_xorBooleanMultipleBindingExpressionAST::GALGAS_xorBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST::GALGAS_xorBooleanMultipleBindingExpressionAST (const cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xorBooleanMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionAST::cPtr_xorBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

void cPtr_xorBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@xorBooleanMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xorBooleanMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ("xorBooleanMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST * p = (const GALGAS_xorBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak & GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_xorBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak (const GALGAS_xorBooleanMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::bang_xorBooleanMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
      result = GALGAS_xorBooleanMultipleBindingExpressionAST ((cPtr_xorBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@xorBooleanMultipleBindingExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak ("xorBooleanMultipleBindingExpressionAST-weak",
                                                                       & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @observablePropertyInMultipleBindingExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_observablePropertyInMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mProperty.objectCompare (p->mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_observablePropertyInMultipleBindingExpressionAST::objectCompare (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (const cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (const GALGAS_observablePropertyAST & inAttribute_mProperty
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  if (inAttribute_mProperty.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyInMultipleBindingExpressionAST (inAttribute_mProperty COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyInMultipleBindingExpressionAST::setter_setMProperty (GALGAS_observablePropertyAST inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    p->mProperty_mProperty = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyInMultipleBindingExpressionAST::readProperty_mProperty (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_observablePropertyAST () ;
  }else{
    cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    return p->mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @observablePropertyInMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (const GALGAS_observablePropertyAST & in_mProperty
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mProperty (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_observablePropertyInMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

void cPtr_observablePropertyInMultipleBindingExpressionAST::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@observablePropertyInMultipleBindingExpressionAST:" ;
  mProperty_mProperty.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_observablePropertyInMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyInMultipleBindingExpressionAST (mProperty_mProperty COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@observablePropertyInMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ("observablePropertyInMultipleBindingExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyInMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyInMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyInMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST * p = (const GALGAS_observablePropertyInMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyInMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak & GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::bang_observablePropertyInMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
      result = GALGAS_observablePropertyInMultipleBindingExpressionAST ((cPtr_observablePropertyInMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@observablePropertyInMultipleBindingExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak ("observablePropertyInMultipleBindingExpressionAST-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ((cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractBooleanMultipleBindingExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak ("abstractBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @observablePropertyAsBooleanMultipleBindingExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mObservedModelString.objectCompare (p->mProperty_mObservedModelString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string::constructor_default (HERE)
                                                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_string & inAttribute_mObservedModelString
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mObservedModelString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (inAttribute_mObservedModelString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::setter_setMObservedModelString (GALGAS_string inValue
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mObservedModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::readProperty_mObservedModelString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mObservedModelString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedModelString
                                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mObservedModelString (in_mObservedModelString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString << "[@observablePropertyAsBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mObservedModelString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (mProperty_mObservedModelString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@observablePropertyAsBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ((cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@observablePropertyAsBooleanMultipleBindingExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @booleanMultipleBindingLiteralIntForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_booleanMultipleBindingLiteralIntForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_booleanMultipleBindingLiteralIntForGeneration::objectCompare (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const {
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

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (const cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (const GALGAS_uint & inAttribute_mValue
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_booleanMultipleBindingLiteralIntForGeneration::setter_setMValue (GALGAS_uint inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_booleanMultipleBindingLiteralIntForGeneration::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @booleanMultipleBindingLiteralIntForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_booleanMultipleBindingLiteralIntForGeneration::cPtr_booleanMultipleBindingLiteralIntForGeneration (const GALGAS_uint & in_mValue
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_booleanMultipleBindingLiteralIntForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

void cPtr_booleanMultipleBindingLiteralIntForGeneration::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@booleanMultipleBindingLiteralIntForGeneration:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_booleanMultipleBindingLiteralIntForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanMultipleBindingLiteralIntForGeneration (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@booleanMultipleBindingLiteralIntForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ("booleanMultipleBindingLiteralIntForGeneration",
                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_booleanMultipleBindingLiteralIntForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_booleanMultipleBindingLiteralIntForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanMultipleBindingLiteralIntForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  const GALGAS_booleanMultipleBindingLiteralIntForGeneration * p = (const GALGAS_booleanMultipleBindingLiteralIntForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_booleanMultipleBindingLiteralIntForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanMultipleBindingLiteralIntForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::objectCompare (const GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak & GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::operator = (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::bang_booleanMultipleBindingLiteralIntForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
      result = GALGAS_booleanMultipleBindingLiteralIntForGeneration ((cPtr_booleanMultipleBindingLiteralIntForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@booleanMultipleBindingLiteralIntForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak ("booleanMultipleBindingLiteralIntForGeneration-weak",
                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak result ;
  const GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak * p = (const GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanMultipleBindingLiteralIntForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @negateBooleanMultipleBindingExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mBinding.objectCompare (p->mProperty_mBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (const cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mBinding
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_negateBooleanMultipleBindingExpressionForGeneration::setter_setMBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::readProperty_mBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionForGeneration::cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mBinding (in_mBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (mProperty_mBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@negateBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ("negateBooleanMultipleBindingExpressionForGeneration",
                                                                            & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_negateBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_negateBooleanMultipleBindingExpressionForGeneration ((cPtr_negateBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@negateBooleanMultipleBindingExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak ("negateBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_orBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_andBooleanMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak & GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::bang_comparisonMultipleBindingExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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

static TC_UniqueArray <extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding> gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeExpressionForMultipleBinding (const int32_t inClassIndex,
                                                               extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding inMethod) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (NULL,
                                                                                                            freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                              const GALGAS_bool constin_inPreferences,
                                                              const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                                              const GALGAS_semanticContext constin_inSemanticContext,
                                                              const GALGAS_propertyMap constin_inCurrentObservablePropertyMap,
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
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.count ()) {
      f = gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.count ()) {
          f = gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inPreferences, constin_inRootObservablePropertyMap, constin_inSemanticContext, constin_inCurrentObservablePropertyMap, out_outEnableExpression, out_outType, out_outErrorLocation, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString> gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_expressionString (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString inGetter) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (NULL,
                                                                                                   freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.count ()) {
      f = gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.count ()) {
           f = gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship::cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
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
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_arrayControllerPropertyGeneration_2D_weak::GALGAS_arrayControllerPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak & GALGAS_arrayControllerPropertyGeneration_2D_weak::operator = (const GALGAS_arrayControllerPropertyGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak::GALGAS_arrayControllerPropertyGeneration_2D_weak (const GALGAS_arrayControllerPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak GALGAS_arrayControllerPropertyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration_2D_weak::bang_arrayControllerPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerPropertyGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
//
//Class for element of '@tableViewControllerBoundColumnListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_tableViewControllerBoundColumnListAST : public cCollectionElement {
  public: GALGAS_tableViewControllerBoundColumnListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_tableViewControllerBoundColumnListAST (const GALGAS_lstring & in_mColumnName,
                                                                    const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                    const GALGAS_tableViewColumnBindingAST & in_mColumnBindingAST,
                                                                    const GALGAS_lstring & in_mSortPropertyName
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_tableViewControllerBoundColumnListAST (const GALGAS_tableViewControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_tableViewControllerBoundColumnListAST::cCollectionElement_tableViewControllerBoundColumnListAST (const GALGAS_lstring & in_mColumnName,
                                                                                                                    const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                                                                    const GALGAS_tableViewColumnBindingAST & in_mColumnBindingAST,
                                                                                                                    const GALGAS_lstring & in_mSortPropertyName
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mColumnBindingAST, in_mSortPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerBoundColumnListAST::cCollectionElement_tableViewControllerBoundColumnListAST (const GALGAS_tableViewControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mColumnOutletTypeName, inElement.mProperty_mColumnBindingAST, inElement.mProperty_mSortPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_tableViewControllerBoundColumnListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_tableViewControllerBoundColumnListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewControllerBoundColumnListAST (mObject.mProperty_mColumnName, mObject.mProperty_mColumnOutletTypeName, mObject.mProperty_mColumnBindingAST, mObject.mProperty_mSortPropertyName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_tableViewControllerBoundColumnListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnOutletTypeName" ":" ;
  mObject.mProperty_mColumnOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnBindingAST" ":" ;
  mObject.mProperty_mColumnBindingAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortPropertyName" ":" ;
  mObject.mProperty_mSortPropertyName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_tableViewControllerBoundColumnListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewControllerBoundColumnListAST * operand = (cCollectionElement_tableViewControllerBoundColumnListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST::GALGAS_tableViewControllerBoundColumnListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST::GALGAS_tableViewControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerBoundColumnListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                                      const GALGAS_tableViewColumnBindingAST & inOperand2,
                                                                                                                      const GALGAS_lstring & inOperand3
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_tableViewControllerBoundColumnListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_tableViewControllerBoundColumnListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_lstring & in_mColumnName,
                                                                              const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                              const GALGAS_tableViewColumnBindingAST & in_mColumnBindingAST,
                                                                              const GALGAS_lstring & in_mSortPropertyName
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListAST (in_mColumnName,
                                                                           in_mColumnOutletTypeName,
                                                                           in_mColumnBindingAST,
                                                                           in_mSortPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_tableViewColumnBindingAST & inOperand2,
                                                                        const GALGAS_lstring & inOperand3
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_tableViewControllerBoundColumnListAST::setter_append (GALGAS_tableViewControllerBoundColumnListAST_2D_element inElement,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListAST (inElement COMMA_THERE)) ;
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

void GALGAS_tableViewControllerBoundColumnListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                         const GALGAS_lstring inOperand1,
                                                                         const GALGAS_tableViewColumnBindingAST inOperand2,
                                                                         const GALGAS_lstring inOperand3,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_tableViewControllerBoundColumnListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                         GALGAS_lstring & outOperand1,
                                                                         GALGAS_tableViewColumnBindingAST & outOperand2,
                                                                         GALGAS_lstring & outOperand3,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
        outOperand0 = p->mObject.mProperty_mColumnName ;
        outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
        outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
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

void GALGAS_tableViewControllerBoundColumnListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    GALGAS_tableViewColumnBindingAST & outOperand2,
                                                                    GALGAS_lstring & outOperand3,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   GALGAS_tableViewColumnBindingAST & outOperand2,
                                                                   GALGAS_lstring & outOperand3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::method_first (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_tableViewColumnBindingAST & outOperand2,
                                                                 GALGAS_lstring & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::method_last (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_tableViewColumnBindingAST & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::add_operation (const GALGAS_tableViewControllerBoundColumnListAST & inOperand,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListAST result = GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListAST result = GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListAST result = GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::plusAssign_operation (const GALGAS_tableViewControllerBoundColumnListAST inOperand,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_setMColumnNameAtIndex (GALGAS_lstring inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerBoundColumnListAST::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_setMColumnOutletTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnOutletTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerBoundColumnListAST::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnOutletTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_setMColumnBindingASTAtIndex (GALGAS_tableViewColumnBindingAST inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnBindingAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST GALGAS_tableViewControllerBoundColumnListAST::getter_mColumnBindingASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_tableViewColumnBindingAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnBindingAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_setMSortPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerBoundColumnListAST::getter_mSortPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mSortPropertyName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_tableViewControllerBoundColumnListAST::cEnumerator_tableViewControllerBoundColumnListAST (const GALGAS_tableViewControllerBoundColumnListAST & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST_2D_element cEnumerator_tableViewControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListAST * p = (const cCollectionElement_tableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_tableViewControllerBoundColumnListAST::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListAST * p = (const cCollectionElement_tableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_tableViewControllerBoundColumnListAST::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListAST * p = (const cCollectionElement_tableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnOutletTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST cEnumerator_tableViewControllerBoundColumnListAST::current_mColumnBindingAST (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListAST * p = (const cCollectionElement_tableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnBindingAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_tableViewControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListAST * p = (const cCollectionElement_tableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mSortPropertyName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerBoundColumnListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListAST ("tableViewControllerBoundColumnListAST",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerBoundColumnListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerBoundColumnListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerBoundColumnListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListAST result ;
  const GALGAS_tableViewControllerBoundColumnListAST * p = (const GALGAS_tableViewControllerBoundColumnListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerBoundColumnListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerBoundColumnListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@tableViewControllerAttributListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_tableViewControllerAttributListAST : public cCollectionElement {
  public: GALGAS_tableViewControllerAttributListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_tableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                 const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_tableViewControllerAttributListAST (const GALGAS_tableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_tableViewControllerAttributListAST::cCollectionElement_tableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                                              const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerAttributListAST::cCollectionElement_tableViewControllerAttributListAST (const GALGAS_tableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_tableViewControllerAttributListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_tableViewControllerAttributListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewControllerAttributListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_tableViewControllerAttributListAST::description (C_String & ioString, const int32_t inIndentation) const {
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

typeComparisonResult cCollectionElement_tableViewControllerAttributListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewControllerAttributListAST * operand = (cCollectionElement_tableViewControllerAttributListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewControllerAttributListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST::GALGAS_tableViewControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST::GALGAS_tableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerAttributListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_abstractDefaultValue & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerAttributListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewControllerAttributListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_tableViewControllerAttributListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mAttributeName,
                                                                           const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerAttributListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_tableViewControllerAttributListAST (in_mAttributeName,
                                                                        in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_abstractDefaultValue & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_tableViewControllerAttributListAST::setter_append (GALGAS_tableViewControllerAttributListAST_2D_element inElement,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerAttributListAST (inElement COMMA_THERE)) ;
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

void GALGAS_tableViewControllerAttributListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_abstractDefaultValue inOperand1,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_tableViewControllerAttributListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_abstractDefaultValue & outOperand1,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
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

void GALGAS_tableViewControllerAttributListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_abstractDefaultValue & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_abstractDefaultValue & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_abstractDefaultValue & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_abstractDefaultValue & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::add_operation (const GALGAS_tableViewControllerAttributListAST & inOperand,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerAttributListAST result = GALGAS_tableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerAttributListAST result = GALGAS_tableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerAttributListAST result = GALGAS_tableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::plusAssign_operation (const GALGAS_tableViewControllerAttributListAST inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerAttributListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::setter_setMAttributeValueAtIndex (GALGAS_abstractDefaultValue inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_tableViewControllerAttributListAST::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_tableViewControllerAttributListAST::cEnumerator_tableViewControllerAttributListAST (const GALGAS_tableViewControllerAttributListAST & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST_2D_element cEnumerator_tableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerAttributListAST * p = (const cCollectionElement_tableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_tableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerAttributListAST * p = (const cCollectionElement_tableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue cEnumerator_tableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerAttributListAST * p = (const cCollectionElement_tableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerAttributListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerAttributListAST ("tableViewControllerAttributListAST",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerAttributListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerAttributListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerAttributListAST result ;
  const GALGAS_tableViewControllerAttributListAST * p = (const GALGAS_tableViewControllerAttributListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @tableViewControllerPropertyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_tableViewControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tableViewControllerPropertyGeneration * p = (const cPtr_tableViewControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tableViewControllerPropertyGeneration) ;
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


typeComparisonResult GALGAS_tableViewControllerPropertyGeneration::objectCompare (const GALGAS_tableViewControllerPropertyGeneration & inOperand) const {
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

GALGAS_tableViewControllerPropertyGeneration::GALGAS_tableViewControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration GALGAS_tableViewControllerPropertyGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_tableViewControllerPropertyGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration::GALGAS_tableViewControllerPropertyGeneration (const cPtr_tableViewControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tableViewControllerPropertyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration GALGAS_tableViewControllerPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                            const GALGAS_string & inAttribute_mModelString,
                                                                                                            const GALGAS_string & inAttribute_mOwnerName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mOwnerName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tableViewControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mModelString, inAttribute_mOwnerName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerPropertyGeneration::setter_setMModelString (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerPropertyGeneration * p = (cPtr_tableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerPropertyGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerPropertyGeneration * p = (cPtr_tableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerPropertyGeneration::readProperty_mModelString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_tableViewControllerPropertyGeneration * p = (cPtr_tableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerPropertyGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_tableViewControllerPropertyGeneration * p = (cPtr_tableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @tableViewControllerPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_tableViewControllerPropertyGeneration::cPtr_tableViewControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                        const GALGAS_string & in_mModelString,
                                                                                        const GALGAS_string & in_mOwnerName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mModelString (in_mModelString),
mProperty_mOwnerName (in_mOwnerName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_tableViewControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration ;
}

void cPtr_tableViewControllerPropertyGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@tableViewControllerPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tableViewControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tableViewControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration ("tableViewControllerPropertyGeneration",
                                                              & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration GALGAS_tableViewControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerPropertyGeneration result ;
  const GALGAS_tableViewControllerPropertyGeneration * p = (const GALGAS_tableViewControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tableViewControllerPropertyGeneration_2D_weak::objectCompare (const GALGAS_tableViewControllerPropertyGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_tableViewControllerPropertyGeneration_2D_weak::GALGAS_tableViewControllerPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration_2D_weak & GALGAS_tableViewControllerPropertyGeneration_2D_weak::operator = (const GALGAS_tableViewControllerPropertyGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration_2D_weak::GALGAS_tableViewControllerPropertyGeneration_2D_weak (const GALGAS_tableViewControllerPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration_2D_weak GALGAS_tableViewControllerPropertyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_tableViewControllerPropertyGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration GALGAS_tableViewControllerPropertyGeneration_2D_weak::bang_tableViewControllerPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerPropertyGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_tableViewControllerPropertyGeneration) ;
      result = GALGAS_tableViewControllerPropertyGeneration ((cPtr_tableViewControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerPropertyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration_2D_weak ("tableViewControllerPropertyGeneration-weak",
                                                                      & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration_2D_weak GALGAS_tableViewControllerPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerPropertyGeneration_2D_weak result ;
  const GALGAS_tableViewControllerPropertyGeneration_2D_weak * p = (const GALGAS_tableViewControllerPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind::GALGAS_tableViewControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind GALGAS_tableViewControllerModelKind::constructor_entityArray (UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerModelKind result ;
  result.mEnum = kEnum_entityArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind GALGAS_tableViewControllerModelKind::constructor_transientArray (UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerModelKind result ;
  result.mEnum = kEnum_transientArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableViewControllerModelKind::optional_entityArray () const {
  const bool ok = mEnum == kEnum_entityArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableViewControllerModelKind::optional_transientArray () const {
  const bool ok = mEnum == kEnum_transientArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_tableViewControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableViewControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableViewControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerModelKind::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @tableViewControllerModelKind: " << gEnumNameArrayFor_tableViewControllerModelKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tableViewControllerModelKind::objectCompare (const GALGAS_tableViewControllerModelKind & inOperand) const {
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
//@tableViewControllerModelKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerModelKind ("tableViewControllerModelKind",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerModelKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerModelKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind GALGAS_tableViewControllerModelKind::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerModelKind result ;
  const GALGAS_tableViewControllerModelKind * p = (const GALGAS_tableViewControllerModelKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@tableViewControllerBoundColumnListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_tableViewControllerBoundColumnListForGeneration : public cCollectionElement {
  public: GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_tableViewControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                              const GALGAS_string & in_mColumnOutletTypeName,
                                                                              const GALGAS_string & in_mRunAction,
                                                                              const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_tableViewControllerBoundColumnListForGeneration (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_tableViewControllerBoundColumnListForGeneration::cCollectionElement_tableViewControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                        const GALGAS_string & in_mColumnOutletTypeName,
                                                                                                                                        const GALGAS_string & in_mRunAction,
                                                                                                                                        const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mRunAction, in_mRegularBindingsGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerBoundColumnListForGeneration::cCollectionElement_tableViewControllerBoundColumnListForGeneration (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mColumnOutletTypeName, inElement.mProperty_mRunAction, inElement.mProperty_mRegularBindingsGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_tableViewControllerBoundColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_tableViewControllerBoundColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewControllerBoundColumnListForGeneration (mObject.mProperty_mColumnName, mObject.mProperty_mColumnOutletTypeName, mObject.mProperty_mRunAction, mObject.mProperty_mRegularBindingsGenerationList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_tableViewControllerBoundColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnOutletTypeName" ":" ;
  mObject.mProperty_mColumnOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunAction" ":" ;
  mObject.mProperty_mRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingsGenerationList" ":" ;
  mObject.mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_tableViewControllerBoundColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * operand = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration::GALGAS_tableViewControllerBoundColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration::GALGAS_tableViewControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerBoundColumnListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                          const GALGAS_string & inOperand1,
                                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                                          const GALGAS_regularBindingsGenerationList & inOperand3
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_tableViewControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_tableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                        const GALGAS_string & in_mColumnName,
                                                                                        const GALGAS_string & in_mColumnOutletTypeName,
                                                                                        const GALGAS_string & in_mRunAction,
                                                                                        const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration (in_mColumnName,
                                                                                     in_mColumnOutletTypeName,
                                                                                     in_mRunAction,
                                                                                     in_mRegularBindingsGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2,
                                                                                  const GALGAS_regularBindingsGenerationList & inOperand3
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_append (GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element inElement,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration (inElement COMMA_THERE)) ;
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

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                   const GALGAS_string inOperand1,
                                                                                   const GALGAS_string inOperand2,
                                                                                   const GALGAS_regularBindingsGenerationList inOperand3,
                                                                                   const GALGAS_uint inInsertionIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                   GALGAS_string & outOperand1,
                                                                                   GALGAS_string & outOperand2,
                                                                                   GALGAS_regularBindingsGenerationList & outOperand3,
                                                                                   const GALGAS_uint inRemoveIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mColumnName ;
        outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
        outOperand2 = p->mObject.mProperty_mRunAction ;
        outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
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

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                              GALGAS_string & outOperand1,
                                                                              GALGAS_string & outOperand2,
                                                                              GALGAS_regularBindingsGenerationList & outOperand3,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                             GALGAS_string & outOperand1,
                                                                             GALGAS_string & outOperand2,
                                                                             GALGAS_regularBindingsGenerationList & outOperand3,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                           GALGAS_string & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           GALGAS_regularBindingsGenerationList & outOperand3,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          GALGAS_regularBindingsGenerationList & outOperand3,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::add_operation (const GALGAS_tableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                                              C_Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListForGeneration result = GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListForGeneration result = GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListForGeneration result = GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::plusAssign_operation (const GALGAS_tableViewControllerBoundColumnListForGeneration inOperand,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_setMColumnNameAtIndex (GALGAS_string inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_setMColumnOutletTypeNameAtIndex (GALGAS_string inOperand,
                                                                                                     GALGAS_uint inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnOutletTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnOutletTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_setMRunActionAtIndex (GALGAS_string inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRunAction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRunAction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_setMRegularBindingsGenerationListAtIndex (GALGAS_regularBindingsGenerationList inOperand,
                                                                                                              GALGAS_uint inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegularBindingsGenerationList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_tableViewControllerBoundColumnListForGeneration::getter_mRegularBindingsGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_tableViewControllerBoundColumnListForGeneration::cEnumerator_tableViewControllerBoundColumnListForGeneration (const GALGAS_tableViewControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element cEnumerator_tableViewControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_tableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewControllerBoundColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_tableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewControllerBoundColumnListForGeneration::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_tableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnOutletTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_tableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRunAction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList cEnumerator_tableViewControllerBoundColumnListForGeneration::current_mRegularBindingsGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_tableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRegularBindingsGenerationList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerBoundColumnListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration ("tableViewControllerBoundColumnListForGeneration",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerBoundColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerBoundColumnListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListForGeneration result ;
  const GALGAS_tableViewControllerBoundColumnListForGeneration * p = (const GALGAS_tableViewControllerBoundColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerBoundColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerBoundColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

