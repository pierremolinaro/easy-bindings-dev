#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_computeRoutineGeneration_2D_weak::objectCompare (const GALGAS_computeRoutineGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration_2D_weak::GALGAS_computeRoutineGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration_2D_weak & GALGAS_computeRoutineGeneration_2D_weak::operator = (const GALGAS_computeRoutineGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration_2D_weak::GALGAS_computeRoutineGeneration_2D_weak (const GALGAS_computeRoutineGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration_2D_weak GALGAS_computeRoutineGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_computeRoutineGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration GALGAS_computeRoutineGeneration_2D_weak::bang_computeRoutineGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_computeRoutineGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computeRoutineGeneration) ;
      result = GALGAS_computeRoutineGeneration ((cPtr_computeRoutineGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @computeRoutineGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeRoutineGeneration_2D_weak ("computeRoutineGeneration-weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computeRoutineGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeRoutineGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computeRoutineGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computeRoutineGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computeRoutineGeneration_2D_weak GALGAS_computeRoutineGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_computeRoutineGeneration_2D_weak result ;
  const GALGAS_computeRoutineGeneration_2D_weak * p = (const GALGAS_computeRoutineGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computeRoutineGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeRoutineGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientDeclarationAST_2D_weak::objectCompare (const GALGAS_transientDeclarationAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST_2D_weak::GALGAS_transientDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST_2D_weak & GALGAS_transientDeclarationAST_2D_weak::operator = (const GALGAS_transientDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST_2D_weak::GALGAS_transientDeclarationAST_2D_weak (const GALGAS_transientDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST_2D_weak GALGAS_transientDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_transientDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST_2D_weak::bang_transientDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_transientDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientDeclarationAST) ;
      result = GALGAS_transientDeclarationAST ((cPtr_transientDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @transientDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST_2D_weak ("transientDeclarationAST-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST_2D_weak GALGAS_transientDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDeclarationAST_2D_weak result ;
  const GALGAS_transientDeclarationAST_2D_weak * p = (const GALGAS_transientDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_transientDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @transientPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_transientPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
    mProperty_mGenerate.printNonNullClassInstanceProperties ("mGenerate") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration::GALGAS_transientPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration::GALGAS_transientPropertyGeneration (const cPtr_transientPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration::class_func_new (const GALGAS_string & inAttribute_mPropertyName,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMGenerate (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientPropertyGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_transientPropertyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientPropertyGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_transientDependencyListForGeneration () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientPropertyGeneration::readProperty_mGenerate (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mGenerate ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientPropertyGeneration class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

void cPtr_transientPropertyGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendString ("[@transientPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mGenerate.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mGenerate COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @transientPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGeneration ("transientPropertyGeneration",
                                                                                   & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration result ;
  const GALGAS_transientPropertyGeneration * p = (const GALGAS_transientPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_transientPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientPropertyGeneration_2D_weak::objectCompare (const GALGAS_transientPropertyGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration_2D_weak::GALGAS_transientPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration_2D_weak & GALGAS_transientPropertyGeneration_2D_weak::operator = (const GALGAS_transientPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration_2D_weak::GALGAS_transientPropertyGeneration_2D_weak (const GALGAS_transientPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration_2D_weak GALGAS_transientPropertyGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration_2D_weak::bang_transientPropertyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_transientPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientPropertyGeneration) ;
      result = GALGAS_transientPropertyGeneration ((cPtr_transientPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @transientPropertyGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGeneration_2D_weak ("transientPropertyGeneration-weak",
                                                                                           & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration_2D_weak GALGAS_transientPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration_2D_weak result ;
  const GALGAS_transientPropertyGeneration_2D_weak * p = (const GALGAS_transientPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_transientPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@transientPropertyGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_transientPropertyGenerationList : public cCollectionElement {
  public: GALGAS_transientPropertyGenerationList_2D_element mObject ;

//--- Class functions
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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientPropertyGenerationList::cCollectionElement_transientPropertyGenerationList (const GALGAS_transientPropertyGeneration & in_mProperty
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientPropertyGenerationList::cCollectionElement_transientPropertyGenerationList (const GALGAS_transientPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_transientPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientPropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_transientPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_transientPropertyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_transientPropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_transientPropertyGenerationList * operand = (cCollectionElement_transientPropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_transientPropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList::GALGAS_transientPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList::GALGAS_transientPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientPropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::class_func_listWithValue (const GALGAS_transientPropertyGeneration & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_transientPropertyGeneration & in_mProperty
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_transientPropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::addAssign_operation (const GALGAS_transientPropertyGeneration & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_append (const GALGAS_transientPropertyGeneration inOperand0,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_insertAtIndex (const GALGAS_transientPropertyGeneration inOperand0,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_removeAtIndex (GALGAS_transientPropertyGeneration & outOperand0,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_popFirst (GALGAS_transientPropertyGeneration & outOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_popLast (GALGAS_transientPropertyGeneration & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::method_first (GALGAS_transientPropertyGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::method_last (GALGAS_transientPropertyGeneration & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::add_operation (const GALGAS_transientPropertyGenerationList & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_transientPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientPropertyGenerationList result = GALGAS_transientPropertyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientPropertyGenerationList result = GALGAS_transientPropertyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_transientPropertyGenerationList result = GALGAS_transientPropertyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::plusAssign_operation (const GALGAS_transientPropertyGenerationList inOperand,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_transientPropertyGeneration inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  GALGAS_transientPropertyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_transientPropertyGenerationList::cEnumerator_transientPropertyGenerationList (const GALGAS_transientPropertyGenerationList & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element cEnumerator_transientPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientPropertyGenerationList * p = (const cCollectionElement_transientPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration cEnumerator_transientPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_transientPropertyGenerationList * p = (const cCollectionElement_transientPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//
//     @transientPropertyGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList ("transientPropertyGenerationList",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList GALGAS_transientPropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGenerationList result ;
  const GALGAS_transientPropertyGenerationList * p = (const GALGAS_transientPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_transientPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@transientDependencyListForGeneration transientComputeFunctionCall'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_transientComputeFunctionCall (const GALGAS_transientDependencyListForGeneration & inObject,
                                                            const GALGAS_bool & constinArgument_inPreferences,
                                                            const GALGAS_string & constinArgument_inOwnerName,
                                                            const GALGAS_string & constinArgument_inTransientName,
                                                            const GALGAS_string & constinArgument_inFunctionNamePrefix,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("unwSelf.") ;
  }
  GALGAS_string var_uwself_18741 = temp_0 ;
  result_outResult = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_ident_18830 = GALGAS_string ("        ") ;
  const GALGAS_transientDependencyListForGeneration temp_2 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_18872 (temp_2, kENUMERATION_UP) ;
  GALGAS_uint index_18851 ((uint32_t) 0) ;
  while (enumerator_18872.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, enumerator_18872.current_mDefaultValueAsString (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("var s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (index_18851.getter_string (SOURCE_FILE ("transient-property.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (extensionGetter_modelStringForSelf (enumerator_18872.current_mDependency (HERE), var_uwself_18741, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (GALGAS_string (".selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 424)) ;
        result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("switch s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 425)).add_operation (index_18851.getter_string (SOURCE_FILE ("transient-property.ggs", 425)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 425)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 425)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 425)) ;
        result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("case .single :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 426)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 426)) ;
        result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("  ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 427)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 427)) ;
        result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("case .empty, .multiple :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 428)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 428)) ;
        result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("  s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (index_18851.getter_string (SOURCE_FILE ("transient-property.ggs", 429)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (GALGAS_string (" = .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (enumerator_18872.current_mDefaultValueAsString (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 429)) ;
        result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 430)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 430)) ;
      }
    }
    if (kBoolFalse == test_3) {
      result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("let s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (index_18851.getter_string (SOURCE_FILE ("transient-property.ggs", 432)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (extensionGetter_modelStringForSelf (enumerator_18872.current_mDependency (HERE), var_uwself_18741, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (GALGAS_string (".selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 432)) ;
    }
    enumerator_18872.gotoNextObject () ;
    index_18851.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 422)) ;
  }
  result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("switch ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 435)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 435)) ;
  const GALGAS_transientDependencyListForGeneration temp_4 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_19526 (temp_4, kENUMERATION_UP) ;
  GALGAS_uint index_19520 ((uint32_t) 0) ;
  while (enumerator_19526.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("s").add_operation (index_19520.getter_string (SOURCE_FILE ("transient-property.ggs", 438)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 438)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 438)) ;
    if (enumerator_19526.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 440)) ;
    }
    enumerator_19526.gotoNextObject () ;
    index_19520.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 436)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 442)) ;
  result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 443)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 443)) ;
  const GALGAS_transientDependencyListForGeneration temp_5 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_19676 (temp_5, kENUMERATION_UP) ;
  GALGAS_uint index_19670 ((uint32_t) 0) ;
  while (enumerator_19676.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (".single (let v").add_operation (index_19670.getter_string (SOURCE_FILE ("transient-property.ggs", 446)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 446)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 446)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 446)) ;
    if (enumerator_19676.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (",\n              "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 448)) ;
    }
    enumerator_19676.gotoNextObject () ;
    index_19670.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 444)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 450)) ;
  result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("  return .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 451)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 451)) ;
  result_outResult.plusAssign_operation(constinArgument_inFunctionNamePrefix.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)).add_operation (constinArgument_inOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)).add_operation (constinArgument_inTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 452)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 453)) ;
  const GALGAS_transientDependencyListForGeneration temp_6 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_19972 (temp_6, kENUMERATION_UP) ;
  GALGAS_uint index_19966 ((uint32_t) 0) ;
  while (enumerator_19972.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("v").add_operation (index_19966.getter_string (SOURCE_FILE ("transient-property.ggs", 456)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 456)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 456)) ;
    if (enumerator_19972.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 458)) ;
    }
    enumerator_19972.gotoNextObject () ;
    index_19966.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 454)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string ("))\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 460)) ;
  result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 461)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 461)) ;
  const GALGAS_transientDependencyListForGeneration temp_7 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_20121 (temp_7, kENUMERATION_UP) ;
  while (enumerator_20121.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (".multiple"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 464)) ;
    if (enumerator_20121.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (",\n              "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 466)) ;
    }
    enumerator_20121.gotoNextObject () ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 468)) ;
  result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("  return .multiple\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 469)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 469)) ;
  result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("default :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 470)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 470)) ;
  result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 471)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 471)) ;
  result_outResult.plusAssign_operation(var_ident_18830.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 472)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 472)) ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@transientDependencyListForGeneration needs_unwSelf'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_needs_5F_unwSelf (const GALGAS_transientDependencyListForGeneration & inObject,
                                              const GALGAS_bool & constinArgument_inPreferences,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
  const GALGAS_transientDependencyListForGeneration temp_0 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_20659 (temp_0, kENUMERATION_UP) ;
  bool bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.ggs", 479)).isValidAndTrue () ;
  if (enumerator_20659.hasCurrentObject () && bool_1) {
    while (enumerator_20659.hasCurrentObject () && bool_1) {
      result_outResult = extensionGetter_needs_5F_unwSelf (enumerator_20659.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 480)) ;
      enumerator_20659.gotoNextObject () ;
      if (enumerator_20659.hasCurrentObject ()) {
        bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.ggs", 479)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@observablePropertyAST generateAddObserverCall'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_generateAddObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                       const GALGAS_bool & constinArgument_inPreferences,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_21145 = temp_0 ;
  const GALGAS_observablePropertyAST temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_21374 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_21262_controllerName = extractPtr_21374->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_21287_propertyName = extractPtr_21374->mAssociatedValue1 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_21262_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 492)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 492)).add_operation (extractedValue_21287_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 492)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 492)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_21638 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_21455_controllerName = extractPtr_21638->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_21480_propertyName = extractPtr_21638->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_21503_secondaryPropertyName = extractPtr_21638->mAssociatedValue2 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_21455_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)).add_operation (extractedValue_21480_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)).add_operation (extractedValue_21503_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_21905 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_21715_controllerName = extractPtr_21905->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_21740_propertyName = extractPtr_21905->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_21763_secondaryPropertyName = extractPtr_21905->mAssociatedValue2 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_21715_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (extractedValue_21740_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (GALGAS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (extractedValue_21763_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (GALGAS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_22083 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_21971_controllerName = extractPtr_22083->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_21996_propertyName = extractPtr_22083->mAssociatedValue1 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_21971_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (extractedValue_21996_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (GALGAS_string ("_property.<<4>>"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_22274 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22215_masterName = extractPtr_22274->mAssociatedValue0 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_22215_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 502)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 502)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_22408 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22346_masterName = extractPtr_22408->mAssociatedValue0 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_22346_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 504)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 504)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_22608 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22475_masterName = extractPtr_22608->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_22496_elementPropertyName = extractPtr_22608->mAssociatedValue1 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_22475_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 506)).add_operation (GALGAS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 506)).add_operation (extractedValue_22496_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 506)).add_operation (GALGAS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 506)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_22793 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22667_masterName = extractPtr_22793->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_22688_elementPropertyName = extractPtr_22793->mAssociatedValue1 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_22667_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 508)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 508)).add_operation (extractedValue_22688_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 508)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 508)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_22918 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22859_masterName = extractPtr_22918->mAssociatedValue0 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_22859_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 510)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 510)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_23046 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_22981_propertyName = extractPtr_23046->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("preferences_").add_operation (extractedValue_22981_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 512)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 512)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_23187 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_23119_propertyName = extractPtr_23187->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("preferences_").add_operation (extractedValue_23119_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 514)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 514)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_23313 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_23249_masterName = extractPtr_23313->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_23249_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 516)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 516)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_23443 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_23379_masterName = extractPtr_23443->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_23379_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 518)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 518)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_23628 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_23515_masterName = extractPtr_23628->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_23536_optionName = extractPtr_23628->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_23515_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 520)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 520)).add_operation (extractedValue_23536_optionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 520)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 520)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_23838 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_23702_relationshipName = extractPtr_23838->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_23729_propertyName = extractPtr_23838->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_23702_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 522)).add_operation (GALGAS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 522)).add_operation (extractedValue_23729_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 522)).add_operation (GALGAS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 522)) ;
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
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_24161 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_24098_propertyName = extractPtr_24161->mAssociatedValue1 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_24098_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 530)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 530)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
    {
      const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_24309 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_24243_propertyName = extractPtr_24309->mAssociatedValue1 ;
      result_outResult = var_prefix_21145.add_operation (extractedValue_24243_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 532)).add_operation (GALGAS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 532)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@observablePropertyAST generateRemoveObserverCall'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_generateRemoveObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_24719 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_24606_controllerName = extractPtr_24719->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_24631_propertyName = extractPtr_24719->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_24606_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 541)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 541)).add_operation (extractedValue_24631_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 541)).add_operation (GALGAS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 541)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_24983 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_24799_controllerName = extractPtr_24983->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_24824_propertyName = extractPtr_24983->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_24847_secondaryPropertyName = extractPtr_24983->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_24799_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)).add_operation (extractedValue_24824_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)).add_operation (extractedValue_24847_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)).add_operation (GALGAS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_25250 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25059_controllerName = extractPtr_25250->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_25084_propertyName = extractPtr_25250->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_25107_secondaryPropertyName = extractPtr_25250->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_25059_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (extractedValue_25084_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (GALGAS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (extractedValue_25107_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (GALGAS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_25428 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25315_controllerName = extractPtr_25428->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_25340_propertyName = extractPtr_25428->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_25315_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (extractedValue_25340_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (GALGAS_string ("_property.toMany_<<5>>_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_25645 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25585_masterName = extractPtr_25645->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_25585_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 551)).add_operation (GALGAS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 551)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_25779 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25716_masterName = extractPtr_25779->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_25716_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 553)).add_operation (GALGAS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 553)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_25979 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_25845_masterName = extractPtr_25979->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_25866_elementPropertyName = extractPtr_25979->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_25845_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 555)).add_operation (GALGAS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 555)).add_operation (extractedValue_25866_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 555)).add_operation (GALGAS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 555)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_26164 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26037_masterName = extractPtr_26164->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_26058_elementPropertyName = extractPtr_26164->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_26037_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 557)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 557)).add_operation (extractedValue_26058_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 557)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 557)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_26287 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26227_masterName = extractPtr_26287->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_26227_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 559)).add_operation (GALGAS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 559)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_26414 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26349_propertyName = extractPtr_26414->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("preferences_").add_operation (extractedValue_26349_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 561)).add_operation (GALGAS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 561)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_26554 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26486_propertyName = extractPtr_26554->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("preferences_").add_operation (extractedValue_26486_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 563)).add_operation (GALGAS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 563)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_26679 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26615_masterName = extractPtr_26679->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_26615_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 565)).add_operation (GALGAS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 565)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_26863 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26750_masterName = extractPtr_26863->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_26771_optionName = extractPtr_26863->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_26750_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 567)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 567)).add_operation (extractedValue_26771_optionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 567)).add_operation (GALGAS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 567)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_26992 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_26928_masterName = extractPtr_26992->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_26928_masterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 569)).add_operation (GALGAS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 569)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_27201 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_27065_relationshipName = extractPtr_27201->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_27092_propertyName = extractPtr_27201->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_27065_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)).add_operation (GALGAS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)).add_operation (extractedValue_27092_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)).add_operation (GALGAS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)) ;
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
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_27524 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_27460_propertyName = extractPtr_27524->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_27460_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 579)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 579)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
    {
      const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_27670 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_27603_propertyName = extractPtr_27670->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_27603_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 581)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 581)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
// @transientRoutineGeneration reference class
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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration::GALGAS_transientRoutineGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration::GALGAS_transientRoutineGeneration (const cPtr_transientRoutineGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientRoutineGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration GALGAS_transientRoutineGeneration::class_func_new (const GALGAS_string & inAttribute_mOwnerName,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMTransientName (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMTransientType (GALGAS_typeKind inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mTransientType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMGeneratedFunctionNamePrefix (GALGAS_string inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mGeneratedFunctionNamePrefix = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientRoutineGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientRoutineGeneration::readProperty_mTransientName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mTransientName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_transientRoutineGeneration::readProperty_mTransientType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mTransientType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientRoutineGeneration::readProperty_mGeneratedFunctionNamePrefix (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mGeneratedFunctionNamePrefix ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientRoutineGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_transientDependencyListForGeneration () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientRoutineGeneration class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientRoutineGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration ;
}

void cPtr_transientRoutineGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendString ("[@transientRoutineGeneration:") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mTransientType.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mGeneratedFunctionNamePrefix.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientRoutineGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientRoutineGeneration (mProperty_mOwnerName, mProperty_mTransientName, mProperty_mTransientType, mProperty_mGeneratedFunctionNamePrefix, mProperty_mDependencyList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @transientRoutineGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRoutineGeneration ("transientRoutineGeneration",
                                                                                  & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientRoutineGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientRoutineGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientRoutineGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration GALGAS_transientRoutineGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientRoutineGeneration result ;
  const GALGAS_transientRoutineGeneration * p = (const GALGAS_transientRoutineGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_transientRoutineGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientRoutineGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientRoutineGeneration_2D_weak::objectCompare (const GALGAS_transientRoutineGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration_2D_weak::GALGAS_transientRoutineGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration_2D_weak & GALGAS_transientRoutineGeneration_2D_weak::operator = (const GALGAS_transientRoutineGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration_2D_weak::GALGAS_transientRoutineGeneration_2D_weak (const GALGAS_transientRoutineGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration_2D_weak GALGAS_transientRoutineGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_transientRoutineGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration GALGAS_transientRoutineGeneration_2D_weak::bang_transientRoutineGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_transientRoutineGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientRoutineGeneration) ;
      result = GALGAS_transientRoutineGeneration ((cPtr_transientRoutineGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @transientRoutineGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRoutineGeneration_2D_weak ("transientRoutineGeneration-weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientRoutineGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientRoutineGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientRoutineGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientRoutineGeneration_2D_weak GALGAS_transientRoutineGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientRoutineGeneration_2D_weak result ;
  const GALGAS_transientRoutineGeneration_2D_weak * p = (const GALGAS_transientRoutineGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_transientRoutineGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientRoutineGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyKind::GALGAS_proxyKind (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyKind::class_func_propertyProxy (UNUSED_LOCATION_ARGS) {
  GALGAS_proxyKind result ;
  result.mEnum = kEnum_propertyProxy ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyKind::class_func_toManyProxy (UNUSED_LOCATION_ARGS) {
  GALGAS_proxyKind result ;
  result.mEnum = kEnum_toManyProxy ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_proxyKind::optional_propertyProxy () const {
  const bool ok = mEnum == kEnum_propertyProxy ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_proxyKind::optional_toManyProxy () const {
  const bool ok = mEnum == kEnum_toManyProxy ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_proxyKind [3] = {
  "(not built)",
  "propertyProxy",
  "toManyProxy"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_proxyKind::getter_isPropertyProxy (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_propertyProxy == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_proxyKind::getter_isToManyProxy (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_toManyProxy == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_proxyKind::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendString ("<enum @proxyKind: ") ;
  ioString.appendString (gEnumNameArrayFor_proxyKind [mEnum]) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//     @proxyKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyKind ("proxyKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_proxyKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_proxyKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyKind::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_proxyKind result ;
  const GALGAS_proxyKind * p = (const GALGAS_proxyKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_proxyKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_proxyDeclarationAST_2D_weak::objectCompare (const GALGAS_proxyDeclarationAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST_2D_weak::GALGAS_proxyDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST_2D_weak & GALGAS_proxyDeclarationAST_2D_weak::operator = (const GALGAS_proxyDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST_2D_weak::GALGAS_proxyDeclarationAST_2D_weak (const GALGAS_proxyDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST_2D_weak GALGAS_proxyDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST_2D_weak::bang_proxyDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_proxyDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_proxyDeclarationAST) ;
      result = GALGAS_proxyDeclarationAST ((cPtr_proxyDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @proxyDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST_2D_weak ("proxyDeclarationAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_proxyDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_proxyDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST_2D_weak GALGAS_proxyDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST_2D_weak result ;
  const GALGAS_proxyDeclarationAST_2D_weak * p = (const GALGAS_proxyDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_proxyDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toManyProxyGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toManyProxyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mProxyKind.printNonNullClassInstanceProperties ("mProxyKind") ;
    mProperty_mToManyTypeName.printNonNullClassInstanceProperties ("mToManyTypeName") ;
    mProperty_mObservedRelationshipName.printNonNullClassInstanceProperties ("mObservedRelationshipName") ;
    mProperty_mObservedPropertyName.printNonNullClassInstanceProperties ("mObservedPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration::GALGAS_toManyProxyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration::GALGAS_toManyProxyGeneration (const cPtr_toManyProxyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyProxyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGeneration::class_func_new (const GALGAS_string & inAttribute_mPropertyName,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMToManyTypeName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mToManyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mObservedRelationshipName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mObservedPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_toManyProxyGeneration::readProperty_mProxyKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_proxyKind () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mProxyKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::readProperty_mToManyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mToManyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::readProperty_mObservedRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mObservedRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::readProperty_mObservedPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mObservedPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toManyProxyGeneration class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toManyProxyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration ;
}

void cPtr_toManyProxyGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendString ("[@toManyProxyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mToManyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mObservedRelationshipName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mObservedPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyProxyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toManyProxyGeneration (mProperty_mPropertyName, mProperty_mProxyKind, mProperty_mToManyTypeName, mProperty_mObservedRelationshipName, mProperty_mObservedPropertyName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @toManyProxyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGeneration ("toManyProxyGeneration",
                                                                             & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyProxyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyProxyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGeneration::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGeneration result ;
  const GALGAS_toManyProxyGeneration * p = (const GALGAS_toManyProxyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toManyProxyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyProxyGeneration_2D_weak::objectCompare (const GALGAS_toManyProxyGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration_2D_weak::GALGAS_toManyProxyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration_2D_weak & GALGAS_toManyProxyGeneration_2D_weak::operator = (const GALGAS_toManyProxyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration_2D_weak::GALGAS_toManyProxyGeneration_2D_weak (const GALGAS_toManyProxyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration_2D_weak GALGAS_toManyProxyGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_toManyProxyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGeneration_2D_weak::bang_toManyProxyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyProxyGeneration) ;
      result = GALGAS_toManyProxyGeneration ((cPtr_toManyProxyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @toManyProxyGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGeneration_2D_weak ("toManyProxyGeneration-weak",
                                                                                     & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyProxyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyProxyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration_2D_weak GALGAS_toManyProxyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGeneration_2D_weak result ;
  const GALGAS_toManyProxyGeneration_2D_weak * p = (const GALGAS_toManyProxyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toManyProxyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@toManyProxyGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_toManyProxyGenerationList : public cCollectionElement {
  public: GALGAS_toManyProxyGenerationList_2D_element mObject ;

//--- Class functions
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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_toManyProxyGenerationList::cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGeneration & in_mProperty
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_toManyProxyGenerationList::cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_toManyProxyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toManyProxyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_toManyProxyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_toManyProxyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_toManyProxyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyProxyGenerationList * operand = (cCollectionElement_toManyProxyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyProxyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList::GALGAS_toManyProxyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList::GALGAS_toManyProxyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyProxyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::class_func_listWithValue (const GALGAS_toManyProxyGeneration & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_toManyProxyGeneration & in_mProperty
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyProxyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_toManyProxyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::addAssign_operation (const GALGAS_toManyProxyGeneration & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_append (const GALGAS_toManyProxyGeneration inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_insertAtIndex (const GALGAS_toManyProxyGeneration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_removeAtIndex (GALGAS_toManyProxyGeneration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_popFirst (GALGAS_toManyProxyGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_popLast (GALGAS_toManyProxyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::method_first (GALGAS_toManyProxyGeneration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::method_last (GALGAS_toManyProxyGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::add_operation (const GALGAS_toManyProxyGenerationList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result = GALGAS_toManyProxyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result = GALGAS_toManyProxyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result = GALGAS_toManyProxyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::plusAssign_operation (const GALGAS_toManyProxyGenerationList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_setMPropertyAtIndex (GALGAS_toManyProxyGeneration inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  GALGAS_toManyProxyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_toManyProxyGenerationList::cEnumerator_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element cEnumerator_toManyProxyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyProxyGenerationList * p = (const cCollectionElement_toManyProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration cEnumerator_toManyProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toManyProxyGenerationList * p = (const cCollectionElement_toManyProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//
//     @toManyProxyGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList ("toManyProxyGenerationList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyProxyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyProxyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGenerationList result ;
  const GALGAS_toManyProxyGenerationList * p = (const GALGAS_toManyProxyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toManyProxyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @atomicProxyGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicProxyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mProxyKind.printNonNullClassInstanceProperties ("mProxyKind") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mObservedRelationshipName.printNonNullClassInstanceProperties ("mObservedRelationshipName") ;
    mProperty_mObservedPropertyName.printNonNullClassInstanceProperties ("mObservedPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration::GALGAS_atomicProxyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration::GALGAS_atomicProxyGeneration (const cPtr_atomicProxyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicProxyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGeneration::class_func_new (const GALGAS_string & inAttribute_mPropertyName,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mObservedRelationshipName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mObservedPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_atomicProxyGeneration::readProperty_mProxyKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_proxyKind () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mProxyKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicProxyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicProxyGeneration::readProperty_mObservedRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mObservedRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicProxyGeneration::readProperty_mObservedPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mObservedPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicProxyGeneration class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicProxyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration ;
}

void cPtr_atomicProxyGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendString ("[@atomicProxyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mObservedRelationshipName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mObservedPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicProxyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicProxyGeneration (mProperty_mPropertyName, mProperty_mProxyKind, mProperty_mType, mProperty_mObservedRelationshipName, mProperty_mObservedPropertyName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @atomicProxyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGeneration ("atomicProxyGeneration",
                                                                             & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicProxyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicProxyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGeneration::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGeneration result ;
  const GALGAS_atomicProxyGeneration * p = (const GALGAS_atomicProxyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_atomicProxyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicProxyGeneration_2D_weak::objectCompare (const GALGAS_atomicProxyGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration_2D_weak::GALGAS_atomicProxyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration_2D_weak & GALGAS_atomicProxyGeneration_2D_weak::operator = (const GALGAS_atomicProxyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration_2D_weak::GALGAS_atomicProxyGeneration_2D_weak (const GALGAS_atomicProxyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration_2D_weak GALGAS_atomicProxyGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_atomicProxyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGeneration_2D_weak::bang_atomicProxyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicProxyGeneration) ;
      result = GALGAS_atomicProxyGeneration ((cPtr_atomicProxyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @atomicProxyGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGeneration_2D_weak ("atomicProxyGeneration-weak",
                                                                                     & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicProxyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicProxyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration_2D_weak GALGAS_atomicProxyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGeneration_2D_weak result ;
  const GALGAS_atomicProxyGeneration_2D_weak * p = (const GALGAS_atomicProxyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_atomicProxyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@atomicProxyGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_atomicProxyGenerationList : public cCollectionElement {
  public: GALGAS_atomicProxyGenerationList_2D_element mObject ;

//--- Class functions
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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_atomicProxyGenerationList::cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGeneration & in_mProperty
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_atomicProxyGenerationList::cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_atomicProxyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_atomicProxyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_atomicProxyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_atomicProxyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_atomicProxyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_atomicProxyGenerationList * operand = (cCollectionElement_atomicProxyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_atomicProxyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList::GALGAS_atomicProxyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList::GALGAS_atomicProxyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_atomicProxyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::class_func_listWithValue (const GALGAS_atomicProxyGeneration & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_atomicProxyGeneration & in_mProperty
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicProxyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_atomicProxyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::addAssign_operation (const GALGAS_atomicProxyGeneration & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_append (const GALGAS_atomicProxyGeneration inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_insertAtIndex (const GALGAS_atomicProxyGeneration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_removeAtIndex (GALGAS_atomicProxyGeneration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_popFirst (GALGAS_atomicProxyGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_popLast (GALGAS_atomicProxyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::method_first (GALGAS_atomicProxyGeneration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::method_last (GALGAS_atomicProxyGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::add_operation (const GALGAS_atomicProxyGenerationList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result = GALGAS_atomicProxyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result = GALGAS_atomicProxyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result = GALGAS_atomicProxyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::plusAssign_operation (const GALGAS_atomicProxyGenerationList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_setMPropertyAtIndex (GALGAS_atomicProxyGeneration inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  GALGAS_atomicProxyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_atomicProxyGenerationList::cEnumerator_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element cEnumerator_atomicProxyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicProxyGenerationList * p = (const cCollectionElement_atomicProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration cEnumerator_atomicProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicProxyGenerationList * p = (const cCollectionElement_atomicProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//
//     @atomicProxyGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList ("atomicProxyGenerationList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicProxyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicProxyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGenerationList result ;
  const GALGAS_atomicProxyGenerationList * p = (const GALGAS_atomicProxyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_atomicProxyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicPropertyDeclarationAST_2D_weak::objectCompare (const GALGAS_atomicPropertyDeclarationAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST_2D_weak::GALGAS_atomicPropertyDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST_2D_weak & GALGAS_atomicPropertyDeclarationAST_2D_weak::operator = (const GALGAS_atomicPropertyDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST_2D_weak::GALGAS_atomicPropertyDeclarationAST_2D_weak (const GALGAS_atomicPropertyDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST_2D_weak GALGAS_atomicPropertyDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST_2D_weak::bang_atomicPropertyDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicPropertyDeclarationAST) ;
      result = GALGAS_atomicPropertyDeclarationAST ((cPtr_atomicPropertyDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @atomicPropertyDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2D_weak ("atomicPropertyDeclarationAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST_2D_weak GALGAS_atomicPropertyDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST_2D_weak result ;
  const GALGAS_atomicPropertyDeclarationAST_2D_weak * p = (const GALGAS_atomicPropertyDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_atomicPropertyDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @atomicPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGenerateResetMethod.printNonNullClassInstanceProperties ("mGenerateResetMethod") ;
    mProperty_mGenerateDirectRead.printNonNullClassInstanceProperties ("mGenerateDirectRead") ;
    mProperty_mGenerateDirectAccess.printNonNullClassInstanceProperties ("mGenerateDirectAccess") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mIsProxy.printNonNullClassInstanceProperties ("mIsProxy") ;
    mProperty_mDefaultValueInSwift.printNonNullClassInstanceProperties ("mDefaultValueInSwift") ;
    mProperty_mInPreferences.printNonNullClassInstanceProperties ("mInPreferences") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_atomicPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateResetMethod.objectCompare (p->mProperty_mGenerateResetMethod) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateDirectRead.objectCompare (p->mProperty_mGenerateDirectRead) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateDirectAccess.objectCompare (p->mProperty_mGenerateDirectAccess) ;
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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration::GALGAS_atomicPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration::GALGAS_atomicPropertyGeneration (const cPtr_atomicPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGeneration::class_func_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                 const GALGAS_bool & inAttribute_mGenerateResetMethod,
                                                                                 const GALGAS_bool & inAttribute_mGenerateDirectRead,
                                                                                 const GALGAS_bool & inAttribute_mGenerateDirectAccess,
                                                                                 const GALGAS_typeKind & inAttribute_mType,
                                                                                 const GALGAS_bool & inAttribute_mIsProxy,
                                                                                 const GALGAS_string & inAttribute_mDefaultValueInSwift,
                                                                                 const GALGAS_bool & inAttribute_mInPreferences
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mGenerateResetMethod.isValid () && inAttribute_mGenerateDirectRead.isValid () && inAttribute_mGenerateDirectAccess.isValid () && inAttribute_mType.isValid () && inAttribute_mIsProxy.isValid () && inAttribute_mDefaultValueInSwift.isValid () && inAttribute_mInPreferences.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicPropertyGeneration (inAttribute_mPropertyName, inAttribute_mGenerateResetMethod, inAttribute_mGenerateDirectRead, inAttribute_mGenerateDirectAccess, inAttribute_mType, inAttribute_mIsProxy, inAttribute_mDefaultValueInSwift, inAttribute_mInPreferences COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::readProperty_mGenerateResetMethod (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mGenerateResetMethod ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::readProperty_mGenerateDirectRead (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mGenerateDirectRead ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::readProperty_mGenerateDirectAccess (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mGenerateDirectAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicPropertyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::readProperty_mIsProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mIsProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicPropertyGeneration::readProperty_mDefaultValueInSwift (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mDefaultValueInSwift ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::readProperty_mInPreferences (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mInPreferences ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_atomicPropertyGeneration::cPtr_atomicPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                              const GALGAS_bool & in_mGenerateResetMethod,
                                                              const GALGAS_bool & in_mGenerateDirectRead,
                                                              const GALGAS_bool & in_mGenerateDirectAccess,
                                                              const GALGAS_typeKind & in_mType,
                                                              const GALGAS_bool & in_mIsProxy,
                                                              const GALGAS_string & in_mDefaultValueInSwift,
                                                              const GALGAS_bool & in_mInPreferences
                                                              COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mGenerateResetMethod (in_mGenerateResetMethod),
mProperty_mGenerateDirectRead (in_mGenerateDirectRead),
mProperty_mGenerateDirectAccess (in_mGenerateDirectAccess),
mProperty_mType (in_mType),
mProperty_mIsProxy (in_mIsProxy),
mProperty_mDefaultValueInSwift (in_mDefaultValueInSwift),
mProperty_mInPreferences (in_mInPreferences) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration ;
}

void cPtr_atomicPropertyGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendString ("[@atomicPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mGenerateResetMethod.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mGenerateDirectRead.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mGenerateDirectAccess.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mIsProxy.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mDefaultValueInSwift.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mInPreferences.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicPropertyGeneration (mProperty_mPropertyName, mProperty_mGenerateResetMethod, mProperty_mGenerateDirectRead, mProperty_mGenerateDirectAccess, mProperty_mType, mProperty_mIsProxy, mProperty_mDefaultValueInSwift, mProperty_mInPreferences COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @atomicPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration ("atomicPropertyGeneration",
                                                                                & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration result ;
  const GALGAS_atomicPropertyGeneration * p = (const GALGAS_atomicPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_atomicPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicPropertyGeneration_2D_weak::objectCompare (const GALGAS_atomicPropertyGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration_2D_weak::GALGAS_atomicPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration_2D_weak & GALGAS_atomicPropertyGeneration_2D_weak::operator = (const GALGAS_atomicPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration_2D_weak::GALGAS_atomicPropertyGeneration_2D_weak (const GALGAS_atomicPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration_2D_weak GALGAS_atomicPropertyGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGeneration_2D_weak::bang_atomicPropertyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicPropertyGeneration) ;
      result = GALGAS_atomicPropertyGeneration ((cPtr_atomicPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @atomicPropertyGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration_2D_weak ("atomicPropertyGeneration-weak",
                                                                                        & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration_2D_weak GALGAS_atomicPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration_2D_weak result ;
  const GALGAS_atomicPropertyGeneration_2D_weak * p = (const GALGAS_atomicPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_atomicPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@atomicPropertyGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_atomicPropertyGenerationList : public cCollectionElement {
  public: GALGAS_atomicPropertyGenerationList_2D_element mObject ;

//--- Class functions
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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_atomicPropertyGenerationList::cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGeneration & in_mProperty
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_atomicPropertyGenerationList::cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_atomicPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_atomicPropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_atomicPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_atomicPropertyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_atomicPropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_atomicPropertyGenerationList * operand = (cCollectionElement_atomicPropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_atomicPropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList::GALGAS_atomicPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList::GALGAS_atomicPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_atomicPropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::class_func_listWithValue (const GALGAS_atomicPropertyGeneration & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_atomicPropertyGeneration & in_mProperty
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicPropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::addAssign_operation (const GALGAS_atomicPropertyGeneration & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_append (const GALGAS_atomicPropertyGeneration inOperand0,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_insertAtIndex (const GALGAS_atomicPropertyGeneration inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_removeAtIndex (GALGAS_atomicPropertyGeneration & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_popFirst (GALGAS_atomicPropertyGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_popLast (GALGAS_atomicPropertyGeneration & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::method_first (GALGAS_atomicPropertyGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::method_last (GALGAS_atomicPropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::add_operation (const GALGAS_atomicPropertyGenerationList & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::plusAssign_operation (const GALGAS_atomicPropertyGenerationList inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_atomicPropertyGeneration inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  GALGAS_atomicPropertyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_atomicPropertyGenerationList::cEnumerator_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element cEnumerator_atomicPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration cEnumerator_atomicPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//
//     @atomicPropertyGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList ("atomicPropertyGenerationList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList result ;
  const GALGAS_atomicPropertyGenerationList * p = (const GALGAS_atomicPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_atomicPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne::cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne (const GALGAS_lstring inAssociatedValue0
                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * ptr = dynamic_cast<const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany::cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany (const GALGAS_lstring inAssociatedValue0
                                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * ptr = dynamic_cast<const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship::GALGAS_toOneOppositeRelationship (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::class_func_none (UNUSED_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::class_func_oppositeIsToOne (const GALGAS_lstring & inAssociatedValue0
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_oppositeIsToOne ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::class_func_oppositeIsToMany (const GALGAS_lstring & inAssociatedValue0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_oppositeIsToMany ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOneOppositeRelationship::method_oppositeIsToOne (GALGAS_lstring & outAssociatedValue0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_oppositeIsToOne) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @toOneOppositeRelationship oppositeIsToOne invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOneOppositeRelationship::method_oppositeIsToMany (GALGAS_lstring & outAssociatedValue0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_oppositeIsToMany) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @toOneOppositeRelationship oppositeIsToMany invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_toOneOppositeRelationship::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_toOneOppositeRelationship::optional_oppositeIsToOne (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_oppositeIsToOne ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_toOneOppositeRelationship::optional_oppositeIsToMany (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_oppositeIsToMany ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toOneOppositeRelationship [4] = {
  "(not built)",
  "none",
  "oppositeIsToOne",
  "oppositeIsToMany"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneOppositeRelationship::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneOppositeRelationship::getter_isOppositeIsToOne (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oppositeIsToOne == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneOppositeRelationship::getter_isOppositeIsToMany (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oppositeIsToMany == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOneOppositeRelationship::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendString ("<enum @toOneOppositeRelationship: ") ;
  ioString.appendString (gEnumNameArrayFor_toOneOppositeRelationship [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//     @toOneOppositeRelationship generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship ("toOneOppositeRelationship",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOneOppositeRelationship::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneOppositeRelationship ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOneOppositeRelationship::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneOppositeRelationship (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  const GALGAS_toOneOppositeRelationship * p = (const GALGAS_toOneOppositeRelationship *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toOneOppositeRelationship *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneOppositeRelationship", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toOneRelationshipAST_2D_weak::objectCompare (const GALGAS_toOneRelationshipAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST_2D_weak::GALGAS_toOneRelationshipAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST_2D_weak & GALGAS_toOneRelationshipAST_2D_weak::operator = (const GALGAS_toOneRelationshipAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST_2D_weak::GALGAS_toOneRelationshipAST_2D_weak (const GALGAS_toOneRelationshipAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST_2D_weak GALGAS_toOneRelationshipAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST_2D_weak::bang_toOneRelationshipAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toOneRelationshipAST) ;
      result = GALGAS_toOneRelationshipAST ((cPtr_toOneRelationshipAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @toOneRelationshipAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST_2D_weak ("toOneRelationshipAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOneRelationshipAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOneRelationshipAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST_2D_weak GALGAS_toOneRelationshipAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST_2D_weak result ;
  const GALGAS_toOneRelationshipAST_2D_weak * p = (const GALGAS_toOneRelationshipAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toOneRelationshipAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mKind, mProperty_mActionMap, mProperty_mIsOverriding COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_propertyMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mKind" ":") ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mActionMap" ":") ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mIsOverriding" ":") ;
  mProperty_mIsOverriding.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap::GALGAS_propertyMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap::GALGAS_propertyMap (const GALGAS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap & GALGAS_propertyMap::operator = (const GALGAS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::class_func_mapWithMapToOverride (const GALGAS_propertyMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_propertyKind & inArgument0,
                                              const GALGAS_actionMap & inArgument1,
                                              const GALGAS_bool & inArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::add_operation (const GALGAS_propertyMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result = *this ;
  cEnumerator_propertyMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mKind (HERE), enumerator.current_mActionMap (HERE), enumerator.current_mIsOverriding (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_propertyKind inArgument0,
                                           GALGAS_actionMap inArgument1,
                                           GALGAS_bool inArgument2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyMap_searchKey = "there is no '%K' property" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_propertyKind & outArgument0,
                                           GALGAS_actionMap & outArgument1,
                                           GALGAS_bool & outArgument2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_propertyMap_searchKey
                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_propertyMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_propertyKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_propertyMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_actionMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyMap::getter_mIsOverridingForKey (const GALGAS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mIsOverriding ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMKindForKey (GALGAS_propertyKind inAttributeValue,
                                                GALGAS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                     GALGAS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMIsOverridingForKey (GALGAS_bool inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mIsOverriding = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyMap * GALGAS_propertyMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_propertyMap::cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GALGAS_propertyMap_2D_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mActionMap, p->mProperty_mIsOverriding) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyKind cEnumerator_propertyMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap cEnumerator_propertyMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mActionMap ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_propertyMap::current_mIsOverriding (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsOverriding ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_propertyKind & outArgument0,
                                             GALGAS_actionMap & outArgument1,
                                             GALGAS_bool & outArgument2) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
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

//--------------------------------------------------------------------------------------------------
//
//     @propertyMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  const GALGAS_propertyMap * p = (const GALGAS_propertyMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toOnePropertyGeneration_2D_weak::objectCompare (const GALGAS_toOnePropertyGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration_2D_weak::GALGAS_toOnePropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration_2D_weak & GALGAS_toOnePropertyGeneration_2D_weak::operator = (const GALGAS_toOnePropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration_2D_weak::GALGAS_toOnePropertyGeneration_2D_weak (const GALGAS_toOnePropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration_2D_weak GALGAS_toOnePropertyGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration_2D_weak::bang_toOnePropertyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toOnePropertyGeneration) ;
      result = GALGAS_toOnePropertyGeneration ((cPtr_toOnePropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @toOnePropertyGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration_2D_weak ("toOnePropertyGeneration-weak",
                                                                                       & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOnePropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOnePropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration_2D_weak GALGAS_toOnePropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration_2D_weak result ;
  const GALGAS_toOnePropertyGeneration_2D_weak * p = (const GALGAS_toOnePropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toOnePropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@toOnePropertyGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_toOnePropertyGenerationList : public cCollectionElement {
  public: GALGAS_toOnePropertyGenerationList_2D_element mObject ;

//--- Class functions
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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGeneration & in_mProperty
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_toOnePropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toOnePropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_toOnePropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_toOnePropertyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_toOnePropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toOnePropertyGenerationList * operand = (cCollectionElement_toOnePropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toOnePropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList::GALGAS_toOnePropertyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList::GALGAS_toOnePropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toOnePropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::class_func_listWithValue (const GALGAS_toOnePropertyGeneration & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_toOnePropertyGeneration & in_mProperty
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_toOnePropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::addAssign_operation (const GALGAS_toOnePropertyGeneration & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_append (const GALGAS_toOnePropertyGeneration inOperand0,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_insertAtIndex (const GALGAS_toOnePropertyGeneration inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_removeAtIndex (GALGAS_toOnePropertyGeneration & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_popFirst (GALGAS_toOnePropertyGeneration & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_popLast (GALGAS_toOnePropertyGeneration & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::method_first (GALGAS_toOnePropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::method_last (GALGAS_toOnePropertyGeneration & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::add_operation (const GALGAS_toOnePropertyGenerationList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::plusAssign_operation (const GALGAS_toOnePropertyGenerationList inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_toOnePropertyGeneration inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  GALGAS_toOnePropertyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_toOnePropertyGenerationList::cEnumerator_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList_2D_element cEnumerator_toOnePropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration cEnumerator_toOnePropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//
//     @toOnePropertyGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList ("toOnePropertyGenerationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOnePropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOnePropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList result ;
  const GALGAS_toOnePropertyGenerationList * p = (const GALGAS_toOnePropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toOnePropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite::cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (const GALGAS_lstring inAssociatedValue0
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite::description (String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance::cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (const GALGAS_lstring inAssociatedValue0
                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST::GALGAS_toManyRelationshipOptionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::class_func_none (UNUSED_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::class_func_hasOpposite (const GALGAS_lstring & inAssociatedValue0
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_hasOpposite ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::class_func_hasDependance (const GALGAS_lstring & inAssociatedValue0
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_hasDependance ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionAST::method_hasOpposite (GALGAS_lstring & outAssociatedValue0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasOpposite) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @toManyRelationshipOptionAST hasOpposite invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionAST::method_hasDependance (GALGAS_lstring & outAssociatedValue0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasDependance) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @toManyRelationshipOptionAST hasDependance invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionAST::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionAST::optional_hasOpposite (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_hasOpposite ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionAST::optional_hasDependance (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_hasDependance ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toManyRelationshipOptionAST [4] = {
  "(not built)",
  "none",
  "hasOpposite",
  "hasDependance"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionAST::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionAST::getter_isHasOpposite (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasOpposite == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionAST::getter_isHasDependance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasDependance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendString ("<enum @toManyRelationshipOptionAST: ") ;
  ioString.appendString (gEnumNameArrayFor_toManyRelationshipOptionAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//     @toManyRelationshipOptionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ("toManyRelationshipOptionAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipOptionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipOptionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipOptionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  const GALGAS_toManyRelationshipOptionAST * p = (const GALGAS_toManyRelationshipOptionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toManyRelationshipOptionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyRelationshipAST_2D_weak::objectCompare (const GALGAS_toManyRelationshipAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST_2D_weak::GALGAS_toManyRelationshipAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST_2D_weak & GALGAS_toManyRelationshipAST_2D_weak::operator = (const GALGAS_toManyRelationshipAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST_2D_weak::GALGAS_toManyRelationshipAST_2D_weak (const GALGAS_toManyRelationshipAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST_2D_weak GALGAS_toManyRelationshipAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST_2D_weak::bang_toManyRelationshipAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyRelationshipAST) ;
      result = GALGAS_toManyRelationshipAST ((cPtr_toManyRelationshipAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @toManyRelationshipAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST_2D_weak ("toManyRelationshipAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST_2D_weak GALGAS_toManyRelationshipAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST_2D_weak result ;
  const GALGAS_toManyRelationshipAST_2D_weak * p = (const GALGAS_toManyRelationshipAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toManyRelationshipAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite::cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite (const GALGAS_string inAssociatedValue0
                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite::description (String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance::cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance (const GALGAS_string inAssociatedValue0,
                                                                                                                                                const GALGAS_string inAssociatedValue1
                                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance::description (String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration::GALGAS_toManyRelationshipOptionGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::class_func_none (UNUSED_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::class_func_hasOpposite (const GALGAS_string & inAssociatedValue0
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_hasOpposite ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::class_func_hasDependance (const GALGAS_string & inAssociatedValue0,
                                                                                                               const GALGAS_string & inAssociatedValue1
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_hasDependance ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionGeneration::method_hasOpposite (GALGAS_string & outAssociatedValue0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasOpposite) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @toManyRelationshipOptionGeneration hasOpposite invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionGeneration::method_hasDependance (GALGAS_string & outAssociatedValue0,
                                                                      GALGAS_string & outAssociatedValue1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasDependance) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendString ("method @toManyRelationshipOptionGeneration hasDependance invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionGeneration::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionGeneration::optional_hasOpposite (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_hasOpposite ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionGeneration::optional_hasDependance (GALGAS_string & outAssociatedValue0,
                                                                        GALGAS_string & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_hasDependance ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toManyRelationshipOptionGeneration [4] = {
  "(not built)",
  "none",
  "hasOpposite",
  "hasDependance"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionGeneration::getter_isHasOpposite (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasOpposite == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionGeneration::getter_isHasDependance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasDependance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendString ("<enum @toManyRelationshipOptionGeneration: ") ;
  ioString.appendString (gEnumNameArrayFor_toManyRelationshipOptionGeneration [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//     @toManyRelationshipOptionGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ("toManyRelationshipOptionGeneration",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipOptionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipOptionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipOptionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  const GALGAS_toManyRelationshipOptionGeneration * p = (const GALGAS_toManyRelationshipOptionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toManyRelationshipOptionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toManyPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toManyPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGenerateDirectAccess.printNonNullClassInstanceProperties ("mGenerateDirectAccess") ;
    mProperty_mGenerateDirectRead.printNonNullClassInstanceProperties ("mGenerateDirectRead") ;
    mProperty_mRelationshipType.printNonNullClassInstanceProperties ("mRelationshipType") ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
    mProperty_mInPreferences.printNonNullClassInstanceProperties ("mInPreferences") ;
    mProperty_mCustomStore.printNonNullClassInstanceProperties ("mCustomStore") ;
    mProperty_mUsedForSignature.printNonNullClassInstanceProperties ("mUsedForSignature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toManyPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateDirectAccess.objectCompare (p->mProperty_mGenerateDirectAccess) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateDirectRead.objectCompare (p->mProperty_mGenerateDirectRead) ;
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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration::GALGAS_toManyPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration::GALGAS_toManyPropertyGeneration (const cPtr_toManyPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGeneration::class_func_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                 const GALGAS_bool & inAttribute_mGenerateDirectAccess,
                                                                                 const GALGAS_bool & inAttribute_mGenerateDirectRead,
                                                                                 const GALGAS_propertyKind & inAttribute_mRelationshipType,
                                                                                 const GALGAS_toManyRelationshipOptionGeneration & inAttribute_mOption,
                                                                                 const GALGAS_bool & inAttribute_mInPreferences,
                                                                                 const GALGAS_bool & inAttribute_mCustomStore,
                                                                                 const GALGAS_bool & inAttribute_mUsedForSignature
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mGenerateDirectAccess.isValid () && inAttribute_mGenerateDirectRead.isValid () && inAttribute_mRelationshipType.isValid () && inAttribute_mOption.isValid () && inAttribute_mInPreferences.isValid () && inAttribute_mCustomStore.isValid () && inAttribute_mUsedForSignature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyPropertyGeneration (inAttribute_mPropertyName, inAttribute_mGenerateDirectAccess, inAttribute_mGenerateDirectRead, inAttribute_mRelationshipType, inAttribute_mOption, inAttribute_mInPreferences, inAttribute_mCustomStore, inAttribute_mUsedForSignature COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::readProperty_mGenerateDirectAccess (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mGenerateDirectAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::readProperty_mGenerateDirectRead (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mGenerateDirectRead ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_toManyPropertyGeneration::readProperty_mRelationshipType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyKind () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mRelationshipType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyPropertyGeneration::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_toManyRelationshipOptionGeneration () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::readProperty_mInPreferences (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mInPreferences ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::readProperty_mCustomStore (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mCustomStore ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toManyPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_toManyPropertyGeneration::cPtr_toManyPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                              const GALGAS_bool & in_mGenerateDirectAccess,
                                                              const GALGAS_bool & in_mGenerateDirectRead,
                                                              const GALGAS_propertyKind & in_mRelationshipType,
                                                              const GALGAS_toManyRelationshipOptionGeneration & in_mOption,
                                                              const GALGAS_bool & in_mInPreferences,
                                                              const GALGAS_bool & in_mCustomStore,
                                                              const GALGAS_bool & in_mUsedForSignature
                                                              COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mGenerateDirectAccess (in_mGenerateDirectAccess),
mProperty_mGenerateDirectRead (in_mGenerateDirectRead),
mProperty_mRelationshipType (in_mRelationshipType),
mProperty_mOption (in_mOption),
mProperty_mInPreferences (in_mInPreferences),
mProperty_mCustomStore (in_mCustomStore),
mProperty_mUsedForSignature (in_mUsedForSignature) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toManyPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration ;
}

void cPtr_toManyPropertyGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendString ("[@toManyPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mGenerateDirectAccess.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mGenerateDirectRead.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mInPreferences.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mCustomStore.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toManyPropertyGeneration (mProperty_mPropertyName, mProperty_mGenerateDirectAccess, mProperty_mGenerateDirectRead, mProperty_mRelationshipType, mProperty_mOption, mProperty_mInPreferences, mProperty_mCustomStore, mProperty_mUsedForSignature COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @toManyPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration ("toManyPropertyGeneration",
                                                                                & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration result ;
  const GALGAS_toManyPropertyGeneration * p = (const GALGAS_toManyPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toManyPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyPropertyGeneration_2D_weak::objectCompare (const GALGAS_toManyPropertyGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration_2D_weak::GALGAS_toManyPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration_2D_weak & GALGAS_toManyPropertyGeneration_2D_weak::operator = (const GALGAS_toManyPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration_2D_weak::GALGAS_toManyPropertyGeneration_2D_weak (const GALGAS_toManyPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration_2D_weak GALGAS_toManyPropertyGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGeneration_2D_weak::bang_toManyPropertyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyPropertyGeneration) ;
      result = GALGAS_toManyPropertyGeneration ((cPtr_toManyPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @toManyPropertyGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration_2D_weak ("toManyPropertyGeneration-weak",
                                                                                        & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration_2D_weak GALGAS_toManyPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration_2D_weak result ;
  const GALGAS_toManyPropertyGeneration_2D_weak * p = (const GALGAS_toManyPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toManyPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@toManyPropertyGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_toManyPropertyGenerationList : public cCollectionElement {
  public: GALGAS_toManyPropertyGenerationList_2D_element mObject ;

//--- Class functions
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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_toManyPropertyGenerationList::cCollectionElement_toManyPropertyGenerationList (const GALGAS_toManyPropertyGeneration & in_mProperty
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_toManyPropertyGenerationList::cCollectionElement_toManyPropertyGenerationList (const GALGAS_toManyPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_toManyPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toManyPropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_toManyPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_toManyPropertyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_toManyPropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyPropertyGenerationList * operand = (cCollectionElement_toManyPropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyPropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList::GALGAS_toManyPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList::GALGAS_toManyPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyPropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::class_func_listWithValue (const GALGAS_toManyPropertyGeneration & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_toManyPropertyGeneration & in_mProperty
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyPropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::addAssign_operation (const GALGAS_toManyPropertyGeneration & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_append (const GALGAS_toManyPropertyGeneration inOperand0,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_insertAtIndex (const GALGAS_toManyPropertyGeneration inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_removeAtIndex (GALGAS_toManyPropertyGeneration & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_popFirst (GALGAS_toManyPropertyGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_popLast (GALGAS_toManyPropertyGeneration & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::method_first (GALGAS_toManyPropertyGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::method_last (GALGAS_toManyPropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::add_operation (const GALGAS_toManyPropertyGenerationList & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result = GALGAS_toManyPropertyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result = GALGAS_toManyPropertyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result = GALGAS_toManyPropertyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::plusAssign_operation (const GALGAS_toManyPropertyGenerationList inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_toManyPropertyGeneration inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  GALGAS_toManyPropertyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_toManyPropertyGenerationList::cEnumerator_toManyPropertyGenerationList (const GALGAS_toManyPropertyGenerationList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element cEnumerator_toManyPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyPropertyGenerationList * p = (const cCollectionElement_toManyPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration cEnumerator_toManyPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toManyPropertyGenerationList * p = (const cCollectionElement_toManyPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//
//     @toManyPropertyGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList ("toManyPropertyGenerationList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList result ;
  const GALGAS_toManyPropertyGenerationList * p = (const GALGAS_toManyPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toManyPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@validationStubRoutineListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_validationStubRoutineListForGeneration : public cCollectionElement {
  public: GALGAS_validationStubRoutineListForGeneration_2D_element mObject ;

//--- Class functions
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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_string & in_mObjectTypeName,
                                                                                                                      const GALGAS_string & in_mModelName,
                                                                                                                      const GALGAS_string & in_mModelTypeName
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mObjectTypeName, in_mModelName, in_mModelTypeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_validationStubRoutineListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mObjectTypeName" ":") ;
  mObject.mProperty_mObjectTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mModelName" ":") ;
  mObject.mProperty_mModelName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mModelTypeName" ":") ;
  mObject.mProperty_mModelTypeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_validationStubRoutineListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_validationStubRoutineListForGeneration * operand = (cCollectionElement_validationStubRoutineListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_validationStubRoutineListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration::GALGAS_validationStubRoutineListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration::GALGAS_validationStubRoutineListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::class_func_listWithValue (const GALGAS_string & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_string & in_mObjectTypeName,
                                                                               const GALGAS_string & in_mModelName,
                                                                               const GALGAS_string & in_mModelTypeName
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (in_mObjectTypeName,
                                                                            in_mModelName,
                                                                            in_mModelTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                         const GALGAS_string & inOperand1,
                                                                         const GALGAS_string & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_append (const GALGAS_string inOperand0,
                                                                   const GALGAS_string inOperand1,
                                                                   const GALGAS_string inOperand2,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                          const GALGAS_string inOperand1,
                                                                          const GALGAS_string inOperand2,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::add_operation (const GALGAS_validationStubRoutineListForGeneration & inOperand,
                                                                                                            Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::plusAssign_operation (const GALGAS_validationStubRoutineListForGeneration inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_setMObjectTypeNameAtIndex (GALGAS_string inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObjectTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mObjectTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mObjectTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_setMModelNameAtIndex (GALGAS_string inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mModelNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mModelName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_setMModelTypeNameAtIndex (GALGAS_string inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mModelTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mModelTypeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_validationStubRoutineListForGeneration::cEnumerator_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element cEnumerator_validationStubRoutineListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mObjectTypeName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mObjectTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mModelName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mModelName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mModelTypeName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mModelTypeName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @validationStubRoutineListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ("validationStubRoutineListForGeneration",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration result ;
  const GALGAS_validationStubRoutineListForGeneration * p = (const GALGAS_validationStubRoutineListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_validationStubRoutineListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_actionMap::cMapElement_actionMap (const GALGAS_lstring & inKey
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_actionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_actionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_actionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_actionMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_actionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_actionMap * operand = (cMapElement_actionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap::GALGAS_actionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap::GALGAS_actionMap (const GALGAS_actionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap & GALGAS_actionMap::operator = (const GALGAS_actionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_actionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::class_func_mapWithMapToOverride (const GALGAS_actionMap & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_actionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = nullptr ;
  macroMyNew (p, cMapElement_actionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@actionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::add_operation (const GALGAS_actionMap & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_actionMap result = *this ;
  cEnumerator_actionMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionMap::setter_insertKey (GALGAS_lstring inKey,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = nullptr ;
  macroMyNew (p, cMapElement_actionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' action" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_actionMap_searchKey = "the '%K' action is not defined" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_actionMap::method_searchKey (GALGAS_lstring inKey,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_actionMap_searchKey
                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_actionMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_actionMap * GALGAS_actionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * result = (cMapElement_actionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_actionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_actionMap::cEnumerator_actionMap (const GALGAS_actionMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap_2D_element cEnumerator_actionMap::current (LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actionMap) ;
  return GALGAS_actionMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_actionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_actionMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_actionMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap ("actionMap",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actionMap result ;
  const GALGAS_actionMap * p = (const GALGAS_actionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @actionFileGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_actionFileGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mActionName.printNonNullClassInstanceProperties ("mActionName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration::GALGAS_actionFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration::GALGAS_actionFileGeneration (const cPtr_actionFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actionFileGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::class_func_new (const GALGAS_string & inAttribute_mClassName,
                                                                         const GALGAS_string & inAttribute_mActionName
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_actionFileGeneration result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mActionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_actionFileGeneration (inAttribute_mClassName, inAttribute_mActionName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionFileGeneration::setter_setMClassName (GALGAS_string inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionFileGeneration::setter_setMActionName (GALGAS_string inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mActionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionFileGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionFileGeneration::readProperty_mActionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    return p->mProperty_mActionName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @actionFileGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_actionFileGeneration::cPtr_actionFileGeneration (const GALGAS_string & in_mClassName,
                                                      const GALGAS_string & in_mActionName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mClassName (in_mClassName),
mProperty_mActionName (in_mActionName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_actionFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

void cPtr_actionFileGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendString ("[@actionFileGeneration:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mActionName.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_actionFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_actionFileGeneration (mProperty_mClassName, mProperty_mActionName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @actionFileGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionFileGeneration ("actionFileGeneration",
                                                                            & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionFileGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionFileGeneration result ;
  const GALGAS_actionFileGeneration * p = (const GALGAS_actionFileGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actionFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actionFileGeneration_2D_weak::objectCompare (const GALGAS_actionFileGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration_2D_weak::GALGAS_actionFileGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration_2D_weak & GALGAS_actionFileGeneration_2D_weak::operator = (const GALGAS_actionFileGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration_2D_weak::GALGAS_actionFileGeneration_2D_weak (const GALGAS_actionFileGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration_2D_weak GALGAS_actionFileGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_actionFileGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration GALGAS_actionFileGeneration_2D_weak::bang_actionFileGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_actionFileGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actionFileGeneration) ;
      result = GALGAS_actionFileGeneration ((cPtr_actionFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actionFileGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionFileGeneration_2D_weak ("actionFileGeneration-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionFileGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionFileGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionFileGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration_2D_weak GALGAS_actionFileGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionFileGeneration_2D_weak result ;
  const GALGAS_actionFileGeneration_2D_weak * p = (const GALGAS_actionFileGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actionFileGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST::GALGAS_multipleBindingComparisonAST (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::class_func_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::class_func_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::class_func_lower (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lower ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::class_func_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::class_func_greater (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greater ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::class_func_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_notEqual () const {
  const bool ok = mEnum == kEnum_notEqual ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_lower () const {
  const bool ok = mEnum == kEnum_lower ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_lowerOrEqual () const {
  const bool ok = mEnum == kEnum_lowerOrEqual ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_greater () const {
  const bool ok = mEnum == kEnum_greater ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_greaterOrEqual () const {
  const bool ok = mEnum == kEnum_greaterOrEqual ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_multipleBindingComparisonAST [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lower",
  "lowerOrEqual",
  "greater",
  "greaterOrEqual"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLower (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lower == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreater (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greater == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingComparisonAST::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendString ("<enum @multipleBindingComparisonAST: ") ;
  ioString.appendString (gEnumNameArrayFor_multipleBindingComparisonAST [mEnum]) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//     @multipleBindingComparisonAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingComparisonAST ("multipleBindingComparisonAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multipleBindingComparisonAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multipleBindingComparisonAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingComparisonAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  const GALGAS_multipleBindingComparisonAST * p = (const GALGAS_multipleBindingComparisonAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_multipleBindingComparisonAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingComparisonAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (const cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractBooleanMultipleBindingExpressionAST::cPtr_abstractBooleanMultipleBindingExpressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractBooleanMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ("abstractBooleanMultipleBindingExpressionAST",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_abstractBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionAST * p = (const GALGAS_abstractBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak & GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::bang_abstractBooleanMultipleBindingExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
      result = GALGAS_abstractBooleanMultipleBindingExpressionAST ((cPtr_abstractBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractBooleanMultipleBindingExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak ("abstractBooleanMultipleBindingExpressionAST-weak",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::GALGAS_literalIntMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST_2D_weak & GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_literalIntMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::GALGAS_literalIntMultipleBindingExpressionAST_2D_weak (const GALGAS_literalIntMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST_2D_weak GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::bang_literalIntMultipleBindingExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalIntMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalIntMultipleBindingExpressionAST) ;
      result = GALGAS_literalIntMultipleBindingExpressionAST ((cPtr_literalIntMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @literalIntMultipleBindingExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2D_weak ("literalIntMultipleBindingExpressionAST-weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST_2D_weak GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_literalIntMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_literalIntMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalIntMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @negateBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_negateBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mBinding.printNonNullClassInstanceProperties ("mBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionAST * p = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mBinding.objectCompare (p->mProperty_mBinding) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (const cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::class_func_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mBinding
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionAST (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_negateBooleanMultipleBindingExpressionAST::setter_setMBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::readProperty_mBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mBinding ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @negateBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionAST::cPtr_negateBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mBinding
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mBinding (in_mBinding) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

void cPtr_negateBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendString ("[@negateBooleanMultipleBindingExpressionAST:") ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionAST (mProperty_mBinding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @negateBooleanMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ("negateBooleanMultipleBindingExpressionAST",
                                                                                                 & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  const GALGAS_negateBooleanMultipleBindingExpressionAST * p = (const GALGAS_negateBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak & GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_negateBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak (const GALGAS_negateBooleanMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::bang_negateBooleanMultipleBindingExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
      result = GALGAS_negateBooleanMultipleBindingExpressionAST ((cPtr_negateBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @negateBooleanMultipleBindingExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak ("negateBooleanMultipleBindingExpressionAST-weak",
                                                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonMultipleBindingExpressionAST reference class
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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (const cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::class_func_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                             const GALGAS_multipleBindingComparisonAST & inAttribute_mOperator,
                                                                                                             const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mOperator, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionAST::setter_setMOperator (GALGAS_multipleBindingComparisonAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionAST::readProperty_mOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_multipleBindingComparisonAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionAST::cPtr_comparisonMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mOperator (in_mOperator),
mProperty_mRightBinding (in_mRightBinding) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

void cPtr_comparisonMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendString ("[@comparisonMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @comparisonMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ("comparisonMultipleBindingExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  const GALGAS_comparisonMultipleBindingExpressionAST * p = (const GALGAS_comparisonMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_comparisonMultipleBindingExpressionAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::GALGAS_comparisonMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST_2D_weak & GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_comparisonMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::GALGAS_comparisonMultipleBindingExpressionAST_2D_weak (const GALGAS_comparisonMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST_2D_weak GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::bang_comparisonMultipleBindingExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonMultipleBindingExpressionAST) ;
      result = GALGAS_comparisonMultipleBindingExpressionAST ((cPtr_comparisonMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @comparisonMultipleBindingExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2D_weak ("comparisonMultipleBindingExpressionAST-weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST_2D_weak GALGAS_comparisonMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_comparisonMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_comparisonMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (const cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::class_func_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                             const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionAST::cPtr_andBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

void cPtr_andBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendString ("[@andBooleanMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @andBooleanMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ("andBooleanMultipleBindingExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  const GALGAS_andBooleanMultipleBindingExpressionAST * p = (const GALGAS_andBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak & GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_andBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak (const GALGAS_andBooleanMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::bang_andBooleanMultipleBindingExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
      result = GALGAS_andBooleanMultipleBindingExpressionAST ((cPtr_andBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @andBooleanMultipleBindingExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak ("andBooleanMultipleBindingExpressionAST-weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (const cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::class_func_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                           const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionAST::cPtr_orBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                        const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

void cPtr_orBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendString ("[@orBooleanMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @orBooleanMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ("orBooleanMultipleBindingExpressionAST",
                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  const GALGAS_orBooleanMultipleBindingExpressionAST * p = (const GALGAS_orBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak & GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_orBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak (const GALGAS_orBooleanMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::bang_orBooleanMultipleBindingExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
      result = GALGAS_orBooleanMultipleBindingExpressionAST ((cPtr_orBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @orBooleanMultipleBindingExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak ("orBooleanMultipleBindingExpressionAST-weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @xorBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_xorBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST::GALGAS_xorBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST::GALGAS_xorBooleanMultipleBindingExpressionAST (const cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::class_func_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                             const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @xorBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionAST::cPtr_xorBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

void cPtr_xorBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendString ("[@xorBooleanMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @xorBooleanMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ("xorBooleanMultipleBindingExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST * p = (const GALGAS_xorBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak & GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_xorBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak (const GALGAS_xorBooleanMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::bang_xorBooleanMultipleBindingExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
      result = GALGAS_xorBooleanMultipleBindingExpressionAST ((cPtr_xorBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @xorBooleanMultipleBindingExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak ("xorBooleanMultipleBindingExpressionAST-weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @observablePropertyInMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_observablePropertyInMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mProperty.printNonNullClassInstanceProperties ("mProperty") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_observablePropertyInMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mProperty.objectCompare (p->mProperty_mProperty) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (const cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::class_func_new (const GALGAS_observablePropertyAST & inAttribute_mProperty
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  if (inAttribute_mProperty.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyInMultipleBindingExpressionAST (inAttribute_mProperty COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyInMultipleBindingExpressionAST::setter_setMProperty (GALGAS_observablePropertyAST inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    p->mProperty_mProperty = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyInMultipleBindingExpressionAST::readProperty_mProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_observablePropertyAST () ;
  }else{
    cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    return p->mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @observablePropertyInMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (const GALGAS_observablePropertyAST & in_mProperty
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mProperty (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_observablePropertyInMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

void cPtr_observablePropertyInMultipleBindingExpressionAST::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendString ("[@observablePropertyInMultipleBindingExpressionAST:") ;
  mProperty_mProperty.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_observablePropertyInMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_observablePropertyInMultipleBindingExpressionAST (mProperty_mProperty COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @observablePropertyInMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ("observablePropertyInMultipleBindingExpressionAST",
                                                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyInMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyInMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyInMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST * p = (const GALGAS_observablePropertyInMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_observablePropertyInMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak & GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::bang_observablePropertyInMultipleBindingExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
      result = GALGAS_observablePropertyInMultipleBindingExpressionAST ((cPtr_observablePropertyInMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @observablePropertyInMultipleBindingExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak ("observablePropertyInMultipleBindingExpressionAST-weak",
                                                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_observablePropertyInMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ((cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractBooleanMultipleBindingExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak ("abstractBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @observablePropertyAsBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mObservedModelString.printNonNullClassInstanceProperties ("mObservedModelString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mObservedModelString.objectCompare (p->mProperty_mObservedModelString) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::class_func_new (const GALGAS_string & inAttribute_mObservedModelString
                                                                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mObservedModelString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (inAttribute_mObservedModelString COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::setter_setMObservedModelString (GALGAS_string inValue
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mObservedModelString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::readProperty_mObservedModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mObservedModelString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedModelString
                                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mObservedModelString (in_mObservedModelString) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString.appendString ("[@observablePropertyAsBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mObservedModelString.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (mProperty_mObservedModelString COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @observablePropertyAsBooleanMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration",
                                                                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ((cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @observablePropertyAsBooleanMultipleBindingExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                                                                 & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @booleanMultipleBindingLiteralIntForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_booleanMultipleBindingLiteralIntForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_booleanMultipleBindingLiteralIntForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (const cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::class_func_new (const GALGAS_uint & inAttribute_mValue
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_booleanMultipleBindingLiteralIntForGeneration::setter_setMValue (GALGAS_uint inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_booleanMultipleBindingLiteralIntForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @booleanMultipleBindingLiteralIntForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_booleanMultipleBindingLiteralIntForGeneration::cPtr_booleanMultipleBindingLiteralIntForGeneration (const GALGAS_uint & in_mValue
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_booleanMultipleBindingLiteralIntForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

void cPtr_booleanMultipleBindingLiteralIntForGeneration::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendString ("[@booleanMultipleBindingLiteralIntForGeneration:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_booleanMultipleBindingLiteralIntForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_booleanMultipleBindingLiteralIntForGeneration (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @booleanMultipleBindingLiteralIntForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ("booleanMultipleBindingLiteralIntForGeneration",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_booleanMultipleBindingLiteralIntForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_booleanMultipleBindingLiteralIntForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanMultipleBindingLiteralIntForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  const GALGAS_booleanMultipleBindingLiteralIntForGeneration * p = (const GALGAS_booleanMultipleBindingLiteralIntForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_booleanMultipleBindingLiteralIntForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanMultipleBindingLiteralIntForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::objectCompare (const GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak & GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::operator = (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::bang_booleanMultipleBindingLiteralIntForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
      result = GALGAS_booleanMultipleBindingLiteralIntForGeneration ((cPtr_booleanMultipleBindingLiteralIntForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @booleanMultipleBindingLiteralIntForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak ("booleanMultipleBindingLiteralIntForGeneration-weak",
                                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak result ;
  const GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak * p = (const GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_booleanMultipleBindingLiteralIntForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanMultipleBindingLiteralIntForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @negateBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_negateBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mBinding.printNonNullClassInstanceProperties ("mBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mBinding.objectCompare (p->mProperty_mBinding) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (const cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::class_func_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mBinding
                                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_negateBooleanMultipleBindingExpressionForGeneration::setter_setMBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::readProperty_mBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mBinding ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionForGeneration::cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mBinding (in_mBinding) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendString ("[@negateBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (mProperty_mBinding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @negateBooleanMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ("negateBooleanMultipleBindingExpressionForGeneration",
                                                                                                           & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_negateBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_negateBooleanMultipleBindingExpressionForGeneration ((cPtr_negateBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @negateBooleanMultipleBindingExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak ("negateBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                                                   & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (const cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::class_func_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                               const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionForGeneration::cPtr_orBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_orBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendString ("[@orBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @orBooleanMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ("orBooleanMultipleBindingExpressionForGeneration",
                                                                                                       & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_orBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_orBooleanMultipleBindingExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_orBooleanMultipleBindingExpressionForGeneration ((cPtr_orBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @orBooleanMultipleBindingExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak ("orBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @xorBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_xorBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration::GALGAS_xorBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration::GALGAS_xorBooleanMultipleBindingExpressionForGeneration (const cPtr_xorBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::class_func_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @xorBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionForGeneration::cPtr_xorBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_xorBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendString ("[@xorBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @xorBooleanMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ("xorBooleanMultipleBindingExpressionForGeneration",
                                                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_xorBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_xorBooleanMultipleBindingExpressionForGeneration ((cPtr_xorBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @xorBooleanMultipleBindingExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak ("xorBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (const cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::class_func_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionForGeneration::cPtr_andBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_andBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendString ("[@andBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @andBooleanMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ("andBooleanMultipleBindingExpressionForGeneration",
                                                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_andBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak & GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::bang_andBooleanMultipleBindingExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
      result = GALGAS_andBooleanMultipleBindingExpressionForGeneration ((cPtr_andBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @andBooleanMultipleBindingExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak ("andBooleanMultipleBindingExpressionForGeneration-weak",
                                                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonMultipleBindingExpressionForGeneration reference class
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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (const cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::class_func_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                 const GALGAS_multipleBindingComparisonAST & inAttribute_mOperator,
                                                                                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mOperator, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionForGeneration::setter_setMOperator (GALGAS_multipleBindingComparisonAST inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionForGeneration::readProperty_mOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_multipleBindingComparisonAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionForGeneration::cPtr_comparisonMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mOperator (in_mOperator),
mProperty_mRightBinding (in_mRightBinding) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

void cPtr_comparisonMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendString ("[@comparisonMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @comparisonMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ("comparisonMultipleBindingExpressionForGeneration",
                                                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  const GALGAS_comparisonMultipleBindingExpressionForGeneration * p = (const GALGAS_comparisonMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak & GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::operator = (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::bang_comparisonMultipleBindingExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
      result = GALGAS_comparisonMultipleBindingExpressionForGeneration ((cPtr_comparisonMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @comparisonMultipleBindingExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak ("comparisonMultipleBindingExpressionForGeneration-weak",
                                                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak result ;
  const GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak * p = (const GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                              const GALGAS_bool constin_inPreferences,
                                                              const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                                              const GALGAS_semanticContext constin_inSemanticContext,
                                                              const GALGAS_propertyMap constin_inCurrentObservablePropertyMap,
                                                              const GALGAS_propertyMap constin_inPreferencesObservablePropertyMap,
                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                              GALGAS_typeKind & out_outType,
                                                              GALGAS_location & out_outErrorLocation,
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

GALGAS_string callExtensionGetter_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_expressionString (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship::cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship (const GALGAS_lstring inAssociatedValue0
                                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship::description (String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * ptr = dynamic_cast<const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST::GALGAS_arrayControllerBoundModelAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerBoundModelAST::class_func_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundModelAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_rootToManyRelationship ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerBoundModelAST::class_func_selfToManyRelationship (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundModelAST result ;
  result.mEnum = kEnum_selfToManyRelationship ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBoundModelAST::method_rootToManyRelationship (GALGAS_lstring & outAssociatedValue0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootToManyRelationship) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @arrayControllerBoundModelAST rootToManyRelationship invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * ptr = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerBoundModelAST::optional_rootToManyRelationship (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_rootToManyRelationship ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerBoundModelAST::optional_selfToManyRelationship () const {
  const bool ok = mEnum == kEnum_selfToManyRelationship ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerBoundModelAST [3] = {
  "(not built)",
  "rootToManyRelationship",
  "selfToManyRelationship"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerBoundModelAST::getter_isRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootToManyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerBoundModelAST::getter_isSelfToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfToManyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBoundModelAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendString ("<enum @arrayControllerBoundModelAST: ") ;
  ioString.appendString (gEnumNameArrayFor_arrayControllerBoundModelAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerBoundModelAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ("arrayControllerBoundModelAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundModelAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerBoundModelAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundModelAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerBoundModelAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundModelAST result ;
  const GALGAS_arrayControllerBoundModelAST * p = (const GALGAS_arrayControllerBoundModelAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayControllerBoundModelAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundModelAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak::GALGAS_arrayControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak & GALGAS_arrayControllerDeclarationAST_2D_weak::operator = (const GALGAS_arrayControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak::GALGAS_arrayControllerDeclarationAST_2D_weak (const GALGAS_arrayControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak GALGAS_arrayControllerDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST_2D_weak::bang_arrayControllerDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerDeclarationAST) ;
      result = GALGAS_arrayControllerDeclarationAST ((cPtr_arrayControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2D_weak ("arrayControllerDeclarationAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak GALGAS_arrayControllerDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST_2D_weak result ;
  const GALGAS_arrayControllerDeclarationAST_2D_weak * p = (const GALGAS_arrayControllerDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayControllerDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayControllerPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mModelString.printNonNullClassInstanceProperties ("mModelString") ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration::GALGAS_arrayControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration::GALGAS_arrayControllerPropertyGeneration (const cPtr_arrayControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::class_func_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                   const GALGAS_string & inAttribute_mModelString,
                                                                                                   const GALGAS_string & inAttribute_mOwnerName
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mOwnerName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mModelString, inAttribute_mOwnerName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerPropertyGeneration::setter_setMModelString (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerPropertyGeneration::readProperty_mModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                const GALGAS_string & in_mModelString,
                                                                                const GALGAS_string & in_mOwnerName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mModelString (in_mModelString),
mProperty_mOwnerName (in_mOwnerName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

void cPtr_arrayControllerPropertyGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendString ("[@arrayControllerPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ("arrayControllerPropertyGeneration",
                                                                                         & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration result ;
  const GALGAS_arrayControllerPropertyGeneration * p = (const GALGAS_arrayControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak::GALGAS_arrayControllerPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak & GALGAS_arrayControllerPropertyGeneration_2D_weak::operator = (const GALGAS_arrayControllerPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak::GALGAS_arrayControllerPropertyGeneration_2D_weak (const GALGAS_arrayControllerPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak GALGAS_arrayControllerPropertyGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration_2D_weak::bang_arrayControllerPropertyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerPropertyGeneration) ;
      result = GALGAS_arrayControllerPropertyGeneration ((cPtr_arrayControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerPropertyGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2D_weak ("arrayControllerPropertyGeneration-weak",
                                                                                                 & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration_2D_weak GALGAS_arrayControllerPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration_2D_weak result ;
  const GALGAS_arrayControllerPropertyGeneration_2D_weak * p = (const GALGAS_arrayControllerPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayControllerPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind::GALGAS_arrayControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::class_func_entityArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_entityArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::class_func_transientArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_transientArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerModelKind::optional_entityArray () const {
  const bool ok = mEnum == kEnum_entityArray ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerModelKind::optional_transientArray () const {
  const bool ok = mEnum == kEnum_transientArray ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerModelKind::description (String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString.appendString ("<enum @arrayControllerModelKind: ") ;
  ioString.appendString (gEnumNameArrayFor_arrayControllerModelKind [mEnum]) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerModelKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModelKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerModelKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  const GALGAS_arrayControllerModelKind * p = (const GALGAS_arrayControllerModelKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak::GALGAS_arrayControllerGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak & GALGAS_arrayControllerGeneration_2D_weak::operator = (const GALGAS_arrayControllerGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak::GALGAS_arrayControllerGeneration_2D_weak (const GALGAS_arrayControllerGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak GALGAS_arrayControllerGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration_2D_weak::bang_arrayControllerGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerGeneration) ;
      result = GALGAS_arrayControllerGeneration ((cPtr_arrayControllerGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration_2D_weak ("arrayControllerGeneration-weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak GALGAS_arrayControllerGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration_2D_weak result ;
  const GALGAS_arrayControllerGeneration_2D_weak * p = (const GALGAS_arrayControllerGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayControllerGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerBoundColumnListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST : public cCollectionElement {
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element mObject ;

//--- Class functions
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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_bool & in_mEditable,
                                                                                                                                        const GALGAS_lstring & in_mPropertyName,
                                                                                                                                        const GALGAS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                                                                        const GALGAS_lstring & in_mSortPropertyName
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEditable, in_mPropertyName, in_mColumnParameterListAST, in_mSortPropertyName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEditable, inElement.mProperty_mPropertyName, inElement.mProperty_mColumnParameterListAST, inElement.mProperty_mSortPropertyName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (mObject.mProperty_mEditable, mObject.mProperty_mPropertyName, mObject.mProperty_mColumnParameterListAST, mObject.mProperty_mSortPropertyName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mEditable" ":") ;
  mObject.mProperty_mEditable.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mPropertyName" ":") ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mColumnParameterListAST" ":") ;
  mObject.mProperty_mColumnParameterListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mSortPropertyName" ":") ;
  mObject.mProperty_mSortPropertyName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * operand = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST::GALGAS_autoLayoutTableViewControllerBoundColumnListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST::GALGAS_autoLayoutTableViewControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerBoundColumnListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::class_func_listWithValue (const GALGAS_bool & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                        const GALGAS_bool & in_mEditable,
                                                                                        const GALGAS_lstring & in_mPropertyName,
                                                                                        const GALGAS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                        const GALGAS_lstring & in_mSortPropertyName
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (in_mEditable,
                                                                                     in_mPropertyName,
                                                                                     in_mColumnParameterListAST,
                                                                                     in_mSortPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                  const GALGAS_lstring & inOperand3
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_append (const GALGAS_bool inOperand0,
                                                                            const GALGAS_lstring inOperand1,
                                                                            const GALGAS_astAutoLayoutViewInstructionParameterList inOperand2,
                                                                            const GALGAS_lstring inOperand3,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                                                   const GALGAS_lstring inOperand1,
                                                                                   const GALGAS_astAutoLayoutViewInstructionParameterList inOperand2,
                                                                                   const GALGAS_lstring inOperand3,
                                                                                   const GALGAS_uint inInsertionIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                                                   GALGAS_lstring & outOperand1,
                                                                                   GALGAS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                                   GALGAS_lstring & outOperand3,
                                                                                   const GALGAS_uint inRemoveIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_popFirst (GALGAS_bool & outOperand0,
                                                                              GALGAS_lstring & outOperand1,
                                                                              GALGAS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                              GALGAS_lstring & outOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_popLast (GALGAS_bool & outOperand0,
                                                                             GALGAS_lstring & outOperand1,
                                                                             GALGAS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                             GALGAS_lstring & outOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::method_first (GALGAS_bool & outOperand0,
                                                                           GALGAS_lstring & outOperand1,
                                                                           GALGAS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                           GALGAS_lstring & outOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::method_last (GALGAS_bool & outOperand0,
                                                                          GALGAS_lstring & outOperand1,
                                                                          GALGAS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                          GALGAS_lstring & outOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::add_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & inOperand,
                                                                                                                              Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST inOperand,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMEditableAtIndex (GALGAS_bool inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEditable = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mEditableAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mEditable ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMColumnParameterListASTAtIndex (GALGAS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                                                       GALGAS_uint inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnParameterListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mColumnParameterListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnParameterListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMSortPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                                                 GALGAS_uint inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mSortPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mSortPropertyName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::cEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & inEnumeratedObject,
                                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mEditable (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mEditable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mColumnParameterListAST (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mSortPropertyName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerBoundColumnListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ("autoLayoutTableViewControllerBoundColumnListAST",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerBoundColumnListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerBoundColumnListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerBoundColumnListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result ;
  const GALGAS_autoLayoutTableViewControllerBoundColumnListAST * p = (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerBoundColumnListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerAttributListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerAttributListAST : public cCollectionElement {
  public: GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element mObject ;

//--- Class functions
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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                                                                  const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerAttributListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerAttributListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerAttributListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerAttributListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mAttributeName" ":") ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mAttributeValue" ":") ;
  mObject.mProperty_mAttributeValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutTableViewControllerAttributListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * operand = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST::GALGAS_autoLayoutTableViewControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST::GALGAS_autoLayoutTableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerAttributListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_lstring & in_mAttributeName,
                                                                                     const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (in_mAttributeName,
                                                                                  in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                               const GALGAS_abstractDefaultValue & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_append (const GALGAS_lstring inOperand0,
                                                                         const GALGAS_abstractDefaultValue inOperand1,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                                const GALGAS_abstractDefaultValue inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                                GALGAS_abstractDefaultValue & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                           GALGAS_abstractDefaultValue & outOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                          GALGAS_abstractDefaultValue & outOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::method_first (GALGAS_lstring & outOperand0,
                                                                        GALGAS_abstractDefaultValue & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::method_last (GALGAS_lstring & outOperand0,
                                                                       GALGAS_abstractDefaultValue & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::add_operation (const GALGAS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerAttributListAST inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeValueAtIndex (GALGAS_abstractDefaultValue inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerAttributListAST::cEnumerator_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element cEnumerator_autoLayoutTableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue cEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeValue ;
}




//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerAttributListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ("autoLayoutTableViewControllerAttributListAST",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerAttributListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerAttributListAST result ;
  const GALGAS_autoLayoutTableViewControllerAttributListAST * p = (const GALGAS_autoLayoutTableViewControllerAttributListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak & GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::operator = (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::bang_autoLayoutTableViewControllerDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
      result = GALGAS_autoLayoutTableViewControllerDeclarationAST ((cPtr_autoLayoutTableViewControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak ("autoLayoutTableViewControllerDeclarationAST-weak",
                                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak result ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak * p = (const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

