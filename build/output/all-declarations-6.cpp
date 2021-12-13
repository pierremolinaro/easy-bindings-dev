#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_entityDeclarationAST_2D_weak::objectCompare (const GALGAS_entityDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_entityDeclarationAST_2D_weak::GALGAS_entityDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST_2D_weak & GALGAS_entityDeclarationAST_2D_weak::operator = (const GALGAS_entityDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST_2D_weak::GALGAS_entityDeclarationAST_2D_weak (const GALGAS_entityDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST_2D_weak GALGAS_entityDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_entityDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST_2D_weak::bang_entityDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_entityDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_entityDeclarationAST) ;
      result = GALGAS_entityDeclarationAST ((cPtr_entityDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@entityDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclarationAST_2D_weak ("entityDeclarationAST-weak",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST_2D_weak GALGAS_entityDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST_2D_weak result ;
  const GALGAS_entityDeclarationAST_2D_weak * p = (const GALGAS_entityDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @entityForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_entityForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEntityName.objectCompare (p->mProperty_mEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyGenerationList.objectCompare (p->mProperty_mPropertyGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureSet.objectCompare (p->mProperty_mSignatureSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsGraphicEntity.objectCompare (p->mProperty_mIsGraphicEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridenTransients.objectCompare (p->mProperty_mOverridenTransients) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasSubEntity.objectCompare (p->mProperty_mHasSubEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCanCopyAndPaste_5F_option.objectCompare (p->mProperty_mCanCopyAndPaste_5F_option) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCannotBeDeleted_5F_option.objectCompare (p->mProperty_mCannotBeDeleted_5F_option) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_entityForGeneration::objectCompare (const GALGAS_entityForGeneration & inOperand) const {
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

GALGAS_entityForGeneration::GALGAS_entityForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_externSwiftDelegateList::constructor_emptyList (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration::GALGAS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::constructor_new (const GALGAS_string & inAttribute_mEntityName,
                                                                        const GALGAS_string & inAttribute_mSuperEntityName,
                                                                        const GALGAS_propertyGenerationList & inAttribute_mPropertyGenerationList,
                                                                        const GALGAS_stringset & inAttribute_mSignatureSet,
                                                                        const GALGAS_bool & inAttribute_mIsGraphicEntity,
                                                                        const GALGAS_bool & inAttribute_mIsAbstract,
                                                                        const GALGAS_stringset & inAttribute_mOverridenTransients,
                                                                        const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList,
                                                                        const GALGAS_bool & inAttribute_mHasSubEntity,
                                                                        const GALGAS_bool & inAttribute_mCanCopyAndPaste_5F_option,
                                                                        const GALGAS_bool & inAttribute_mCannotBeDeleted_5F_option
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  if (inAttribute_mEntityName.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mPropertyGenerationList.isValid () && inAttribute_mSignatureSet.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mOverridenTransients.isValid () && inAttribute_mExternSwiftDelegateList.isValid () && inAttribute_mHasSubEntity.isValid () && inAttribute_mCanCopyAndPaste_5F_option.isValid () && inAttribute_mCannotBeDeleted_5F_option.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityForGeneration (inAttribute_mEntityName, inAttribute_mSuperEntityName, inAttribute_mPropertyGenerationList, inAttribute_mSignatureSet, inAttribute_mIsGraphicEntity, inAttribute_mIsAbstract, inAttribute_mOverridenTransients, inAttribute_mExternSwiftDelegateList, inAttribute_mHasSubEntity, inAttribute_mCanCopyAndPaste_5F_option, inAttribute_mCannotBeDeleted_5F_option COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMEntityName (GALGAS_string inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMSuperEntityName (GALGAS_string inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mSuperEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMPropertyGenerationList (GALGAS_propertyGenerationList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mPropertyGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMSignatureSet (GALGAS_stringset inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mSignatureSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMIsGraphicEntity (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mIsGraphicEntity = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMIsAbstract (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mIsAbstract = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMOverridenTransients (GALGAS_stringset inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mOverridenTransients = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mExternSwiftDelegateList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMHasSubEntity (GALGAS_bool inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mHasSubEntity = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMCanCopyAndPaste_5F_option (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mCanCopyAndPaste_5F_option = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMCannotBeDeleted_5F_option (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mCannotBeDeleted_5F_option = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityForGeneration::readProperty_mEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityForGeneration::readProperty_mSuperEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSuperEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_entityForGeneration::readProperty_mPropertyGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyGenerationList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mPropertyGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityForGeneration::readProperty_mSignatureSet (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSignatureSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mIsGraphicEntity (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsGraphicEntity ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mIsAbstract (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsAbstract ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityForGeneration::readProperty_mOverridenTransients (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mOverridenTransients ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_entityForGeneration::readProperty_mExternSwiftDelegateList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externSwiftDelegateList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mExternSwiftDelegateList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mHasSubEntity (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mHasSubEntity ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mCanCopyAndPaste_5F_option (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCanCopyAndPaste_5F_option ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mCannotBeDeleted_5F_option (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCannotBeDeleted_5F_option ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @entityForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_entityForGeneration::cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                                    const GALGAS_string & in_mSuperEntityName,
                                                    const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                    const GALGAS_stringset & in_mSignatureSet,
                                                    const GALGAS_bool & in_mIsGraphicEntity,
                                                    const GALGAS_bool & in_mIsAbstract,
                                                    const GALGAS_stringset & in_mOverridenTransients,
                                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                    const GALGAS_bool & in_mHasSubEntity,
                                                    const GALGAS_bool & in_mCanCopyAndPaste_5F_option,
                                                    const GALGAS_bool & in_mCannotBeDeleted_5F_option
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEntityName (in_mEntityName),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mPropertyGenerationList (in_mPropertyGenerationList),
mProperty_mSignatureSet (in_mSignatureSet),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mOverridenTransients (in_mOverridenTransients),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList),
mProperty_mHasSubEntity (in_mHasSubEntity),
mProperty_mCanCopyAndPaste_5F_option (in_mCanCopyAndPaste_5F_option),
mProperty_mCannotBeDeleted_5F_option (in_mCannotBeDeleted_5F_option) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_entityForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

void cPtr_entityForGeneration::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@entityForGeneration:" ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridenTransients.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasSubEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCanCopyAndPaste_5F_option.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCannotBeDeleted_5F_option.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityForGeneration (mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mPropertyGenerationList, mProperty_mSignatureSet, mProperty_mIsGraphicEntity, mProperty_mIsAbstract, mProperty_mOverridenTransients, mProperty_mExternSwiftDelegateList, mProperty_mHasSubEntity, mProperty_mCanCopyAndPaste_5F_option, mProperty_mCannotBeDeleted_5F_option COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@entityForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityForGeneration ("entityForGeneration",
                                            & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  const GALGAS_entityForGeneration * p = (const GALGAS_entityForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_entityForGeneration_2D_weak::objectCompare (const GALGAS_entityForGeneration_2D_weak & inOperand) const {
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

GALGAS_entityForGeneration_2D_weak::GALGAS_entityForGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration_2D_weak & GALGAS_entityForGeneration_2D_weak::operator = (const GALGAS_entityForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration_2D_weak::GALGAS_entityForGeneration_2D_weak (const GALGAS_entityForGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration_2D_weak GALGAS_entityForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_entityForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration_2D_weak::bang_entityForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_entityForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_entityForGeneration) ;
      result = GALGAS_entityForGeneration ((cPtr_entityForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@entityForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityForGeneration_2D_weak ("entityForGeneration-weak",
                                                    & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration_2D_weak GALGAS_entityForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration_2D_weak result ;
  const GALGAS_entityForGeneration_2D_weak * p = (const GALGAS_entityForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @xibDocumentDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xibDocumentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xibDocumentDeclarationAST * p = (const cPtr_xibDocumentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletDeclarationList.objectCompare (p->mProperty_mOutletDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerBindingListAST.objectCompare (p->mProperty_mArrayControllerBindingListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xibDocumentDeclarationAST::objectCompare (const GALGAS_xibDocumentDeclarationAST & inOperand) const {
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

GALGAS_xibDocumentDeclarationAST::GALGAS_xibDocumentDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST GALGAS_xibDocumentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_xibDocumentDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE),
                                                            GALGAS_arrayControllerBindingListAST::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST::GALGAS_xibDocumentDeclarationAST (const cPtr_xibDocumentDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xibDocumentDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST GALGAS_xibDocumentDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                    const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                                    const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                                    const GALGAS_arrayControllerBindingListAST & inAttribute_mArrayControllerBindingListAST
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_xibDocumentDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mArrayControllerBindingListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xibDocumentDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mOutletDeclarationList, inAttribute_mActionDeclarationList, inAttribute_mArrayControllerBindingListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentDeclarationAST::setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    p->mProperty_mOutletDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentDeclarationAST::setter_setMActionDeclarationList (GALGAS_lstringlist inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    p->mProperty_mActionDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentDeclarationAST::setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    p->mProperty_mArrayControllerBindingListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_xibDocumentDeclarationAST::readProperty_mRootEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_xibDocumentDeclarationAST::readProperty_mOutletDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_outletDeclarationList () ;
  }else{
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    return p->mProperty_mOutletDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_xibDocumentDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_xibDocumentDeclarationAST::readProperty_mArrayControllerBindingListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_arrayControllerBindingListAST () ;
  }else{
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    return p->mProperty_mArrayControllerBindingListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xibDocumentDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xibDocumentDeclarationAST::cPtr_xibDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_lstring & in_mRootEntityName,
                                                                const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                                const GALGAS_lstringlist & in_mActionDeclarationList,
                                                                const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mOutletDeclarationList (in_mOutletDeclarationList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mArrayControllerBindingListAST (in_mArrayControllerBindingListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xibDocumentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xibDocumentDeclarationAST ;
}

void cPtr_xibDocumentDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@xibDocumentDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerBindingListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xibDocumentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xibDocumentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList, mProperty_mArrayControllerBindingListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xibDocumentDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xibDocumentDeclarationAST ("xibDocumentDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xibDocumentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xibDocumentDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xibDocumentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xibDocumentDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST GALGAS_xibDocumentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xibDocumentDeclarationAST result ;
  const GALGAS_xibDocumentDeclarationAST * p = (const GALGAS_xibDocumentDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xibDocumentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xibDocumentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_xibDocumentDeclarationAST_2D_weak::objectCompare (const GALGAS_xibDocumentDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_xibDocumentDeclarationAST_2D_weak::GALGAS_xibDocumentDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST_2D_weak & GALGAS_xibDocumentDeclarationAST_2D_weak::operator = (const GALGAS_xibDocumentDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST_2D_weak::GALGAS_xibDocumentDeclarationAST_2D_weak (const GALGAS_xibDocumentDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST_2D_weak GALGAS_xibDocumentDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_xibDocumentDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST GALGAS_xibDocumentDeclarationAST_2D_weak::bang_xibDocumentDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_xibDocumentDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xibDocumentDeclarationAST) ;
      result = GALGAS_xibDocumentDeclarationAST ((cPtr_xibDocumentDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@xibDocumentDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xibDocumentDeclarationAST_2D_weak ("xibDocumentDeclarationAST-weak",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xibDocumentDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xibDocumentDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xibDocumentDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xibDocumentDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST_2D_weak GALGAS_xibDocumentDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xibDocumentDeclarationAST_2D_weak result ;
  const GALGAS_xibDocumentDeclarationAST_2D_weak * p = (const GALGAS_xibDocumentDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xibDocumentDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xibDocumentDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @xibDocumentFileGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xibDocumentFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mDocumentName.objectCompare (p->mProperty_mDocumentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDocumentPropertyGenearionList.objectCompare (p->mProperty_mDocumentPropertyGenearionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletMap.objectCompare (p->mProperty_mOutletMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetActionList.objectCompare (p->mProperty_mTargetActionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_multipleBindingGenerationList.objectCompare (p->mProperty_multipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (p->mProperty_mEBViewBindingGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xibDocumentFileGeneration::objectCompare (const GALGAS_xibDocumentFileGeneration & inOperand) const {
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

GALGAS_xibDocumentFileGeneration::GALGAS_xibDocumentFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration GALGAS_xibDocumentFileGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_xibDocumentFileGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                            GALGAS_string::constructor_default (HERE),
                                                            GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                            GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                            GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                            GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                            GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                            GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                            GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration::GALGAS_xibDocumentFileGeneration (const cPtr_xibDocumentFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xibDocumentFileGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration GALGAS_xibDocumentFileGeneration::constructor_new (const GALGAS_string & inAttribute_mDocumentName,
                                                                                    const GALGAS_string & inAttribute_mRootEntityName,
                                                                                    const GALGAS_propertyGenerationList & inAttribute_mDocumentPropertyGenearionList,
                                                                                    const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                                    const GALGAS_actionBindingListForGeneration & inAttribute_mTargetActionList,
                                                                                    const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                    const GALGAS_multipleBindingGenerationList & inAttribute_multipleBindingGenerationList,
                                                                                    const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                                    const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_xibDocumentFileGeneration result ;
  if (inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mDocumentPropertyGenearionList.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mTargetActionList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_multipleBindingGenerationList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xibDocumentFileGeneration (inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mDocumentPropertyGenearionList, inAttribute_mOutletMap, inAttribute_mTargetActionList, inAttribute_mRegularBindingsGenerationList, inAttribute_multipleBindingGenerationList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMDocumentName (GALGAS_string inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mDocumentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMRootEntityName (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMDocumentPropertyGenearionList (GALGAS_propertyGenerationList inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mDocumentPropertyGenearionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMOutletMap (GALGAS_decoratedOutletMap inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mOutletMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mTargetActionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mRegularBindingsGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_multipleBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mTableViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mEBViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_xibDocumentFileGeneration::readProperty_mDocumentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    return p->mProperty_mDocumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_xibDocumentFileGeneration::readProperty_mRootEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    return p->mProperty_mRootEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_xibDocumentFileGeneration::readProperty_mDocumentPropertyGenearionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyGenerationList () ;
  }else{
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    return p->mProperty_mDocumentPropertyGenearionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_xibDocumentFileGeneration::readProperty_mOutletMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedOutletMap () ;
  }else{
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    return p->mProperty_mOutletMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_xibDocumentFileGeneration::readProperty_mTargetActionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actionBindingListForGeneration () ;
  }else{
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    return p->mProperty_mTargetActionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_xibDocumentFileGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_regularBindingsGenerationList () ;
  }else{
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_xibDocumentFileGeneration::readProperty_multipleBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_multipleBindingGenerationList () ;
  }else{
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    return p->mProperty_multipleBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_xibDocumentFileGeneration::readProperty_mTableViewBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_tableViewBindingGenerationList () ;
  }else{
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    return p->mProperty_mTableViewBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_xibDocumentFileGeneration::readProperty_mEBViewBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ebViewGraphicControllerBindingGenerationList () ;
  }else{
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    return p->mProperty_mEBViewBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xibDocumentFileGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xibDocumentFileGeneration::cPtr_xibDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                                                const GALGAS_string & in_mRootEntityName,
                                                                const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mDocumentName (in_mDocumentName),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mDocumentPropertyGenearionList (in_mDocumentPropertyGenearionList),
mProperty_mOutletMap (in_mOutletMap),
mProperty_mTargetActionList (in_mTargetActionList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_multipleBindingGenerationList (in_multipleBindingGenerationList),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewBindingGenerationList (in_mEBViewBindingGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xibDocumentFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xibDocumentFileGeneration ;
}

void cPtr_xibDocumentFileGeneration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@xibDocumentFileGeneration:" ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDocumentPropertyGenearionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xibDocumentFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xibDocumentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mDocumentPropertyGenearionList, mProperty_mOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xibDocumentFileGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xibDocumentFileGeneration ("xibDocumentFileGeneration",
                                                  & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xibDocumentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xibDocumentFileGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xibDocumentFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xibDocumentFileGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration GALGAS_xibDocumentFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xibDocumentFileGeneration result ;
  const GALGAS_xibDocumentFileGeneration * p = (const GALGAS_xibDocumentFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xibDocumentFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xibDocumentFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_xibDocumentFileGeneration_2D_weak::objectCompare (const GALGAS_xibDocumentFileGeneration_2D_weak & inOperand) const {
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

GALGAS_xibDocumentFileGeneration_2D_weak::GALGAS_xibDocumentFileGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration_2D_weak & GALGAS_xibDocumentFileGeneration_2D_weak::operator = (const GALGAS_xibDocumentFileGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration_2D_weak::GALGAS_xibDocumentFileGeneration_2D_weak (const GALGAS_xibDocumentFileGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration_2D_weak GALGAS_xibDocumentFileGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_xibDocumentFileGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration GALGAS_xibDocumentFileGeneration_2D_weak::bang_xibDocumentFileGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_xibDocumentFileGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xibDocumentFileGeneration) ;
      result = GALGAS_xibDocumentFileGeneration ((cPtr_xibDocumentFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@xibDocumentFileGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xibDocumentFileGeneration_2D_weak ("xibDocumentFileGeneration-weak",
                                                          & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xibDocumentFileGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xibDocumentFileGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xibDocumentFileGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xibDocumentFileGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration_2D_weak GALGAS_xibDocumentFileGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xibDocumentFileGeneration_2D_weak result ;
  const GALGAS_xibDocumentFileGeneration_2D_weak * p = (const GALGAS_xibDocumentFileGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xibDocumentFileGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xibDocumentFileGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutDocumentDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutDocumentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMainViewName.objectCompare (p->mProperty_mMainViewName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletDeclarationList.objectCompare (p->mProperty_mOutletDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerBindingListAST.objectCompare (p->mProperty_mArrayControllerBindingListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mViewDeclarationList.objectCompare (p->mProperty_mViewDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutToolbarItemList.objectCompare (p->mProperty_mAutoLayoutToolbarItemList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCustomSuperClassName.objectCompare (p->mProperty_mCustomSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletLinkerList.objectCompare (p->mProperty_mOutletLinkerList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutDocumentDeclarationAST::objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST & inOperand) const {
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

GALGAS_autoLayoutDocumentDeclarationAST::GALGAS_autoLayoutDocumentDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutDocumentDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                   GALGAS_arrayControllerBindingListAST::constructor_emptyList (HERE),
                                                                   GALGAS_astViewDeclarationList::constructor_emptyList (HERE),
                                                                   GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_astAutoLayoutOutletLinkerList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST::GALGAS_autoLayoutDocumentDeclarationAST (const cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                  const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                                  const GALGAS_lstring & inAttribute_mMainViewName,
                                                                                                  const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                                                  const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                                                  const GALGAS_arrayControllerBindingListAST & inAttribute_mArrayControllerBindingListAST,
                                                                                                  const GALGAS_astViewDeclarationList & inAttribute_mViewDeclarationList,
                                                                                                  const GALGAS_astAutoLayoutToolbarItemList & inAttribute_mAutoLayoutToolbarItemList,
                                                                                                  const GALGAS_string & inAttribute_mCustomSuperClassName,
                                                                                                  const GALGAS_astAutoLayoutOutletLinkerList & inAttribute_mOutletLinkerList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mMainViewName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mArrayControllerBindingListAST.isValid () && inAttribute_mViewDeclarationList.isValid () && inAttribute_mAutoLayoutToolbarItemList.isValid () && inAttribute_mCustomSuperClassName.isValid () && inAttribute_mOutletLinkerList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mMainViewName, inAttribute_mOutletDeclarationList, inAttribute_mActionDeclarationList, inAttribute_mArrayControllerBindingListAST, inAttribute_mViewDeclarationList, inAttribute_mAutoLayoutToolbarItemList, inAttribute_mCustomSuperClassName, inAttribute_mOutletLinkerList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMMainViewName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mMainViewName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mOutletDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMActionDeclarationList (GALGAS_lstringlist inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mActionDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mArrayControllerBindingListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMViewDeclarationList (GALGAS_astViewDeclarationList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mViewDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMAutoLayoutToolbarItemList (GALGAS_astAutoLayoutToolbarItemList inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mAutoLayoutToolbarItemList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMCustomSuperClassName (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mCustomSuperClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMOutletLinkerList (GALGAS_astAutoLayoutOutletLinkerList inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mOutletLinkerList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mRootEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mMainViewName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mMainViewName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mOutletDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_outletDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mArrayControllerBindingListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_arrayControllerBindingListAST () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mArrayControllerBindingListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mViewDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astViewDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mAutoLayoutToolbarItemList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astAutoLayoutToolbarItemList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mAutoLayoutToolbarItemList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mCustomSuperClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mOutletLinkerList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astAutoLayoutOutletLinkerList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletLinkerList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentDeclarationAST::cPtr_autoLayoutDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                              const GALGAS_lstring & in_mRootEntityName,
                                                                              const GALGAS_lstring & in_mMainViewName,
                                                                              const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                                              const GALGAS_lstringlist & in_mActionDeclarationList,
                                                                              const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                                              const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                                              const GALGAS_astAutoLayoutToolbarItemList & in_mAutoLayoutToolbarItemList,
                                                                              const GALGAS_string & in_mCustomSuperClassName,
                                                                              const GALGAS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mMainViewName (in_mMainViewName),
mProperty_mOutletDeclarationList (in_mOutletDeclarationList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mArrayControllerBindingListAST (in_mArrayControllerBindingListAST),
mProperty_mViewDeclarationList (in_mViewDeclarationList),
mProperty_mAutoLayoutToolbarItemList (in_mAutoLayoutToolbarItemList),
mProperty_mCustomSuperClassName (in_mCustomSuperClassName),
mProperty_mOutletLinkerList (in_mOutletLinkerList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

void cPtr_autoLayoutDocumentDeclarationAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@autoLayoutDocumentDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerBindingListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAutoLayoutToolbarItemList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCustomSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletLinkerList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDocumentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList, mProperty_mArrayControllerBindingListAST, mProperty_mViewDeclarationList, mProperty_mAutoLayoutToolbarItemList, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutDocumentDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ("autoLayoutDocumentDeclarationAST",
                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  const GALGAS_autoLayoutDocumentDeclarationAST * p = (const GALGAS_autoLayoutDocumentDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutDocumentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutDocumentDeclarationAST_2D_weak::objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_autoLayoutDocumentDeclarationAST_2D_weak::GALGAS_autoLayoutDocumentDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST_2D_weak & GALGAS_autoLayoutDocumentDeclarationAST_2D_weak::operator = (const GALGAS_autoLayoutDocumentDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST_2D_weak::GALGAS_autoLayoutDocumentDeclarationAST_2D_weak (const GALGAS_autoLayoutDocumentDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST_2D_weak GALGAS_autoLayoutDocumentDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST_2D_weak::bang_autoLayoutDocumentDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDocumentDeclarationAST) ;
      result = GALGAS_autoLayoutDocumentDeclarationAST ((cPtr_autoLayoutDocumentDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutDocumentDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2D_weak ("autoLayoutDocumentDeclarationAST-weak",
                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST_2D_weak GALGAS_autoLayoutDocumentDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST_2D_weak result ;
  const GALGAS_autoLayoutDocumentDeclarationAST_2D_weak * p = (const GALGAS_autoLayoutDocumentDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutDocumentDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutDocumentFileGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutDocumentFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mDocumentName.objectCompare (p->mProperty_mDocumentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMainViewName.objectCompare (p->mProperty_mMainViewName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDocumentPropertyGenearionList.objectCompare (p->mProperty_mDocumentPropertyGenearionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletMap.objectCompare (p->mProperty_mOutletMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutOutletMap.objectCompare (p->mProperty_mAutoLayoutOutletMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetActionList.objectCompare (p->mProperty_mTargetActionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_multipleBindingGenerationList.objectCompare (p->mProperty_multipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (p->mProperty_mEBViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mViewDeclarationList.objectCompare (p->mProperty_mViewDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutToolbarItemGenerationList.objectCompare (p->mProperty_mAutoLayoutToolbarItemGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplicitViewFunctionGenerationList.objectCompare (p->mProperty_mImplicitViewFunctionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConfiguratorMap.objectCompare (p->mProperty_mConfiguratorMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCustomSuperClassName.objectCompare (p->mProperty_mCustomSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletLinkerGenerationList.objectCompare (p->mProperty_mOutletLinkerGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutDocumentFileGeneration::objectCompare (const GALGAS_autoLayoutDocumentFileGeneration & inOperand) const {
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

GALGAS_autoLayoutDocumentFileGeneration::GALGAS_autoLayoutDocumentFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutDocumentFileGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                                   GALGAS_autoLayoutOutletMap::constructor_emptyMap (HERE),
                                                                   GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                                   GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_viewGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_autoLayoutToolbarItemGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_autoLayoutConfiguratorMap::constructor_emptyMap (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_autoLayoutOutletLinkerGenerationList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration::GALGAS_autoLayoutDocumentFileGeneration (const cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentFileGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::constructor_new (const GALGAS_string & inAttribute_mDocumentName,
                                                                                                  const GALGAS_string & inAttribute_mRootEntityName,
                                                                                                  const GALGAS_string & inAttribute_mMainViewName,
                                                                                                  const GALGAS_propertyGenerationList & inAttribute_mDocumentPropertyGenearionList,
                                                                                                  const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                                                  const GALGAS_autoLayoutOutletMap & inAttribute_mAutoLayoutOutletMap,
                                                                                                  const GALGAS_actionBindingListForGeneration & inAttribute_mTargetActionList,
                                                                                                  const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                                  const GALGAS_multipleBindingGenerationList & inAttribute_multipleBindingGenerationList,
                                                                                                  const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                                                  const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList,
                                                                                                  const GALGAS_viewGenerationList & inAttribute_mViewDeclarationList,
                                                                                                  const GALGAS_autoLayoutToolbarItemGenerationList & inAttribute_mAutoLayoutToolbarItemGenerationList,
                                                                                                  const GALGAS_implicitViewFunctionGenerationList & inAttribute_mImplicitViewFunctionGenerationList,
                                                                                                  const GALGAS_autoLayoutConfiguratorMap & inAttribute_mConfiguratorMap,
                                                                                                  const GALGAS_string & inAttribute_mCustomSuperClassName,
                                                                                                  const GALGAS_autoLayoutOutletLinkerGenerationList & inAttribute_mOutletLinkerGenerationList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  if (inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mMainViewName.isValid () && inAttribute_mDocumentPropertyGenearionList.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mAutoLayoutOutletMap.isValid () && inAttribute_mTargetActionList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_multipleBindingGenerationList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid () && inAttribute_mViewDeclarationList.isValid () && inAttribute_mAutoLayoutToolbarItemGenerationList.isValid () && inAttribute_mImplicitViewFunctionGenerationList.isValid () && inAttribute_mConfiguratorMap.isValid () && inAttribute_mCustomSuperClassName.isValid () && inAttribute_mOutletLinkerGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentFileGeneration (inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mMainViewName, inAttribute_mDocumentPropertyGenearionList, inAttribute_mOutletMap, inAttribute_mAutoLayoutOutletMap, inAttribute_mTargetActionList, inAttribute_mRegularBindingsGenerationList, inAttribute_multipleBindingGenerationList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList, inAttribute_mViewDeclarationList, inAttribute_mAutoLayoutToolbarItemGenerationList, inAttribute_mImplicitViewFunctionGenerationList, inAttribute_mConfiguratorMap, inAttribute_mCustomSuperClassName, inAttribute_mOutletLinkerGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMDocumentName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mDocumentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMRootEntityName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMMainViewName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mMainViewName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMDocumentPropertyGenearionList (GALGAS_propertyGenerationList inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mDocumentPropertyGenearionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMOutletMap (GALGAS_decoratedOutletMap inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mOutletMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMAutoLayoutOutletMap (GALGAS_autoLayoutOutletMap inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mAutoLayoutOutletMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mTargetActionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mRegularBindingsGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_multipleBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mTableViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mEBViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMViewDeclarationList (GALGAS_viewGenerationList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mViewDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMAutoLayoutToolbarItemGenerationList (GALGAS_autoLayoutToolbarItemGenerationList inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mAutoLayoutToolbarItemGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMImplicitViewFunctionGenerationList (GALGAS_implicitViewFunctionGenerationList inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mImplicitViewFunctionGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMConfiguratorMap (GALGAS_autoLayoutConfiguratorMap inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mConfiguratorMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMCustomSuperClassName (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mCustomSuperClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMOutletLinkerGenerationList (GALGAS_autoLayoutOutletLinkerGenerationList inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mOutletLinkerGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mDocumentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mRootEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRootEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mMainViewName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mMainViewName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mDocumentPropertyGenearionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentPropertyGenearionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mOutletMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mAutoLayoutOutletMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mAutoLayoutOutletMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_autoLayoutDocumentFileGeneration::readProperty_mTargetActionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actionBindingListForGeneration () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTargetActionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_regularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_multipleBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_multipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_multipleBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mTableViewBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_tableViewBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTableViewBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mEBViewBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ebViewGraphicControllerBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mEBViewBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mViewDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_viewGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mAutoLayoutToolbarItemGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutToolbarItemGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mAutoLayoutToolbarItemGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mImplicitViewFunctionGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_implicitViewFunctionGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mImplicitViewFunctionGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mConfiguratorMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutConfiguratorMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mConfiguratorMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mCustomSuperClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mOutletLinkerGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutOutletLinkerGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletLinkerGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentFileGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentFileGeneration::cPtr_autoLayoutDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                                                              const GALGAS_string & in_mRootEntityName,
                                                                              const GALGAS_string & in_mMainViewName,
                                                                              const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                              const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                              const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                              const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                              const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                              const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                              const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                              const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                              const GALGAS_viewGenerationList & in_mViewDeclarationList,
                                                                              const GALGAS_autoLayoutToolbarItemGenerationList & in_mAutoLayoutToolbarItemGenerationList,
                                                                              const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                              const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                              const GALGAS_string & in_mCustomSuperClassName,
                                                                              const GALGAS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mDocumentName (in_mDocumentName),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mMainViewName (in_mMainViewName),
mProperty_mDocumentPropertyGenearionList (in_mDocumentPropertyGenearionList),
mProperty_mOutletMap (in_mOutletMap),
mProperty_mAutoLayoutOutletMap (in_mAutoLayoutOutletMap),
mProperty_mTargetActionList (in_mTargetActionList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_multipleBindingGenerationList (in_multipleBindingGenerationList),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewBindingGenerationList (in_mEBViewBindingGenerationList),
mProperty_mViewDeclarationList (in_mViewDeclarationList),
mProperty_mAutoLayoutToolbarItemGenerationList (in_mAutoLayoutToolbarItemGenerationList),
mProperty_mImplicitViewFunctionGenerationList (in_mImplicitViewFunctionGenerationList),
mProperty_mConfiguratorMap (in_mConfiguratorMap),
mProperty_mCustomSuperClassName (in_mCustomSuperClassName),
mProperty_mOutletLinkerGenerationList (in_mOutletLinkerGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

void cPtr_autoLayoutDocumentFileGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@autoLayoutDocumentFileGeneration:" ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDocumentPropertyGenearionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAutoLayoutOutletMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAutoLayoutToolbarItemGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplicitViewFunctionGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConfiguratorMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCustomSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletLinkerGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDocumentFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mDocumentPropertyGenearionList, mProperty_mOutletMap, mProperty_mAutoLayoutOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mViewDeclarationList, mProperty_mAutoLayoutToolbarItemGenerationList, mProperty_mImplicitViewFunctionGenerationList, mProperty_mConfiguratorMap, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerGenerationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutDocumentFileGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ("autoLayoutDocumentFileGeneration",
                                                         & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentFileGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  const GALGAS_autoLayoutDocumentFileGeneration * p = (const GALGAS_autoLayoutDocumentFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutDocumentFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutDocumentFileGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutDocumentFileGeneration_2D_weak & inOperand) const {
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

GALGAS_autoLayoutDocumentFileGeneration_2D_weak::GALGAS_autoLayoutDocumentFileGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration_2D_weak & GALGAS_autoLayoutDocumentFileGeneration_2D_weak::operator = (const GALGAS_autoLayoutDocumentFileGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration_2D_weak::GALGAS_autoLayoutDocumentFileGeneration_2D_weak (const GALGAS_autoLayoutDocumentFileGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration_2D_weak GALGAS_autoLayoutDocumentFileGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration_2D_weak::bang_autoLayoutDocumentFileGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDocumentFileGeneration) ;
      result = GALGAS_autoLayoutDocumentFileGeneration ((cPtr_autoLayoutDocumentFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutDocumentFileGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2D_weak ("autoLayoutDocumentFileGeneration-weak",
                                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentFileGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentFileGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentFileGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration_2D_weak GALGAS_autoLayoutDocumentFileGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration_2D_weak result ;
  const GALGAS_autoLayoutDocumentFileGeneration_2D_weak * p = (const GALGAS_autoLayoutDocumentFileGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutDocumentFileGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentFileGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @prefsDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_prefsDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefsDeclarationAST * p = (const cPtr_prefsDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDeclaration.objectCompare (p->mProperty_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_prefsDeclarationAST::objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const {
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

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_prefsDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_prefDeclaration::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_prefDeclaration & inAttribute_mDeclaration
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDeclaration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefsDeclarationAST (inAttribute_mClassName, inAttribute_mDeclaration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefsDeclarationAST::setter_setMDeclaration (GALGAS_prefDeclaration inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    p->mProperty_mDeclaration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefsDeclarationAST::readProperty_mDeclaration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_prefDeclaration () ;
  }else{
    cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    return p->mProperty_mDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @prefsDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_prefDeclaration & in_mDeclaration
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDeclaration (in_mDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefsDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

void cPtr_prefsDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@prefsDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefsDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefsDeclarationAST (mProperty_mClassName, mProperty_mDeclaration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@prefsDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsDeclarationAST ("prefsDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  const GALGAS_prefsDeclarationAST * p = (const GALGAS_prefsDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefsDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_prefsDeclarationAST_2D_weak::objectCompare (const GALGAS_prefsDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_prefsDeclarationAST_2D_weak::GALGAS_prefsDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST_2D_weak & GALGAS_prefsDeclarationAST_2D_weak::operator = (const GALGAS_prefsDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST_2D_weak::GALGAS_prefsDeclarationAST_2D_weak (const GALGAS_prefsDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST_2D_weak GALGAS_prefsDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST_2D_weak::bang_prefsDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_prefsDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefsDeclarationAST) ;
      result = GALGAS_prefsDeclarationAST ((cPtr_prefsDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@prefsDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsDeclarationAST_2D_weak ("prefsDeclarationAST-weak",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST_2D_weak GALGAS_prefsDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST_2D_weak result ;
  const GALGAS_prefsDeclarationAST_2D_weak * p = (const GALGAS_prefsDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefsDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutViewClassDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutViewClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasRunAction.objectCompare (p->mProperty_mHasRunAction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasEnabled.objectCompare (p->mProperty_mHasEnabled) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (p->mProperty_mHandlesTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesGraphicControllerBinding.objectCompare (p->mProperty_mHandlesGraphicControllerBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasHidden.objectCompare (p->mProperty_mHasHidden) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutViewFunctionMap.objectCompare (p->mProperty_mAutoLayoutViewFunctionMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutViewClassDeclarationAST::objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST & inOperand) const {
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

GALGAS_autoLayoutViewClassDeclarationAST::GALGAS_autoLayoutViewClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutViewClassDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_autoLayoutClassParameterList::constructor_emptyList (HERE),
                                                                    GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST::GALGAS_autoLayoutViewClassDeclarationAST (const cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutViewClassDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                    const GALGAS_bool & inAttribute_mUserDefined,
                                                                                                    const GALGAS_lstring & inAttribute_mSuperClassName,
                                                                                                    const GALGAS_bool & inAttribute_mHasRunAction,
                                                                                                    const GALGAS_bool & inAttribute_mHasEnabled,
                                                                                                    const GALGAS_bool & inAttribute_mHandlesTableValueBinding,
                                                                                                    const GALGAS_bool & inAttribute_mHandlesGraphicControllerBinding,
                                                                                                    const GALGAS_bool & inAttribute_mHasHidden,
                                                                                                    const GALGAS_autoLayoutClassParameterList & inAttribute_mParameterList,
                                                                                                    const GALGAS_astAutoLayoutViewFunctionMap & inAttribute_mAutoLayoutViewFunctionMap
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mUserDefined.isValid () && inAttribute_mSuperClassName.isValid () && inAttribute_mHasRunAction.isValid () && inAttribute_mHasEnabled.isValid () && inAttribute_mHandlesTableValueBinding.isValid () && inAttribute_mHandlesGraphicControllerBinding.isValid () && inAttribute_mHasHidden.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mAutoLayoutViewFunctionMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutViewClassDeclarationAST (inAttribute_mClassName, inAttribute_mUserDefined, inAttribute_mSuperClassName, inAttribute_mHasRunAction, inAttribute_mHasEnabled, inAttribute_mHandlesTableValueBinding, inAttribute_mHandlesGraphicControllerBinding, inAttribute_mHasHidden, inAttribute_mParameterList, inAttribute_mAutoLayoutViewFunctionMap COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMUserDefined (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHasRunAction (GALGAS_bool inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHasEnabled (GALGAS_bool inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHandlesTableValueBinding (GALGAS_bool inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHasHidden (GALGAS_bool inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMParameterList (GALGAS_autoLayoutClassParameterList inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMAutoLayoutViewFunctionMap (GALGAS_astAutoLayoutViewFunctionMap inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mUserDefined (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mUserDefined ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mSuperClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHasRunAction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasRunAction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHasEnabled (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasEnabled ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesTableValueBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesTableValueBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesGraphicControllerBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesGraphicControllerBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHasHidden (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasHidden ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutClassParameterList () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mAutoLayoutViewFunctionMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionMap () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mAutoLayoutViewFunctionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutViewClassDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutViewClassDeclarationAST::cPtr_autoLayoutViewClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_bool & in_mUserDefined,
                                                                                const GALGAS_lstring & in_mSuperClassName,
                                                                                const GALGAS_bool & in_mHasRunAction,
                                                                                const GALGAS_bool & in_mHasEnabled,
                                                                                const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                                const GALGAS_bool & in_mHasHidden,
                                                                                const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                                                const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mUserDefined (in_mUserDefined),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mHasRunAction (in_mHasRunAction),
mProperty_mHasEnabled (in_mHasEnabled),
mProperty_mHandlesTableValueBinding (in_mHandlesTableValueBinding),
mProperty_mHandlesGraphicControllerBinding (in_mHandlesGraphicControllerBinding),
mProperty_mHasHidden (in_mHasHidden),
mProperty_mParameterList (in_mParameterList),
mProperty_mAutoLayoutViewFunctionMap (in_mAutoLayoutViewFunctionMap) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutViewClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

void cPtr_autoLayoutViewClassDeclarationAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@autoLayoutViewClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasRunAction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasEnabled.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasHidden.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutViewClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutViewClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden, mProperty_mParameterList, mProperty_mAutoLayoutViewFunctionMap COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewClassDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ("autoLayoutViewClassDeclarationAST",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewClassDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST result ;
  const GALGAS_autoLayoutViewClassDeclarationAST * p = (const GALGAS_autoLayoutViewClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::GALGAS_autoLayoutViewClassDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST_2D_weak & GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::operator = (const GALGAS_autoLayoutViewClassDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::GALGAS_autoLayoutViewClassDeclarationAST_2D_weak (const GALGAS_autoLayoutViewClassDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST_2D_weak GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::bang_autoLayoutViewClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewClassDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutViewClassDeclarationAST) ;
      result = GALGAS_autoLayoutViewClassDeclarationAST ((cPtr_autoLayoutViewClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewClassDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2D_weak ("autoLayoutViewClassDeclarationAST-weak",
                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewClassDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST_2D_weak GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST_2D_weak result ;
  const GALGAS_autoLayoutViewClassDeclarationAST_2D_weak * p = (const GALGAS_autoLayoutViewClassDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewClassDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @astHorizontalStackViewDeclaration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astHorizontalStackViewDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astHorizontalStackViewDeclaration * p = (const cPtr_astHorizontalStackViewDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astHorizontalStackViewDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astHorizontalStackViewDeclaration::objectCompare (const GALGAS_astHorizontalStackViewDeclaration & inOperand) const {
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

GALGAS_astHorizontalStackViewDeclaration::GALGAS_astHorizontalStackViewDeclaration (void) :
GALGAS_astAbstractViewDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration GALGAS_astHorizontalStackViewDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_astHorizontalStackViewDeclaration::constructor_new (GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration::GALGAS_astHorizontalStackViewDeclaration (const cPtr_astHorizontalStackViewDeclaration * inSourcePtr) :
GALGAS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astHorizontalStackViewDeclaration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration GALGAS_astHorizontalStackViewDeclaration::constructor_new (const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astHorizontalStackViewDeclaration result ;
  if (inAttribute_mFunctionCallList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astHorizontalStackViewDeclaration (inAttribute_mFunctionCallList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astHorizontalStackViewDeclaration::setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astHorizontalStackViewDeclaration * p = (cPtr_astHorizontalStackViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHorizontalStackViewDeclaration) ;
    p->mProperty_mFunctionCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astHorizontalStackViewDeclaration::readProperty_mFunctionCallList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astHorizontalStackViewDeclaration * p = (cPtr_astHorizontalStackViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHorizontalStackViewDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astHorizontalStackViewDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astHorizontalStackViewDeclaration::cPtr_astHorizontalStackViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (THERE),
mProperty_mFunctionCallList (in_mFunctionCallList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astHorizontalStackViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration ;
}

void cPtr_astHorizontalStackViewDeclaration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@astHorizontalStackViewDeclaration:" ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astHorizontalStackViewDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astHorizontalStackViewDeclaration (mProperty_mFunctionCallList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astHorizontalStackViewDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration ("astHorizontalStackViewDeclaration",
                                                          & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astHorizontalStackViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astHorizontalStackViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astHorizontalStackViewDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration GALGAS_astHorizontalStackViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astHorizontalStackViewDeclaration result ;
  const GALGAS_astHorizontalStackViewDeclaration * p = (const GALGAS_astHorizontalStackViewDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astHorizontalStackViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astHorizontalStackViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astHorizontalStackViewDeclaration_2D_weak::objectCompare (const GALGAS_astHorizontalStackViewDeclaration_2D_weak & inOperand) const {
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

GALGAS_astHorizontalStackViewDeclaration_2D_weak::GALGAS_astHorizontalStackViewDeclaration_2D_weak (void) :
GALGAS_astAbstractViewDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration_2D_weak & GALGAS_astHorizontalStackViewDeclaration_2D_weak::operator = (const GALGAS_astHorizontalStackViewDeclaration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration_2D_weak::GALGAS_astHorizontalStackViewDeclaration_2D_weak (const GALGAS_astHorizontalStackViewDeclaration & inSource) :
GALGAS_astAbstractViewDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration_2D_weak GALGAS_astHorizontalStackViewDeclaration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_astHorizontalStackViewDeclaration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration GALGAS_astHorizontalStackViewDeclaration_2D_weak::bang_astHorizontalStackViewDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astHorizontalStackViewDeclaration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astHorizontalStackViewDeclaration) ;
      result = GALGAS_astHorizontalStackViewDeclaration ((cPtr_astHorizontalStackViewDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@astHorizontalStackViewDeclaration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration_2D_weak ("astHorizontalStackViewDeclaration-weak",
                                                                  & kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astHorizontalStackViewDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astHorizontalStackViewDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astHorizontalStackViewDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration_2D_weak GALGAS_astHorizontalStackViewDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astHorizontalStackViewDeclaration_2D_weak result ;
  const GALGAS_astHorizontalStackViewDeclaration_2D_weak * p = (const GALGAS_astHorizontalStackViewDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astHorizontalStackViewDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astHorizontalStackViewDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @astComputedHorizontalViewDeclaration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astComputedHorizontalViewDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astComputedHorizontalViewDeclaration * p = (const cPtr_astComputedHorizontalViewDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astComputedHorizontalViewDeclaration::objectCompare (const GALGAS_astComputedHorizontalViewDeclaration & inOperand) const {
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

GALGAS_astComputedHorizontalViewDeclaration::GALGAS_astComputedHorizontalViewDeclaration (void) :
GALGAS_astAbstractViewDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_astComputedHorizontalViewDeclaration::constructor_new (GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (HERE),
                                                                       GALGAS_astViewInstructionList::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration::GALGAS_astComputedHorizontalViewDeclaration (const cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) :
GALGAS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedHorizontalViewDeclaration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::constructor_new (const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList,
                                                                                                          const GALGAS_astViewInstructionList & inAttribute_mInstructionList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration result ;
  if (inAttribute_mFunctionCallList.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astComputedHorizontalViewDeclaration (inAttribute_mFunctionCallList, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedHorizontalViewDeclaration::setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    p->mProperty_mFunctionCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedHorizontalViewDeclaration::setter_setMInstructionList (GALGAS_astViewInstructionList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astComputedHorizontalViewDeclaration::readProperty_mFunctionCallList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astComputedHorizontalViewDeclaration::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astViewInstructionList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astComputedHorizontalViewDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astComputedHorizontalViewDeclaration::cPtr_astComputedHorizontalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                      const GALGAS_astViewInstructionList & in_mInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (THERE),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedHorizontalViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

void cPtr_astComputedHorizontalViewDeclaration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@astComputedHorizontalViewDeclaration:" ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedHorizontalViewDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astComputedHorizontalViewDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astComputedHorizontalViewDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ("astComputedHorizontalViewDeclaration",
                                                             & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedHorizontalViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedHorizontalViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedHorizontalViewDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration result ;
  const GALGAS_astComputedHorizontalViewDeclaration * p = (const GALGAS_astComputedHorizontalViewDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astComputedHorizontalViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedHorizontalViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astComputedHorizontalViewDeclaration_2D_weak::objectCompare (const GALGAS_astComputedHorizontalViewDeclaration_2D_weak & inOperand) const {
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

GALGAS_astComputedHorizontalViewDeclaration_2D_weak::GALGAS_astComputedHorizontalViewDeclaration_2D_weak (void) :
GALGAS_astAbstractViewDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration_2D_weak & GALGAS_astComputedHorizontalViewDeclaration_2D_weak::operator = (const GALGAS_astComputedHorizontalViewDeclaration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration_2D_weak::GALGAS_astComputedHorizontalViewDeclaration_2D_weak (const GALGAS_astComputedHorizontalViewDeclaration & inSource) :
GALGAS_astAbstractViewDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration_2D_weak GALGAS_astComputedHorizontalViewDeclaration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration_2D_weak::bang_astComputedHorizontalViewDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astComputedHorizontalViewDeclaration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astComputedHorizontalViewDeclaration) ;
      result = GALGAS_astComputedHorizontalViewDeclaration ((cPtr_astComputedHorizontalViewDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@astComputedHorizontalViewDeclaration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2D_weak ("astComputedHorizontalViewDeclaration-weak",
                                                                     & kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedHorizontalViewDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedHorizontalViewDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedHorizontalViewDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration_2D_weak GALGAS_astComputedHorizontalViewDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration_2D_weak result ;
  const GALGAS_astComputedHorizontalViewDeclaration_2D_weak * p = (const GALGAS_astComputedHorizontalViewDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astComputedHorizontalViewDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedHorizontalViewDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @astStackViewReferenceInstructionDeclaration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astStackViewReferenceInstructionDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astStackViewReferenceInstructionDeclaration * p = (const cPtr_astStackViewReferenceInstructionDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astStackViewReferenceInstructionDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mStackViewName.objectCompare (p->mProperty_mStackViewName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astStackViewReferenceInstructionDeclaration::objectCompare (const GALGAS_astStackViewReferenceInstructionDeclaration & inOperand) const {
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

GALGAS_astStackViewReferenceInstructionDeclaration::GALGAS_astStackViewReferenceInstructionDeclaration (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astStackViewReferenceInstructionDeclaration GALGAS_astStackViewReferenceInstructionDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_astStackViewReferenceInstructionDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astStackViewReferenceInstructionDeclaration::GALGAS_astStackViewReferenceInstructionDeclaration (const cPtr_astStackViewReferenceInstructionDeclaration * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astStackViewReferenceInstructionDeclaration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_astStackViewReferenceInstructionDeclaration GALGAS_astStackViewReferenceInstructionDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mStackViewName
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astStackViewReferenceInstructionDeclaration result ;
  if (inAttribute_mStackViewName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astStackViewReferenceInstructionDeclaration (inAttribute_mStackViewName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astStackViewReferenceInstructionDeclaration::setter_setMStackViewName (GALGAS_lstring inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astStackViewReferenceInstructionDeclaration * p = (cPtr_astStackViewReferenceInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astStackViewReferenceInstructionDeclaration) ;
    p->mProperty_mStackViewName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astStackViewReferenceInstructionDeclaration::readProperty_mStackViewName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astStackViewReferenceInstructionDeclaration * p = (cPtr_astStackViewReferenceInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astStackViewReferenceInstructionDeclaration) ;
    return p->mProperty_mStackViewName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astStackViewReferenceInstructionDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astStackViewReferenceInstructionDeclaration::cPtr_astStackViewReferenceInstructionDeclaration (const GALGAS_lstring & in_mStackViewName
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mStackViewName (in_mStackViewName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astStackViewReferenceInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astStackViewReferenceInstructionDeclaration ;
}

void cPtr_astStackViewReferenceInstructionDeclaration::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@astStackViewReferenceInstructionDeclaration:" ;
  mProperty_mStackViewName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astStackViewReferenceInstructionDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astStackViewReferenceInstructionDeclaration (mProperty_mStackViewName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astStackViewReferenceInstructionDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astStackViewReferenceInstructionDeclaration ("astStackViewReferenceInstructionDeclaration",
                                                                    & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astStackViewReferenceInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astStackViewReferenceInstructionDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astStackViewReferenceInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astStackViewReferenceInstructionDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astStackViewReferenceInstructionDeclaration GALGAS_astStackViewReferenceInstructionDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astStackViewReferenceInstructionDeclaration result ;
  const GALGAS_astStackViewReferenceInstructionDeclaration * p = (const GALGAS_astStackViewReferenceInstructionDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astStackViewReferenceInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astStackViewReferenceInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak::objectCompare (const GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak & inOperand) const {
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

GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak::GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak & GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak::operator = (const GALGAS_astStackViewReferenceInstructionDeclaration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak::GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak (const GALGAS_astStackViewReferenceInstructionDeclaration & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astStackViewReferenceInstructionDeclaration GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak::bang_astStackViewReferenceInstructionDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astStackViewReferenceInstructionDeclaration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astStackViewReferenceInstructionDeclaration) ;
      result = GALGAS_astStackViewReferenceInstructionDeclaration ((cPtr_astStackViewReferenceInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@astStackViewReferenceInstructionDeclaration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak ("astStackViewReferenceInstructionDeclaration-weak",
                                                                            & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak result ;
  const GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak * p = (const GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astStackViewReferenceInstructionDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @astLocalViewInstruction reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astLocalViewInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astLocalViewInstruction * p = (const cPtr_astLocalViewInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocalView.objectCompare (p->mProperty_mLocalView) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astLocalViewInstruction::objectCompare (const GALGAS_astLocalViewInstruction & inOperand) const {
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

GALGAS_astLocalViewInstruction::GALGAS_astLocalViewInstruction (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_astLocalViewInstruction::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction::GALGAS_astLocalViewInstruction (const cPtr_astLocalViewInstruction * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astLocalViewInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::constructor_new (const GALGAS_lstring & inAttribute_mLocalView
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction result ;
  if (inAttribute_mLocalView.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astLocalViewInstruction (inAttribute_mLocalView COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astLocalViewInstruction::setter_setMLocalView (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astLocalViewInstruction * p = (cPtr_astLocalViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
    p->mProperty_mLocalView = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astLocalViewInstruction::readProperty_mLocalView (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astLocalViewInstruction * p = (cPtr_astLocalViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
    return p->mProperty_mLocalView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astLocalViewInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astLocalViewInstruction::cPtr_astLocalViewInstruction (const GALGAS_lstring & in_mLocalView
                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mLocalView (in_mLocalView) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astLocalViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

void cPtr_astLocalViewInstruction::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@astLocalViewInstruction:" ;
  mProperty_mLocalView.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astLocalViewInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astLocalViewInstruction (mProperty_mLocalView COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astLocalViewInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astLocalViewInstruction ("astLocalViewInstruction",
                                                & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astLocalViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astLocalViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astLocalViewInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction result ;
  const GALGAS_astLocalViewInstruction * p = (const GALGAS_astLocalViewInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astLocalViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astLocalViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astLocalViewInstruction_2D_weak::objectCompare (const GALGAS_astLocalViewInstruction_2D_weak & inOperand) const {
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

GALGAS_astLocalViewInstruction_2D_weak::GALGAS_astLocalViewInstruction_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction_2D_weak & GALGAS_astLocalViewInstruction_2D_weak::operator = (const GALGAS_astLocalViewInstruction & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction_2D_weak::GALGAS_astLocalViewInstruction_2D_weak (const GALGAS_astLocalViewInstruction & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction_2D_weak GALGAS_astLocalViewInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction_2D_weak::bang_astLocalViewInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astLocalViewInstruction result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astLocalViewInstruction) ;
      result = GALGAS_astLocalViewInstruction ((cPtr_astLocalViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@astLocalViewInstruction-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astLocalViewInstruction_2D_weak ("astLocalViewInstruction-weak",
                                                        & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astLocalViewInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astLocalViewInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astLocalViewInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction_2D_weak GALGAS_astLocalViewInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction_2D_weak result ;
  const GALGAS_astLocalViewInstruction_2D_weak * p = (const GALGAS_astLocalViewInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astLocalViewInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astLocalViewInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @astComputedViewInstruction reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astComputedViewInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutViewClassName.objectCompare (p->mProperty_mAutoLayoutViewClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableValueBinding.objectCompare (p->mProperty_mTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRunActionDescriptor.objectCompare (p->mProperty_mRunActionDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnabledBindingDescriptor.objectCompare (p->mProperty_mEnabledBindingDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHiddenBindingDescriptor.objectCompare (p->mProperty_mHiddenBindingDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGraphicController.objectCompare (p->mProperty_mGraphicController) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingList.objectCompare (p->mProperty_mRegularBindingList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConfiguratorName.objectCompare (p->mProperty_mConfiguratorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletName.objectCompare (p->mProperty_mOutletName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astComputedViewInstruction::objectCompare (const GALGAS_astComputedViewInstruction & inOperand) const {
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

GALGAS_astComputedViewInstruction::GALGAS_astComputedViewInstruction (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction::GALGAS_astComputedViewInstruction (const cPtr_astComputedViewInstruction * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedViewInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction::constructor_new (const GALGAS_lstring & inAttribute_mAutoLayoutViewClassName,
                                                                                      const GALGAS_astAutoLayoutViewInstructionParameterList & inAttribute_mParameterList,
                                                                                      const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList,
                                                                                      const GALGAS_tableValueBinding & inAttribute_mTableValueBinding,
                                                                                      const GALGAS_runActionDescriptor & inAttribute_mRunActionDescriptor,
                                                                                      const GALGAS_multipleBindingDescriptor & inAttribute_mEnabledBindingDescriptor,
                                                                                      const GALGAS_multipleBindingDescriptor & inAttribute_mHiddenBindingDescriptor,
                                                                                      const GALGAS_graphicController & inAttribute_mGraphicController,
                                                                                      const GALGAS_regularBindingList & inAttribute_mRegularBindingList,
                                                                                      const GALGAS_lstring & inAttribute_mConfiguratorName,
                                                                                      const GALGAS_lstring & inAttribute_mOutletName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction result ;
  if (inAttribute_mAutoLayoutViewClassName.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mFunctionCallList.isValid () && inAttribute_mTableValueBinding.isValid () && inAttribute_mRunActionDescriptor.isValid () && inAttribute_mEnabledBindingDescriptor.isValid () && inAttribute_mHiddenBindingDescriptor.isValid () && inAttribute_mGraphicController.isValid () && inAttribute_mRegularBindingList.isValid () && inAttribute_mConfiguratorName.isValid () && inAttribute_mOutletName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astComputedViewInstruction (inAttribute_mAutoLayoutViewClassName, inAttribute_mParameterList, inAttribute_mFunctionCallList, inAttribute_mTableValueBinding, inAttribute_mRunActionDescriptor, inAttribute_mEnabledBindingDescriptor, inAttribute_mHiddenBindingDescriptor, inAttribute_mGraphicController, inAttribute_mRegularBindingList, inAttribute_mConfiguratorName, inAttribute_mOutletName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMAutoLayoutViewClassName (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mAutoLayoutViewClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMParameterList (GALGAS_astAutoLayoutViewInstructionParameterList inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mFunctionCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMTableValueBinding (GALGAS_tableValueBinding inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mTableValueBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMRunActionDescriptor (GALGAS_runActionDescriptor inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mRunActionDescriptor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMEnabledBindingDescriptor (GALGAS_multipleBindingDescriptor inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mEnabledBindingDescriptor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMHiddenBindingDescriptor (GALGAS_multipleBindingDescriptor inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mHiddenBindingDescriptor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMGraphicController (GALGAS_graphicController inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mGraphicController = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMRegularBindingList (GALGAS_regularBindingList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mRegularBindingList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMConfiguratorName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mConfiguratorName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMOutletName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mOutletName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astComputedViewInstruction::readProperty_mAutoLayoutViewClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mAutoLayoutViewClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astComputedViewInstruction::readProperty_mParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astAutoLayoutViewInstructionParameterList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astComputedViewInstruction::readProperty_mFunctionCallList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding GALGAS_astComputedViewInstruction::readProperty_mTableValueBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_tableValueBinding () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mTableValueBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor GALGAS_astComputedViewInstruction::readProperty_mRunActionDescriptor (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_runActionDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mRunActionDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_astComputedViewInstruction::readProperty_mEnabledBindingDescriptor (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_multipleBindingDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mEnabledBindingDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_astComputedViewInstruction::readProperty_mHiddenBindingDescriptor (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_multipleBindingDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mHiddenBindingDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_astComputedViewInstruction::readProperty_mGraphicController (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_graphicController () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mGraphicController ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_astComputedViewInstruction::readProperty_mRegularBindingList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_regularBindingList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mRegularBindingList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astComputedViewInstruction::readProperty_mConfiguratorName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astComputedViewInstruction::readProperty_mOutletName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mOutletName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astComputedViewInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astComputedViewInstruction::cPtr_astComputedViewInstruction (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                  const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                  const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                  const GALGAS_tableValueBinding & in_mTableValueBinding,
                                                                  const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                                                  const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                  const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                  const GALGAS_graphicController & in_mGraphicController,
                                                                  const GALGAS_regularBindingList & in_mRegularBindingList,
                                                                  const GALGAS_lstring & in_mConfiguratorName,
                                                                  const GALGAS_lstring & in_mOutletName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mAutoLayoutViewClassName (in_mAutoLayoutViewClassName),
mProperty_mParameterList (in_mParameterList),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mTableValueBinding (in_mTableValueBinding),
mProperty_mRunActionDescriptor (in_mRunActionDescriptor),
mProperty_mEnabledBindingDescriptor (in_mEnabledBindingDescriptor),
mProperty_mHiddenBindingDescriptor (in_mHiddenBindingDescriptor),
mProperty_mGraphicController (in_mGraphicController),
mProperty_mRegularBindingList (in_mRegularBindingList),
mProperty_mConfiguratorName (in_mConfiguratorName),
mProperty_mOutletName (in_mOutletName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

void cPtr_astComputedViewInstruction::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@astComputedViewInstruction:" ;
  mProperty_mAutoLayoutViewClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableValueBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRunActionDescriptor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGraphicController.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedViewInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astComputedViewInstruction (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mTableValueBinding, mProperty_mRunActionDescriptor, mProperty_mEnabledBindingDescriptor, mProperty_mHiddenBindingDescriptor, mProperty_mGraphicController, mProperty_mRegularBindingList, mProperty_mConfiguratorName, mProperty_mOutletName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astComputedViewInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astComputedViewInstruction ("astComputedViewInstruction",
                                                   & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedViewInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction result ;
  const GALGAS_astComputedViewInstruction * p = (const GALGAS_astComputedViewInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astComputedViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astComputedViewInstruction_2D_weak::objectCompare (const GALGAS_astComputedViewInstruction_2D_weak & inOperand) const {
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

GALGAS_astComputedViewInstruction_2D_weak::GALGAS_astComputedViewInstruction_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak & GALGAS_astComputedViewInstruction_2D_weak::operator = (const GALGAS_astComputedViewInstruction & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak::GALGAS_astComputedViewInstruction_2D_weak (const GALGAS_astComputedViewInstruction & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak GALGAS_astComputedViewInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction_2D_weak::bang_astComputedViewInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astComputedViewInstruction result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astComputedViewInstruction) ;
      result = GALGAS_astComputedViewInstruction ((cPtr_astComputedViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@astComputedViewInstruction-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astComputedViewInstruction_2D_weak ("astComputedViewInstruction-weak",
                                                           & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedViewInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedViewInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedViewInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak GALGAS_astComputedViewInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction_2D_weak result ;
  const GALGAS_astComputedViewInstruction_2D_weak * p = (const GALGAS_astComputedViewInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astComputedViewInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedViewInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @newHorizontalStackViewGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_newHorizontalStackViewGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_newHorizontalStackViewGeneration * p = (const cPtr_newHorizontalStackViewGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_newHorizontalStackViewGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_newHorizontalStackViewGeneration::objectCompare (const GALGAS_newHorizontalStackViewGeneration & inOperand) const {
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

GALGAS_newHorizontalStackViewGeneration::GALGAS_newHorizontalStackViewGeneration (void) :
GALGAS_abstractViewGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration GALGAS_newHorizontalStackViewGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_newHorizontalStackViewGeneration::constructor_new (GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration::GALGAS_newHorizontalStackViewGeneration (const cPtr_newHorizontalStackViewGeneration * inSourcePtr) :
GALGAS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_newHorizontalStackViewGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration GALGAS_newHorizontalStackViewGeneration::constructor_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFuncCallList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_newHorizontalStackViewGeneration result ;
  if (inAttribute_mFuncCallList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_newHorizontalStackViewGeneration (inAttribute_mFuncCallList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_newHorizontalStackViewGeneration::setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_newHorizontalStackViewGeneration * p = (cPtr_newHorizontalStackViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_newHorizontalStackViewGeneration) ;
    p->mProperty_mFuncCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_newHorizontalStackViewGeneration::readProperty_mFuncCallList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_newHorizontalStackViewGeneration * p = (cPtr_newHorizontalStackViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_newHorizontalStackViewGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @newHorizontalStackViewGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_newHorizontalStackViewGeneration::cPtr_newHorizontalStackViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (THERE),
mProperty_mFuncCallList (in_mFuncCallList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_newHorizontalStackViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration ;
}

void cPtr_newHorizontalStackViewGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@newHorizontalStackViewGeneration:" ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_newHorizontalStackViewGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_newHorizontalStackViewGeneration (mProperty_mFuncCallList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@newHorizontalStackViewGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration ("newHorizontalStackViewGeneration",
                                                         & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_newHorizontalStackViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_newHorizontalStackViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_newHorizontalStackViewGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration GALGAS_newHorizontalStackViewGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_newHorizontalStackViewGeneration result ;
  const GALGAS_newHorizontalStackViewGeneration * p = (const GALGAS_newHorizontalStackViewGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_newHorizontalStackViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("newHorizontalStackViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_newHorizontalStackViewGeneration_2D_weak::objectCompare (const GALGAS_newHorizontalStackViewGeneration_2D_weak & inOperand) const {
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

GALGAS_newHorizontalStackViewGeneration_2D_weak::GALGAS_newHorizontalStackViewGeneration_2D_weak (void) :
GALGAS_abstractViewGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration_2D_weak & GALGAS_newHorizontalStackViewGeneration_2D_weak::operator = (const GALGAS_newHorizontalStackViewGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration_2D_weak::GALGAS_newHorizontalStackViewGeneration_2D_weak (const GALGAS_newHorizontalStackViewGeneration & inSource) :
GALGAS_abstractViewGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration_2D_weak GALGAS_newHorizontalStackViewGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_newHorizontalStackViewGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration GALGAS_newHorizontalStackViewGeneration_2D_weak::bang_newHorizontalStackViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_newHorizontalStackViewGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_newHorizontalStackViewGeneration) ;
      result = GALGAS_newHorizontalStackViewGeneration ((cPtr_newHorizontalStackViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@newHorizontalStackViewGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration_2D_weak ("newHorizontalStackViewGeneration-weak",
                                                                 & kTypeDescriptor_GALGAS_abstractViewGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_newHorizontalStackViewGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_newHorizontalStackViewGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_newHorizontalStackViewGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration_2D_weak GALGAS_newHorizontalStackViewGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_newHorizontalStackViewGeneration_2D_weak result ;
  const GALGAS_newHorizontalStackViewGeneration_2D_weak * p = (const GALGAS_newHorizontalStackViewGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_newHorizontalStackViewGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("newHorizontalStackViewGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @computedHorizontalViewGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computedHorizontalViewGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computedHorizontalViewGeneration * p = (const cPtr_computedHorizontalViewGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computedHorizontalViewGeneration::objectCompare (const GALGAS_computedHorizontalViewGeneration & inOperand) const {
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

GALGAS_computedHorizontalViewGeneration::GALGAS_computedHorizontalViewGeneration (void) :
GALGAS_abstractViewGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_computedHorizontalViewGeneration::constructor_new (GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (HERE),
                                                                   GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration::GALGAS_computedHorizontalViewGeneration (const cPtr_computedHorizontalViewGeneration * inSourcePtr) :
GALGAS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedHorizontalViewGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::constructor_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFuncCallList,
                                                                                                  const GALGAS_autoLayoutViewInstructionGenerationList & inAttribute_mInstructionList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration result ;
  if (inAttribute_mFuncCallList.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computedHorizontalViewGeneration (inAttribute_mFuncCallList, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedHorizontalViewGeneration::setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    p->mProperty_mFuncCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedHorizontalViewGeneration::setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_computedHorizontalViewGeneration::readProperty_mFuncCallList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_computedHorizontalViewGeneration::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @computedHorizontalViewGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_computedHorizontalViewGeneration::cPtr_computedHorizontalViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                              const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (THERE),
mProperty_mFuncCallList (in_mFuncCallList),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedHorizontalViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

void cPtr_computedHorizontalViewGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@computedHorizontalViewGeneration:" ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedHorizontalViewGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_computedHorizontalViewGeneration (mProperty_mFuncCallList, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@computedHorizontalViewGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ("computedHorizontalViewGeneration",
                                                         & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedHorizontalViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedHorizontalViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedHorizontalViewGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration result ;
  const GALGAS_computedHorizontalViewGeneration * p = (const GALGAS_computedHorizontalViewGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedHorizontalViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedHorizontalViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_computedHorizontalViewGeneration_2D_weak::objectCompare (const GALGAS_computedHorizontalViewGeneration_2D_weak & inOperand) const {
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

GALGAS_computedHorizontalViewGeneration_2D_weak::GALGAS_computedHorizontalViewGeneration_2D_weak (void) :
GALGAS_abstractViewGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration_2D_weak & GALGAS_computedHorizontalViewGeneration_2D_weak::operator = (const GALGAS_computedHorizontalViewGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration_2D_weak::GALGAS_computedHorizontalViewGeneration_2D_weak (const GALGAS_computedHorizontalViewGeneration & inSource) :
GALGAS_abstractViewGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration_2D_weak GALGAS_computedHorizontalViewGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration_2D_weak::bang_computedHorizontalViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_computedHorizontalViewGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedHorizontalViewGeneration) ;
      result = GALGAS_computedHorizontalViewGeneration ((cPtr_computedHorizontalViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@computedHorizontalViewGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2D_weak ("computedHorizontalViewGeneration-weak",
                                                                 & kTypeDescriptor_GALGAS_abstractViewGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedHorizontalViewGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedHorizontalViewGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedHorizontalViewGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration_2D_weak GALGAS_computedHorizontalViewGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration_2D_weak result ;
  const GALGAS_computedHorizontalViewGeneration_2D_weak * p = (const GALGAS_computedHorizontalViewGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedHorizontalViewGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedHorizontalViewGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @hStackViewInstructionGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_hStackViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_hStackViewInstructionGeneration * p = (const cPtr_hStackViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (p->mProperty_mMultipleBindingGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_hStackViewInstructionGeneration::objectCompare (const GALGAS_hStackViewInstructionGeneration & inOperand) const {
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

GALGAS_hStackViewInstructionGeneration::GALGAS_hStackViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_hStackViewInstructionGeneration::constructor_new (GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (HERE),
                                                                  GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (HERE),
                                                                  GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration::GALGAS_hStackViewInstructionGeneration (const cPtr_hStackViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_hStackViewInstructionGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration::constructor_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFuncCallList,
                                                                                                const GALGAS_autoLayoutViewInstructionGenerationList & inAttribute_mInstructionList,
                                                                                                const GALGAS_autoLayoutMultipleBindingGenerationList & inAttribute_mMultipleBindingGenerationList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_hStackViewInstructionGeneration result ;
  if (inAttribute_mFuncCallList.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mMultipleBindingGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_hStackViewInstructionGeneration (inAttribute_mFuncCallList, inAttribute_mInstructionList, inAttribute_mMultipleBindingGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_hStackViewInstructionGeneration::setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    p->mProperty_mFuncCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_hStackViewInstructionGeneration::setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_hStackViewInstructionGeneration::setter_setMMultipleBindingGenerationList (GALGAS_autoLayoutMultipleBindingGenerationList inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    p->mProperty_mMultipleBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_hStackViewInstructionGeneration::readProperty_mFuncCallList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_hStackViewInstructionGeneration::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_hStackViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @hStackViewInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_hStackViewInstructionGeneration::cPtr_hStackViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                            const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                            const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mFuncCallList (in_mFuncCallList),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mMultipleBindingGenerationList (in_mMultipleBindingGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_hStackViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;
}

void cPtr_hStackViewInstructionGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@hStackViewInstructionGeneration:" ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_hStackViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_hStackViewInstructionGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mMultipleBindingGenerationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@hStackViewInstructionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ("hStackViewInstructionGeneration",
                                                        & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_hStackViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_hStackViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_hStackViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_hStackViewInstructionGeneration result ;
  const GALGAS_hStackViewInstructionGeneration * p = (const GALGAS_hStackViewInstructionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_hStackViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("hStackViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_hStackViewInstructionGeneration_2D_weak::objectCompare (const GALGAS_hStackViewInstructionGeneration_2D_weak & inOperand) const {
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

GALGAS_hStackViewInstructionGeneration_2D_weak::GALGAS_hStackViewInstructionGeneration_2D_weak (void) :
GALGAS_abstractViewInstructionGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration_2D_weak & GALGAS_hStackViewInstructionGeneration_2D_weak::operator = (const GALGAS_hStackViewInstructionGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration_2D_weak::GALGAS_hStackViewInstructionGeneration_2D_weak (const GALGAS_hStackViewInstructionGeneration & inSource) :
GALGAS_abstractViewInstructionGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration_2D_weak GALGAS_hStackViewInstructionGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_hStackViewInstructionGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration_2D_weak::bang_hStackViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_hStackViewInstructionGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_hStackViewInstructionGeneration) ;
      result = GALGAS_hStackViewInstructionGeneration ((cPtr_hStackViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@hStackViewInstructionGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_hStackViewInstructionGeneration_2D_weak ("hStackViewInstructionGeneration-weak",
                                                                & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_hStackViewInstructionGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_hStackViewInstructionGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_hStackViewInstructionGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration_2D_weak GALGAS_hStackViewInstructionGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_hStackViewInstructionGeneration_2D_weak result ;
  const GALGAS_hStackViewInstructionGeneration_2D_weak * p = (const GALGAS_hStackViewInstructionGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_hStackViewInstructionGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("hStackViewInstructionGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutComputedViewInstructionGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutComputedViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutViewClassName.objectCompare (p->mProperty_mAutoLayoutViewClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (p->mProperty_mMultipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRunBindingGeneration.objectCompare (p->mProperty_mRunBindingGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGeneration.objectCompare (p->mProperty_mTableViewBindingGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewGraphicControllerBindingGeneration.objectCompare (p->mProperty_mEBViewGraphicControllerBindingGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConfiguratorName.objectCompare (p->mProperty_mConfiguratorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletName.objectCompare (p->mProperty_mOutletName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutComputedViewInstructionGeneration::objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration & inOperand) const {
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

GALGAS_autoLayoutComputedViewInstructionGeneration::GALGAS_autoLayoutComputedViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration::GALGAS_autoLayoutComputedViewInstructionGeneration (const cPtr_autoLayoutComputedViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutComputedViewInstructionGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::constructor_new (const GALGAS_lstring & inAttribute_mAutoLayoutViewClassName,
                                                                                                                        const GALGAS_autoLayoutViewInstructionGenerationParameterList & inAttribute_mParameterList,
                                                                                                                        const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFunctionCallList,
                                                                                                                        const GALGAS_autoLayoutRegularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                                                        const GALGAS_autoLayoutMultipleBindingGenerationList & inAttribute_mMultipleBindingGenerationList,
                                                                                                                        const GALGAS_autolayoutRunBindingForGeneration & inAttribute_mRunBindingGeneration,
                                                                                                                        const GALGAS_string & inAttribute_mTableViewBindingGeneration,
                                                                                                                        const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & inAttribute_mEBViewGraphicControllerBindingGeneration,
                                                                                                                        const GALGAS_string & inAttribute_mConfiguratorName,
                                                                                                                        const GALGAS_string & inAttribute_mOutletName
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration result ;
  if (inAttribute_mAutoLayoutViewClassName.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mFunctionCallList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_mMultipleBindingGenerationList.isValid () && inAttribute_mRunBindingGeneration.isValid () && inAttribute_mTableViewBindingGeneration.isValid () && inAttribute_mEBViewGraphicControllerBindingGeneration.isValid () && inAttribute_mConfiguratorName.isValid () && inAttribute_mOutletName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutComputedViewInstructionGeneration (inAttribute_mAutoLayoutViewClassName, inAttribute_mParameterList, inAttribute_mFunctionCallList, inAttribute_mRegularBindingsGenerationList, inAttribute_mMultipleBindingGenerationList, inAttribute_mRunBindingGeneration, inAttribute_mTableViewBindingGeneration, inAttribute_mEBViewGraphicControllerBindingGeneration, inAttribute_mConfiguratorName, inAttribute_mOutletName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMAutoLayoutViewClassName (GALGAS_lstring inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mAutoLayoutViewClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMParameterList (GALGAS_autoLayoutViewInstructionGenerationParameterList inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMFunctionCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mFunctionCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMRegularBindingsGenerationList (GALGAS_autoLayoutRegularBindingsGenerationList inValue
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mRegularBindingsGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMMultipleBindingGenerationList (GALGAS_autoLayoutMultipleBindingGenerationList inValue
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mMultipleBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMRunBindingGeneration (GALGAS_autolayoutRunBindingForGeneration inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mRunBindingGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMTableViewBindingGeneration (GALGAS_string inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mTableViewBindingGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMEBViewGraphicControllerBindingGeneration (GALGAS_autoLayoutViewGraphicControllerBindingGeneration inValue
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mEBViewGraphicControllerBindingGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMConfiguratorName (GALGAS_string inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mConfiguratorName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMOutletName (GALGAS_string inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mOutletName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mAutoLayoutViewClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mAutoLayoutViewClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationParameterList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mFunctionCallList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutRegularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutRunBindingForGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mRunBindingGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autolayoutRunBindingForGeneration () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mRunBindingGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mTableViewBindingGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mTableViewBindingGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewGraphicControllerBindingGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mEBViewGraphicControllerBindingGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewGraphicControllerBindingGeneration () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mEBViewGraphicControllerBindingGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mConfiguratorName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mOutletName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mOutletName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutComputedViewInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutComputedViewInstructionGeneration::cPtr_autoLayoutComputedViewInstructionGeneration (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                                                    const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                                                                    const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                                                                    const GALGAS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                    const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                                    const GALGAS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                                                                    const GALGAS_string & in_mTableViewBindingGeneration,
                                                                                                    const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                                                                    const GALGAS_string & in_mConfiguratorName,
                                                                                                    const GALGAS_string & in_mOutletName
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mAutoLayoutViewClassName (in_mAutoLayoutViewClassName),
mProperty_mParameterList (in_mParameterList),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_mMultipleBindingGenerationList (in_mMultipleBindingGenerationList),
mProperty_mRunBindingGeneration (in_mRunBindingGeneration),
mProperty_mTableViewBindingGeneration (in_mTableViewBindingGeneration),
mProperty_mEBViewGraphicControllerBindingGeneration (in_mEBViewGraphicControllerBindingGeneration),
mProperty_mConfiguratorName (in_mConfiguratorName),
mProperty_mOutletName (in_mOutletName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutComputedViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

void cPtr_autoLayoutComputedViewInstructionGeneration::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@autoLayoutComputedViewInstructionGeneration:" ;
  mProperty_mAutoLayoutViewClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRunBindingGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewBindingGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEBViewGraphicControllerBindingGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutComputedViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutComputedViewInstructionGeneration (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mRunBindingGeneration, mProperty_mTableViewBindingGeneration, mProperty_mEBViewGraphicControllerBindingGeneration, mProperty_mConfiguratorName, mProperty_mOutletName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutComputedViewInstructionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ("autoLayoutComputedViewInstructionGeneration",
                                                                    & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutComputedViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutComputedViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutComputedViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration result ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration * p = (const GALGAS_autoLayoutComputedViewInstructionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutComputedViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutComputedViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak & inOperand) const {
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

GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak (void) :
GALGAS_abstractViewInstructionGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak & GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::operator = (const GALGAS_autoLayoutComputedViewInstructionGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak (const GALGAS_autoLayoutComputedViewInstructionGeneration & inSource) :
GALGAS_abstractViewInstructionGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::bang_autoLayoutComputedViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutComputedViewInstructionGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutComputedViewInstructionGeneration) ;
      result = GALGAS_autoLayoutComputedViewInstructionGeneration ((cPtr_autoLayoutComputedViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutComputedViewInstructionGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak ("autoLayoutComputedViewInstructionGeneration-weak",
                                                                            & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak result ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak * p = (const GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutComputedViewInstructionGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @outletClassDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outletClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasRunAction.objectCompare (p->mProperty_mHasRunAction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasEnabled.objectCompare (p->mProperty_mHasEnabled) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (p->mProperty_mHandlesTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesGraphicControllerBinding.objectCompare (p->mProperty_mHandlesGraphicControllerBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasHidden.objectCompare (p->mProperty_mHasHidden) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outletClassDeclarationAST::objectCompare (const GALGAS_outletClassDeclarationAST & inOperand) const {
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

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_outletClassDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (const cPtr_outletClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outletClassDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_bool & inAttribute_mUserDefined,
                                                                                    const GALGAS_lstring & inAttribute_mSuperClassName,
                                                                                    const GALGAS_bool & inAttribute_mHasRunAction,
                                                                                    const GALGAS_bool & inAttribute_mHasEnabled,
                                                                                    const GALGAS_bool & inAttribute_mHandlesTableValueBinding,
                                                                                    const GALGAS_bool & inAttribute_mHandlesGraphicControllerBinding,
                                                                                    const GALGAS_bool & inAttribute_mHasHidden
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mUserDefined.isValid () && inAttribute_mSuperClassName.isValid () && inAttribute_mHasRunAction.isValid () && inAttribute_mHasEnabled.isValid () && inAttribute_mHandlesTableValueBinding.isValid () && inAttribute_mHandlesGraphicControllerBinding.isValid () && inAttribute_mHasHidden.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outletClassDeclarationAST (inAttribute_mClassName, inAttribute_mUserDefined, inAttribute_mSuperClassName, inAttribute_mHasRunAction, inAttribute_mHasEnabled, inAttribute_mHandlesTableValueBinding, inAttribute_mHandlesGraphicControllerBinding, inAttribute_mHasHidden COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMUserDefined (GALGAS_bool inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHasRunAction (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHasEnabled (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHandlesTableValueBinding (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHasHidden (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mUserDefined (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mUserDefined ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletClassDeclarationAST::readProperty_mSuperClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHasRunAction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasRunAction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHasEnabled (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasEnabled ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHandlesTableValueBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHandlesTableValueBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHandlesGraphicControllerBinding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHandlesGraphicControllerBinding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHasHidden (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasHidden ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outletClassDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outletClassDeclarationAST::cPtr_outletClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_bool & in_mUserDefined,
                                                                const GALGAS_lstring & in_mSuperClassName,
                                                                const GALGAS_bool & in_mHasRunAction,
                                                                const GALGAS_bool & in_mHasEnabled,
                                                                const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                const GALGAS_bool & in_mHasHidden
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mUserDefined (in_mUserDefined),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mHasRunAction (in_mHasRunAction),
mProperty_mHasEnabled (in_mHasEnabled),
mProperty_mHandlesTableValueBinding (in_mHandlesTableValueBinding),
mProperty_mHandlesGraphicControllerBinding (in_mHandlesGraphicControllerBinding),
mProperty_mHasHidden (in_mHasHidden) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outletClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

void cPtr_outletClassDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@outletClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasRunAction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasEnabled.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasHidden.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outletClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outletClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@outletClassDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationAST ("outletClassDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST result ;
  const GALGAS_outletClassDeclarationAST * p = (const GALGAS_outletClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_outletClassDeclarationAST_2D_weak::objectCompare (const GALGAS_outletClassDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_outletClassDeclarationAST_2D_weak::GALGAS_outletClassDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST_2D_weak & GALGAS_outletClassDeclarationAST_2D_weak::operator = (const GALGAS_outletClassDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST_2D_weak::GALGAS_outletClassDeclarationAST_2D_weak (const GALGAS_outletClassDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST_2D_weak GALGAS_outletClassDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST_2D_weak::bang_outletClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outletClassDeclarationAST) ;
      result = GALGAS_outletClassDeclarationAST ((cPtr_outletClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@outletClassDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationAST_2D_weak ("outletClassDeclarationAST-weak",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST_2D_weak GALGAS_outletClassDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST_2D_weak result ;
  const GALGAS_outletClassDeclarationAST_2D_weak * p = (const GALGAS_outletClassDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @computedPropertyDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computedPropertyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computedPropertyDeclarationAST * p = (const cPtr_computedPropertyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComputedPropertyTypeName.objectCompare (p->mProperty_mComputedPropertyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComputedPropertyName.objectCompare (p->mProperty_mComputedPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computedPropertyDeclarationAST::objectCompare (const GALGAS_computedPropertyDeclarationAST & inOperand) const {
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

GALGAS_computedPropertyDeclarationAST::GALGAS_computedPropertyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_computedPropertyDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_observablePropertyList::constructor_emptyList (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST::GALGAS_computedPropertyDeclarationAST (const cPtr_computedPropertyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                              const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                              const GALGAS_lstring & inAttribute_mComputedPropertyTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mComputedPropertyName,
                                                                                              const GALGAS_observablePropertyList & inAttribute_mDependencyList
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mComputedPropertyTypeName.isValid () && inAttribute_mComputedPropertyName.isValid () && inAttribute_mDependencyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computedPropertyDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mComputedPropertyTypeName, inAttribute_mComputedPropertyName, inAttribute_mDependencyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMComputedPropertyTypeName (GALGAS_lstring inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMComputedPropertyName (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMDependencyList (GALGAS_observablePropertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::readProperty_mRootEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::readProperty_mComputedPropertyTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mComputedPropertyTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::readProperty_mComputedPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mComputedPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_computedPropertyDeclarationAST::readProperty_mDependencyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_observablePropertyList () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mDependencyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_computedPropertyDeclarationAST::cPtr_computedPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                          const GALGAS_lstring & in_mRootEntityName,
                                                                          const GALGAS_lstring & in_mComputedPropertyTypeName,
                                                                          const GALGAS_lstring & in_mComputedPropertyName,
                                                                          const GALGAS_observablePropertyList & in_mDependencyList
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mComputedPropertyTypeName (in_mComputedPropertyTypeName),
mProperty_mComputedPropertyName (in_mComputedPropertyName),
mProperty_mDependencyList (in_mDependencyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedPropertyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

void cPtr_computedPropertyDeclarationAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@computedPropertyDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComputedPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComputedPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedPropertyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_computedPropertyDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mComputedPropertyTypeName, mProperty_mComputedPropertyName, mProperty_mDependencyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@computedPropertyDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ("computedPropertyDeclarationAST",
                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyDeclarationAST result ;
  const GALGAS_computedPropertyDeclarationAST * p = (const GALGAS_computedPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_computedPropertyDeclarationAST_2D_weak::objectCompare (const GALGAS_computedPropertyDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_computedPropertyDeclarationAST_2D_weak::GALGAS_computedPropertyDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST_2D_weak & GALGAS_computedPropertyDeclarationAST_2D_weak::operator = (const GALGAS_computedPropertyDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST_2D_weak::GALGAS_computedPropertyDeclarationAST_2D_weak (const GALGAS_computedPropertyDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST_2D_weak GALGAS_computedPropertyDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_computedPropertyDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST_2D_weak::bang_computedPropertyDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_computedPropertyDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedPropertyDeclarationAST) ;
      result = GALGAS_computedPropertyDeclarationAST ((cPtr_computedPropertyDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@computedPropertyDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2D_weak ("computedPropertyDeclarationAST-weak",
                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST_2D_weak GALGAS_computedPropertyDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyDeclarationAST_2D_weak result ;
  const GALGAS_computedPropertyDeclarationAST_2D_weak * p = (const GALGAS_computedPropertyDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedPropertyDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @computedPropertyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computedPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computedPropertyGeneration * p = (const cPtr_computedPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
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


typeComparisonResult GALGAS_computedPropertyGeneration::objectCompare (const GALGAS_computedPropertyGeneration & inOperand) const {
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

GALGAS_computedPropertyGeneration::GALGAS_computedPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration::GALGAS_computedPropertyGeneration (const cPtr_computedPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                      const GALGAS_string & inAttribute_mClassName,
                                                                                      const GALGAS_typeKind & inAttribute_mType,
                                                                                      const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList,
                                                                                      const GALGAS_bool & inAttribute_mGenerate
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mType.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mGenerate.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computedPropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mType, inAttribute_mDependencyList, inAttribute_mGenerate COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMGenerate (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computedPropertyGeneration::readProperty_mClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_computedPropertyGeneration::readProperty_mType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_computedPropertyGeneration::readProperty_mDependencyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_transientDependencyListForGeneration () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_computedPropertyGeneration::readProperty_mGenerate (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mGenerate ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_computedPropertyGeneration::cPtr_computedPropertyGeneration (const GALGAS_string & in_mPropertyName,
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

const C_galgas_type_descriptor * cPtr_computedPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

void cPtr_computedPropertyGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@computedPropertyGeneration:" ;
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

acPtr_class * cPtr_computedPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_computedPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mGenerate COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@computedPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedPropertyGeneration ("computedPropertyGeneration",
                                                   & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration result ;
  const GALGAS_computedPropertyGeneration * p = (const GALGAS_computedPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_computedPropertyGeneration_2D_weak::objectCompare (const GALGAS_computedPropertyGeneration_2D_weak & inOperand) const {
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

GALGAS_computedPropertyGeneration_2D_weak::GALGAS_computedPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration_2D_weak & GALGAS_computedPropertyGeneration_2D_weak::operator = (const GALGAS_computedPropertyGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration_2D_weak::GALGAS_computedPropertyGeneration_2D_weak (const GALGAS_computedPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration_2D_weak GALGAS_computedPropertyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration_2D_weak::bang_computedPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_computedPropertyGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedPropertyGeneration) ;
      result = GALGAS_computedPropertyGeneration ((cPtr_computedPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@computedPropertyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedPropertyGeneration_2D_weak ("computedPropertyGeneration-weak",
                                                           & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration_2D_weak GALGAS_computedPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration_2D_weak result ;
  const GALGAS_computedPropertyGeneration_2D_weak * p = (const GALGAS_computedPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @transientDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_transientDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientTypeName.objectCompare (p->mProperty_mTransientTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientName.objectCompare (p->mProperty_mTransientName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsOverriding.objectCompare (p->mProperty_mIsOverriding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_transientDeclarationAST::objectCompare (const GALGAS_transientDeclarationAST & inOperand) const {
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

GALGAS_transientDeclarationAST::GALGAS_transientDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_observablePropertyList::constructor_emptyList (HERE),
                                                          GALGAS_bool::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST::GALGAS_transientDeclarationAST (const cPtr_transientDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                const GALGAS_lstring & inAttribute_mTransientTypeName,
                                                                                const GALGAS_lstring & inAttribute_mTransientName,
                                                                                const GALGAS_observablePropertyList & inAttribute_mDependencyList,
                                                                                const GALGAS_bool & inAttribute_mIsOverriding
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_transientDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mTransientTypeName.isValid () && inAttribute_mTransientName.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mIsOverriding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mTransientTypeName, inAttribute_mTransientName, inAttribute_mDependencyList, inAttribute_mIsOverriding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setter_setMTransientTypeName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mTransientTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setter_setMTransientName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setter_setMDependencyList (GALGAS_observablePropertyList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setter_setMIsOverriding (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mIsOverriding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_transientDeclarationAST::readProperty_mRootEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_transientDeclarationAST::readProperty_mTransientTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mTransientTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_transientDeclarationAST::readProperty_mTransientName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mTransientName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_transientDeclarationAST::readProperty_mDependencyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_observablePropertyList () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mDependencyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientDeclarationAST::readProperty_mIsOverriding (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mIsOverriding ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @transientDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_transientDeclarationAST::cPtr_transientDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                            const GALGAS_lstring & in_mRootEntityName,
                                                            const GALGAS_lstring & in_mTransientTypeName,
                                                            const GALGAS_lstring & in_mTransientName,
                                                            const GALGAS_observablePropertyList & in_mDependencyList,
                                                            const GALGAS_bool & in_mIsOverriding
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mTransientTypeName (in_mTransientTypeName),
mProperty_mTransientName (in_mTransientName),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mIsOverriding (in_mIsOverriding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

void cPtr_transientDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@transientDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsOverriding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mTransientTypeName, mProperty_mTransientName, mProperty_mDependencyList, mProperty_mIsOverriding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@transientDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDeclarationAST ("transientDeclarationAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDeclarationAST result ;
  const GALGAS_transientDeclarationAST * p = (const GALGAS_transientDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientDeclarationAST_2D_weak::objectCompare (const GALGAS_transientDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_transientDeclarationAST_2D_weak::GALGAS_transientDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST_2D_weak & GALGAS_transientDeclarationAST_2D_weak::operator = (const GALGAS_transientDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST_2D_weak::GALGAS_transientDeclarationAST_2D_weak (const GALGAS_transientDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST_2D_weak GALGAS_transientDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_transientDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST_2D_weak::bang_transientDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_transientDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientDeclarationAST) ;
      result = GALGAS_transientDeclarationAST ((cPtr_transientDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@transientDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDeclarationAST_2D_weak ("transientDeclarationAST-weak",
                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST_2D_weak GALGAS_transientDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDeclarationAST_2D_weak result ;
  const GALGAS_transientDeclarationAST_2D_weak * p = (const GALGAS_transientDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @proxyDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_proxyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyKind.objectCompare (p->mProperty_mProxyKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyTypeName.objectCompare (p->mProperty_mProxyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyName.objectCompare (p->mProperty_mProxyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToOneRelationshipName.objectCompare (p->mProperty_mToOneRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_proxyDeclarationAST::objectCompare (const GALGAS_proxyDeclarationAST & inOperand) const {
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

GALGAS_proxyDeclarationAST::GALGAS_proxyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST::GALGAS_proxyDeclarationAST (const cPtr_proxyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_proxyDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_proxyKind & inAttribute_mProxyKind,
                                                                        const GALGAS_lstring & inAttribute_mProxyTypeName,
                                                                        const GALGAS_lstring & inAttribute_mProxyName,
                                                                        const GALGAS_lstring & inAttribute_mToOneRelationshipName,
                                                                        const GALGAS_lstring & inAttribute_mPropertyName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mProxyKind.isValid () && inAttribute_mProxyTypeName.isValid () && inAttribute_mProxyName.isValid () && inAttribute_mToOneRelationshipName.isValid () && inAttribute_mPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_proxyDeclarationAST (inAttribute_mClassName, inAttribute_mProxyKind, inAttribute_mProxyTypeName, inAttribute_mProxyName, inAttribute_mToOneRelationshipName, inAttribute_mPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setter_setMProxyTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setter_setMProxyName (GALGAS_lstring inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setter_setMToOneRelationshipName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mToOneRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setter_setMPropertyName (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyDeclarationAST::readProperty_mProxyKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_proxyKind () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::readProperty_mProxyTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::readProperty_mProxyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::readProperty_mToOneRelationshipName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mToOneRelationshipName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::readProperty_mPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @proxyDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_proxyDeclarationAST::cPtr_proxyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_proxyKind & in_mProxyKind,
                                                    const GALGAS_lstring & in_mProxyTypeName,
                                                    const GALGAS_lstring & in_mProxyName,
                                                    const GALGAS_lstring & in_mToOneRelationshipName,
                                                    const GALGAS_lstring & in_mPropertyName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mProxyKind (in_mProxyKind),
mProperty_mProxyTypeName (in_mProxyTypeName),
mProperty_mProxyName (in_mProxyName),
mProperty_mToOneRelationshipName (in_mToOneRelationshipName),
mProperty_mPropertyName (in_mPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_proxyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

void cPtr_proxyDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@proxyDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_proxyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_proxyDeclarationAST (mProperty_mClassName, mProperty_mProxyKind, mProperty_mProxyTypeName, mProperty_mProxyName, mProperty_mToOneRelationshipName, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@proxyDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_proxyDeclarationAST ("proxyDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_proxyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_proxyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST result ;
  const GALGAS_proxyDeclarationAST * p = (const GALGAS_proxyDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_proxyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_proxyDeclarationAST_2D_weak::objectCompare (const GALGAS_proxyDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_proxyDeclarationAST_2D_weak::GALGAS_proxyDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST_2D_weak & GALGAS_proxyDeclarationAST_2D_weak::operator = (const GALGAS_proxyDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST_2D_weak::GALGAS_proxyDeclarationAST_2D_weak (const GALGAS_proxyDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST_2D_weak GALGAS_proxyDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST_2D_weak::bang_proxyDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_proxyDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_proxyDeclarationAST) ;
      result = GALGAS_proxyDeclarationAST ((cPtr_proxyDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@proxyDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_proxyDeclarationAST_2D_weak ("proxyDeclarationAST-weak",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_proxyDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_proxyDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST_2D_weak GALGAS_proxyDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST_2D_weak result ;
  const GALGAS_proxyDeclarationAST_2D_weak * p = (const GALGAS_proxyDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_proxyDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @atomicPropertyDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_atomicPropertyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyTypeName.objectCompare (p->mProperty_mPropertyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValue.objectCompare (p->mProperty_mDefaultValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNeedsValidation.objectCompare (p->mProperty_mNeedsValidation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_atomicPropertyDeclarationAST::objectCompare (const GALGAS_atomicPropertyDeclarationAST & inOperand) const {
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

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                          const GALGAS_lstring & inAttribute_mPropertyTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mPropertyName,
                                                                                          const GALGAS_abstractDefaultValue & inAttribute_mDefaultValue,
                                                                                          const GALGAS_bool & inAttribute_mNeedsValidation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mPropertyTypeName.isValid () && inAttribute_mPropertyName.isValid () && inAttribute_mDefaultValue.isValid () && inAttribute_mNeedsValidation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicPropertyDeclarationAST (inAttribute_mClassName, inAttribute_mPropertyTypeName, inAttribute_mPropertyName, inAttribute_mDefaultValue, inAttribute_mNeedsValidation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setter_setMPropertyTypeName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mPropertyTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setter_setMPropertyName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setter_setMDefaultValue (GALGAS_abstractDefaultValue inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mDefaultValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setter_setMNeedsValidation (GALGAS_bool inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mNeedsValidation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::readProperty_mPropertyTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mPropertyTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::readProperty_mPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_atomicPropertyDeclarationAST::readProperty_mDefaultValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractDefaultValue () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mDefaultValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyDeclarationAST::readProperty_mNeedsValidation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mNeedsValidation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @atomicPropertyDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_atomicPropertyDeclarationAST::cPtr_atomicPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                      const GALGAS_lstring & in_mPropertyTypeName,
                                                                      const GALGAS_lstring & in_mPropertyName,
                                                                      const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                                      const GALGAS_bool & in_mNeedsValidation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mPropertyTypeName (in_mPropertyTypeName),
mProperty_mPropertyName (in_mPropertyName),
mProperty_mDefaultValue (in_mDefaultValue),
mProperty_mNeedsValidation (in_mNeedsValidation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicPropertyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

void cPtr_atomicPropertyDeclarationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@atomicPropertyDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNeedsValidation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicPropertyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicPropertyDeclarationAST (mProperty_mClassName, mProperty_mPropertyTypeName, mProperty_mPropertyName, mProperty_mDefaultValue, mProperty_mNeedsValidation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@atomicPropertyDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ("atomicPropertyDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST result ;
  const GALGAS_atomicPropertyDeclarationAST * p = (const GALGAS_atomicPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicPropertyDeclarationAST_2D_weak::objectCompare (const GALGAS_atomicPropertyDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_atomicPropertyDeclarationAST_2D_weak::GALGAS_atomicPropertyDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST_2D_weak & GALGAS_atomicPropertyDeclarationAST_2D_weak::operator = (const GALGAS_atomicPropertyDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST_2D_weak::GALGAS_atomicPropertyDeclarationAST_2D_weak (const GALGAS_atomicPropertyDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST_2D_weak GALGAS_atomicPropertyDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST_2D_weak::bang_atomicPropertyDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicPropertyDeclarationAST) ;
      result = GALGAS_atomicPropertyDeclarationAST ((cPtr_atomicPropertyDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@atomicPropertyDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2D_weak ("atomicPropertyDeclarationAST-weak",
                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST_2D_weak GALGAS_atomicPropertyDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST_2D_weak result ;
  const GALGAS_atomicPropertyDeclarationAST_2D_weak * p = (const GALGAS_atomicPropertyDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @toOneRelationshipAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toOneRelationshipAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityName.objectCompare (p->mProperty_mDestinationEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToOneRelationshipName.objectCompare (p->mProperty_mToOneRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOpposite.objectCompare (p->mProperty_mOpposite) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsedForSignature.objectCompare (p->mProperty_mUsedForSignature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_toOneRelationshipAST::objectCompare (const GALGAS_toOneRelationshipAST & inOperand) const {
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

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOneRelationshipAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                          const GALGAS_lstring & inAttribute_mDestinationEntityName,
                                                                          const GALGAS_lstring & inAttribute_mToOneRelationshipName,
                                                                          const GALGAS_toOneOppositeRelationship & inAttribute_mOpposite,
                                                                          const GALGAS_bool & inAttribute_mUsedForSignature
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDestinationEntityName.isValid () && inAttribute_mToOneRelationshipName.isValid () && inAttribute_mOpposite.isValid () && inAttribute_mUsedForSignature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toOneRelationshipAST (inAttribute_mClassName, inAttribute_mDestinationEntityName, inAttribute_mToOneRelationshipName, inAttribute_mOpposite, inAttribute_mUsedForSignature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setter_setMDestinationEntityName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mDestinationEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setter_setMToOneRelationshipName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mToOneRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setter_setMOpposite (GALGAS_toOneOppositeRelationship inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mOpposite = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setter_setMUsedForSignature (GALGAS_bool inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toOneRelationshipAST::readProperty_mDestinationEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mDestinationEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toOneRelationshipAST::readProperty_mToOneRelationshipName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mToOneRelationshipName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneRelationshipAST::readProperty_mOpposite (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_toOneOppositeRelationship () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mOpposite ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneRelationshipAST::readProperty_mUsedForSignature (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @toOneRelationshipAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_toOneRelationshipAST::cPtr_toOneRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_lstring & in_mDestinationEntityName,
                                                      const GALGAS_lstring & in_mToOneRelationshipName,
                                                      const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                                      const GALGAS_bool & in_mUsedForSignature
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (in_mDestinationEntityName),
mProperty_mToOneRelationshipName (in_mToOneRelationshipName),
mProperty_mOpposite (in_mOpposite),
mProperty_mUsedForSignature (in_mUsedForSignature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toOneRelationshipAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

void cPtr_toOneRelationshipAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@toOneRelationshipAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOpposite.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toOneRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toOneRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToOneRelationshipName, mProperty_mOpposite, mProperty_mUsedForSignature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@toOneRelationshipAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipAST ("toOneRelationshipAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOneRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOneRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST result ;
  const GALGAS_toOneRelationshipAST * p = (const GALGAS_toOneRelationshipAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toOneRelationshipAST_2D_weak::objectCompare (const GALGAS_toOneRelationshipAST_2D_weak & inOperand) const {
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

GALGAS_toOneRelationshipAST_2D_weak::GALGAS_toOneRelationshipAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST_2D_weak & GALGAS_toOneRelationshipAST_2D_weak::operator = (const GALGAS_toOneRelationshipAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST_2D_weak::GALGAS_toOneRelationshipAST_2D_weak (const GALGAS_toOneRelationshipAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST_2D_weak GALGAS_toOneRelationshipAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST_2D_weak::bang_toOneRelationshipAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toOneRelationshipAST) ;
      result = GALGAS_toOneRelationshipAST ((cPtr_toOneRelationshipAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@toOneRelationshipAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipAST_2D_weak ("toOneRelationshipAST-weak",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOneRelationshipAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOneRelationshipAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST_2D_weak GALGAS_toOneRelationshipAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST_2D_weak result ;
  const GALGAS_toOneRelationshipAST_2D_weak * p = (const GALGAS_toOneRelationshipAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneRelationshipAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @toOnePropertyGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toOnePropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRelationshipType.objectCompare (p->mProperty_mRelationshipType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOpposite.objectCompare (p->mProperty_mOpposite) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityObservablePropertyMap.objectCompare (p->mProperty_mDestinationEntityObservablePropertyMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsedForSignature.objectCompare (p->mProperty_mUsedForSignature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_toOnePropertyGeneration::objectCompare (const GALGAS_toOnePropertyGeneration & inOperand) const {
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

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (const cPtr_toOnePropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOnePropertyGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                const GALGAS_string & inAttribute_mClassName,
                                                                                const GALGAS_propertyKind & inAttribute_mRelationshipType,
                                                                                const GALGAS_toOneOppositeRelationship & inAttribute_mOpposite,
                                                                                const GALGAS_propertyMap & inAttribute_mDestinationEntityObservablePropertyMap,
                                                                                const GALGAS_bool & inAttribute_mUsedForSignature
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mRelationshipType.isValid () && inAttribute_mOpposite.isValid () && inAttribute_mDestinationEntityObservablePropertyMap.isValid () && inAttribute_mUsedForSignature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toOnePropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mRelationshipType, inAttribute_mOpposite, inAttribute_mDestinationEntityObservablePropertyMap, inAttribute_mUsedForSignature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGeneration::setter_setMRelationshipType (GALGAS_propertyKind inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    p->mProperty_mRelationshipType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGeneration::setter_setMOpposite (GALGAS_toOneOppositeRelationship inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    p->mProperty_mOpposite = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGeneration::setter_setMDestinationEntityObservablePropertyMap (GALGAS_propertyMap inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    p->mProperty_mDestinationEntityObservablePropertyMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGeneration::setter_setMUsedForSignature (GALGAS_bool inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toOnePropertyGeneration::readProperty_mClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_toOnePropertyGeneration::readProperty_mRelationshipType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyKind () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mRelationshipType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOnePropertyGeneration::readProperty_mOpposite (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_toOneOppositeRelationship () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mOpposite ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_toOnePropertyGeneration::readProperty_mDestinationEntityObservablePropertyMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyMap () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mDestinationEntityObservablePropertyMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOnePropertyGeneration::readProperty_mUsedForSignature (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @toOnePropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                            const GALGAS_string & in_mClassName,
                                                            const GALGAS_propertyKind & in_mRelationshipType,
                                                            const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                                            const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                            const GALGAS_bool & in_mUsedForSignature
                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mRelationshipType (in_mRelationshipType),
mProperty_mOpposite (in_mOpposite),
mProperty_mDestinationEntityObservablePropertyMap (in_mDestinationEntityObservablePropertyMap),
mProperty_mUsedForSignature (in_mUsedForSignature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toOnePropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

void cPtr_toOnePropertyGeneration::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@toOnePropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOpposite.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toOnePropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toOnePropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mRelationshipType, mProperty_mOpposite, mProperty_mDestinationEntityObservablePropertyMap, mProperty_mUsedForSignature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@toOnePropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGeneration ("toOnePropertyGeneration",
                                                & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOnePropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOnePropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration result ;
  const GALGAS_toOnePropertyGeneration * p = (const GALGAS_toOnePropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOnePropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toOnePropertyGeneration_2D_weak::objectCompare (const GALGAS_toOnePropertyGeneration_2D_weak & inOperand) const {
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

GALGAS_toOnePropertyGeneration_2D_weak::GALGAS_toOnePropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration_2D_weak & GALGAS_toOnePropertyGeneration_2D_weak::operator = (const GALGAS_toOnePropertyGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration_2D_weak::GALGAS_toOnePropertyGeneration_2D_weak (const GALGAS_toOnePropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration_2D_weak GALGAS_toOnePropertyGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration_2D_weak::bang_toOnePropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toOnePropertyGeneration) ;
      result = GALGAS_toOnePropertyGeneration ((cPtr_toOnePropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@toOnePropertyGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGeneration_2D_weak ("toOnePropertyGeneration-weak",
                                                        & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOnePropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOnePropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration_2D_weak GALGAS_toOnePropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration_2D_weak result ;
  const GALGAS_toOnePropertyGeneration_2D_weak * p = (const GALGAS_toOnePropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOnePropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @toManyRelationshipAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toManyRelationshipAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityName.objectCompare (p->mProperty_mDestinationEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyRelationshipName.objectCompare (p->mProperty_mToManyRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
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


typeComparisonResult GALGAS_toManyRelationshipAST::objectCompare (const GALGAS_toManyRelationshipAST & inOperand) const {
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

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyRelationshipAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                            const GALGAS_lstring & inAttribute_mDestinationEntityName,
                                                                            const GALGAS_lstring & inAttribute_mToManyRelationshipName,
                                                                            const GALGAS_toManyRelationshipOptionAST & inAttribute_mOption,
                                                                            const GALGAS_bool & inAttribute_mCustomStore,
                                                                            const GALGAS_bool & inAttribute_mUsedForSignature
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDestinationEntityName.isValid () && inAttribute_mToManyRelationshipName.isValid () && inAttribute_mOption.isValid () && inAttribute_mCustomStore.isValid () && inAttribute_mUsedForSignature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyRelationshipAST (inAttribute_mClassName, inAttribute_mDestinationEntityName, inAttribute_mToManyRelationshipName, inAttribute_mOption, inAttribute_mCustomStore, inAttribute_mUsedForSignature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipAST::setter_setMDestinationEntityName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    p->mProperty_mDestinationEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipAST::setter_setMToManyRelationshipName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    p->mProperty_mToManyRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipAST::setter_setMOption (GALGAS_toManyRelationshipOptionAST inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    p->mProperty_mOption = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipAST::setter_setMCustomStore (GALGAS_bool inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    p->mProperty_mCustomStore = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipAST::setter_setMUsedForSignature (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toManyRelationshipAST::readProperty_mDestinationEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mDestinationEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toManyRelationshipAST::readProperty_mToManyRelationshipName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mToManyRelationshipName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipAST::readProperty_mOption (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_toManyRelationshipOptionAST () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mOption ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipAST::readProperty_mCustomStore (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mCustomStore ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipAST::readProperty_mUsedForSignature (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @toManyRelationshipAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_toManyRelationshipAST::cPtr_toManyRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                        const GALGAS_lstring & in_mDestinationEntityName,
                                                        const GALGAS_lstring & in_mToManyRelationshipName,
                                                        const GALGAS_toManyRelationshipOptionAST & in_mOption,
                                                        const GALGAS_bool & in_mCustomStore,
                                                        const GALGAS_bool & in_mUsedForSignature
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (in_mDestinationEntityName),
mProperty_mToManyRelationshipName (in_mToManyRelationshipName),
mProperty_mOption (in_mOption),
mProperty_mCustomStore (in_mCustomStore),
mProperty_mUsedForSignature (in_mUsedForSignature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toManyRelationshipAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

void cPtr_toManyRelationshipAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@toManyRelationshipAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCustomStore.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toManyRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToManyRelationshipName, mProperty_mOption, mProperty_mCustomStore, mProperty_mUsedForSignature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@toManyRelationshipAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipAST ("toManyRelationshipAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST result ;
  const GALGAS_toManyRelationshipAST * p = (const GALGAS_toManyRelationshipAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyRelationshipAST_2D_weak::objectCompare (const GALGAS_toManyRelationshipAST_2D_weak & inOperand) const {
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

GALGAS_toManyRelationshipAST_2D_weak::GALGAS_toManyRelationshipAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST_2D_weak & GALGAS_toManyRelationshipAST_2D_weak::operator = (const GALGAS_toManyRelationshipAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST_2D_weak::GALGAS_toManyRelationshipAST_2D_weak (const GALGAS_toManyRelationshipAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST_2D_weak GALGAS_toManyRelationshipAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST_2D_weak::bang_toManyRelationshipAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyRelationshipAST) ;
      result = GALGAS_toManyRelationshipAST ((cPtr_toManyRelationshipAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@toManyRelationshipAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipAST_2D_weak ("toManyRelationshipAST-weak",
                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST_2D_weak GALGAS_toManyRelationshipAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST_2D_weak result ;
  const GALGAS_toManyRelationshipAST_2D_weak * p = (const GALGAS_toManyRelationshipAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalIntMultipleBindingExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalIntMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalIntMultipleBindingExpressionAST * p = (const cPtr_literalIntMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalIntMultipleBindingExpressionAST::objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_literalIntMultipleBindingExpressionAST::GALGAS_literalIntMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST::GALGAS_literalIntMultipleBindingExpressionAST (const cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntMultipleBindingExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalIntMultipleBindingExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_literalIntMultipleBindingExpressionAST::setter_setMValue (GALGAS_luint inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_literalIntMultipleBindingExpressionAST::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalIntMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalIntMultipleBindingExpressionAST::cPtr_literalIntMultipleBindingExpressionAST (const GALGAS_luint & in_mValue
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalIntMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

void cPtr_literalIntMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@literalIntMultipleBindingExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalIntMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalIntMultipleBindingExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalIntMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ("literalIntMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalIntMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalIntMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST result ;
  const GALGAS_literalIntMultipleBindingExpressionAST * p = (const GALGAS_literalIntMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalIntMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST_2D_weak & inOperand) const {
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

GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::GALGAS_literalIntMultipleBindingExpressionAST_2D_weak (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST_2D_weak & GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::operator = (const GALGAS_literalIntMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::GALGAS_literalIntMultipleBindingExpressionAST_2D_weak (const GALGAS_literalIntMultipleBindingExpressionAST & inSource) :
GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST_2D_weak GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::bang_literalIntMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalIntMultipleBindingExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalIntMultipleBindingExpressionAST) ;
      result = GALGAS_literalIntMultipleBindingExpressionAST ((cPtr_literalIntMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalIntMultipleBindingExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2D_weak ("literalIntMultipleBindingExpressionAST-weak",
                                                                       & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntMultipleBindingExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST_2D_weak GALGAS_literalIntMultipleBindingExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST_2D_weak result ;
  const GALGAS_literalIntMultipleBindingExpressionAST_2D_weak * p = (const GALGAS_literalIntMultipleBindingExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalIntMultipleBindingExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntMultipleBindingExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @arrayControllerDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_arrayControllerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModel.objectCompare (p->mProperty_mModel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyPropertyName.objectCompare (p->mProperty_mToManyPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_arrayControllerDeclarationAST::objectCompare (const GALGAS_arrayControllerDeclarationAST & inOperand) const {
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

GALGAS_arrayControllerDeclarationAST::GALGAS_arrayControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST::GALGAS_arrayControllerDeclarationAST (const cPtr_arrayControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                            const GALGAS_lstring & inAttribute_mControllerName,
                                                                                            const GALGAS_arrayControllerBoundModelAST & inAttribute_mModel,
                                                                                            const GALGAS_lstring & inAttribute_mToManyPropertyName
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mModel.isValid () && inAttribute_mToManyPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerDeclarationAST (inAttribute_mClassName, inAttribute_mControllerName, inAttribute_mModel, inAttribute_mToManyPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerDeclarationAST::setter_setMControllerName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerDeclarationAST::setter_setMModel (GALGAS_arrayControllerBoundModelAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mModel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerDeclarationAST::setter_setMToManyPropertyName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mToManyPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::readProperty_mControllerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerDeclarationAST::readProperty_mModel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_arrayControllerBoundModelAST () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mModel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::readProperty_mToManyPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mToManyPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_arrayControllerDeclarationAST::cPtr_arrayControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                        const GALGAS_lstring & in_mControllerName,
                                                                        const GALGAS_arrayControllerBoundModelAST & in_mModel,
                                                                        const GALGAS_lstring & in_mToManyPropertyName
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mControllerName (in_mControllerName),
mProperty_mModel (in_mModel),
mProperty_mToManyPropertyName (in_mToManyPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

void cPtr_arrayControllerDeclarationAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@arrayControllerDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mModel, mProperty_mToManyPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ("arrayControllerDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST result ;
  const GALGAS_arrayControllerDeclarationAST * p = (const GALGAS_arrayControllerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayControllerDeclarationAST_2D_weak::objectCompare (const GALGAS_arrayControllerDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_arrayControllerDeclarationAST_2D_weak::GALGAS_arrayControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak & GALGAS_arrayControllerDeclarationAST_2D_weak::operator = (const GALGAS_arrayControllerDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak::GALGAS_arrayControllerDeclarationAST_2D_weak (const GALGAS_arrayControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST_2D_weak GALGAS_arrayControllerDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST_2D_weak::bang_arrayControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
// @arrayControllerGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_arrayControllerGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelTypeName.objectCompare (p->mProperty_mModelTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerModelKind.objectCompare (p->mProperty_mArrayControllerModelKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeIsGraphic.objectCompare (p->mProperty_mElementTypeIsGraphic) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_arrayControllerGeneration::objectCompare (const GALGAS_arrayControllerGeneration & inOperand) const {
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

GALGAS_arrayControllerGeneration::GALGAS_arrayControllerGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration::GALGAS_arrayControllerGeneration (const cPtr_arrayControllerGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                    const GALGAS_lstring & inAttribute_mControllerName,
                                                                                    const GALGAS_string & inAttribute_mModelTypeName,
                                                                                    const GALGAS_arrayControllerModelKind & inAttribute_mArrayControllerModelKind,
                                                                                    const GALGAS_string & inAttribute_mElementTypeName,
                                                                                    const GALGAS_bool & inAttribute_mElementTypeIsGraphic
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mModelTypeName.isValid () && inAttribute_mArrayControllerModelKind.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mElementTypeIsGraphic.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerGeneration (inAttribute_mOwnerName, inAttribute_mControllerName, inAttribute_mModelTypeName, inAttribute_mArrayControllerModelKind, inAttribute_mElementTypeName, inAttribute_mElementTypeIsGraphic COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMControllerName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMModelTypeName (GALGAS_string inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mModelTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMArrayControllerModelKind (GALGAS_arrayControllerModelKind inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mArrayControllerModelKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMElementTypeName (GALGAS_string inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMElementTypeIsGraphic (GALGAS_bool inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mElementTypeIsGraphic = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerGeneration::readProperty_mOwnerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerGeneration::readProperty_mControllerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerGeneration::readProperty_mModelTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerGeneration::readProperty_mArrayControllerModelKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_arrayControllerModelKind () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mArrayControllerModelKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerGeneration::readProperty_mElementTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mElementTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerGeneration::readProperty_mElementTypeIsGraphic (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mElementTypeIsGraphic ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_arrayControllerGeneration::cPtr_arrayControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                                const GALGAS_lstring & in_mControllerName,
                                                                const GALGAS_string & in_mModelTypeName,
                                                                const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                                const GALGAS_string & in_mElementTypeName,
                                                                const GALGAS_bool & in_mElementTypeIsGraphic
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mControllerName (in_mControllerName),
mProperty_mModelTypeName (in_mModelTypeName),
mProperty_mArrayControllerModelKind (in_mArrayControllerModelKind),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mElementTypeIsGraphic (in_mElementTypeIsGraphic) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration ;
}

void cPtr_arrayControllerGeneration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@arrayControllerGeneration:" ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerModelKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeIsGraphic.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelTypeName, mProperty_mArrayControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerGeneration ("arrayControllerGeneration",
                                                  & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration result ;
  const GALGAS_arrayControllerGeneration * p = (const GALGAS_arrayControllerGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayControllerGeneration_2D_weak::objectCompare (const GALGAS_arrayControllerGeneration_2D_weak & inOperand) const {
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

GALGAS_arrayControllerGeneration_2D_weak::GALGAS_arrayControllerGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak & GALGAS_arrayControllerGeneration_2D_weak::operator = (const GALGAS_arrayControllerGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak::GALGAS_arrayControllerGeneration_2D_weak (const GALGAS_arrayControllerGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration_2D_weak GALGAS_arrayControllerGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration_2D_weak::bang_arrayControllerGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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

GALGAS_tableViewColumnBindingAST::GALGAS_tableViewColumnBindingAST (void) :
mProperty_mRunActionName (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mRegularBindingList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST::~ GALGAS_tableViewColumnBindingAST (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST::GALGAS_tableViewColumnBindingAST (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_multipleBindingDescriptor & inOperand1,
                                                                    const GALGAS_multipleBindingDescriptor & inOperand2,
                                                                    const GALGAS_regularBindingList & inOperand3) :
mProperty_mRunActionName (inOperand0),
mProperty_mEnabledBindingDescriptor (inOperand1),
mProperty_mHiddenBindingDescriptor (inOperand2),
mProperty_mRegularBindingList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST GALGAS_tableViewColumnBindingAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_multipleBindingDescriptor & inOperand1,
                                                                                    const GALGAS_multipleBindingDescriptor & inOperand2,
                                                                                    const GALGAS_regularBindingList & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewColumnBindingAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_tableViewColumnBindingAST (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tableViewColumnBindingAST::objectCompare (const GALGAS_tableViewColumnBindingAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRunActionName.objectCompare (inOperand.mProperty_mRunActionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnabledBindingDescriptor.objectCompare (inOperand.mProperty_mEnabledBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHiddenBindingDescriptor.objectCompare (inOperand.mProperty_mHiddenBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularBindingList.objectCompare (inOperand.mProperty_mRegularBindingList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableViewColumnBindingAST::isValid (void) const {
  return mProperty_mRunActionName.isValid () && mProperty_mEnabledBindingDescriptor.isValid () && mProperty_mHiddenBindingDescriptor.isValid () && mProperty_mRegularBindingList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewColumnBindingAST::drop (void) {
  mProperty_mRunActionName.drop () ;
  mProperty_mEnabledBindingDescriptor.drop () ;
  mProperty_mHiddenBindingDescriptor.drop () ;
  mProperty_mRegularBindingList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewColumnBindingAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @tableViewColumnBindingAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRunActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewColumnBindingAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewColumnBindingAST ("tableViewColumnBindingAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewColumnBindingAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewColumnBindingAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewColumnBindingAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewColumnBindingAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST GALGAS_tableViewColumnBindingAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableViewColumnBindingAST result ;
  const GALGAS_tableViewColumnBindingAST * p = (const GALGAS_tableViewColumnBindingAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewColumnBindingAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewColumnBindingAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @tableViewControllerDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_tableViewControllerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRoot.objectCompare (p->mProperty_mIsRoot) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyPropertyName.objectCompare (p->mProperty_mToManyPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerBoundColumnListAST.objectCompare (p->mProperty_mTableViewControllerBoundColumnListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerAttributListAST.objectCompare (p->mProperty_mTableViewControllerAttributListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_tableViewControllerDeclarationAST::objectCompare (const GALGAS_tableViewControllerDeclarationAST & inOperand) const {
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

GALGAS_tableViewControllerDeclarationAST::GALGAS_tableViewControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST GALGAS_tableViewControllerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_tableViewControllerDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (HERE),
                                                                    GALGAS_tableViewControllerAttributListAST::constructor_emptyList (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST::GALGAS_tableViewControllerDeclarationAST (const cPtr_tableViewControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tableViewControllerDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST GALGAS_tableViewControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                    const GALGAS_lstring & inAttribute_mControllerName,
                                                                                                    const GALGAS_bool & inAttribute_mIsRoot,
                                                                                                    const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                                    const GALGAS_lstring & inAttribute_mToManyPropertyName,
                                                                                                    const GALGAS_tableViewControllerBoundColumnListAST & inAttribute_mTableViewControllerBoundColumnListAST,
                                                                                                    const GALGAS_tableViewControllerAttributListAST & inAttribute_mTableViewControllerAttributListAST
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mIsRoot.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mToManyPropertyName.isValid () && inAttribute_mTableViewControllerBoundColumnListAST.isValid () && inAttribute_mTableViewControllerAttributListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tableViewControllerDeclarationAST (inAttribute_mClassName, inAttribute_mControllerName, inAttribute_mIsRoot, inAttribute_mRootEntityName, inAttribute_mToManyPropertyName, inAttribute_mTableViewControllerBoundColumnListAST, inAttribute_mTableViewControllerAttributListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMControllerName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMIsRoot (GALGAS_bool inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mIsRoot = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMToManyPropertyName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mToManyPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMTableViewControllerBoundColumnListAST (GALGAS_tableViewControllerBoundColumnListAST inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mTableViewControllerBoundColumnListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMTableViewControllerAttributListAST (GALGAS_tableViewControllerAttributListAST inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mTableViewControllerAttributListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerDeclarationAST::readProperty_mControllerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    return p->mProperty_mControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableViewControllerDeclarationAST::readProperty_mIsRoot (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    return p->mProperty_mIsRoot ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerDeclarationAST::readProperty_mRootEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerDeclarationAST::readProperty_mToManyPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    return p->mProperty_mToManyPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerDeclarationAST::readProperty_mTableViewControllerBoundColumnListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_tableViewControllerBoundColumnListAST () ;
  }else{
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    return p->mProperty_mTableViewControllerBoundColumnListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerDeclarationAST::readProperty_mTableViewControllerAttributListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_tableViewControllerAttributListAST () ;
  }else{
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    return p->mProperty_mTableViewControllerAttributListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @tableViewControllerDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_tableViewControllerDeclarationAST::cPtr_tableViewControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_lstring & in_mControllerName,
                                                                                const GALGAS_bool & in_mIsRoot,
                                                                                const GALGAS_lstring & in_mRootEntityName,
                                                                                const GALGAS_lstring & in_mToManyPropertyName,
                                                                                const GALGAS_tableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                                const GALGAS_tableViewControllerAttributListAST & in_mTableViewControllerAttributListAST
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mControllerName (in_mControllerName),
mProperty_mIsRoot (in_mIsRoot),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mToManyPropertyName (in_mToManyPropertyName),
mProperty_mTableViewControllerBoundColumnListAST (in_mTableViewControllerBoundColumnListAST),
mProperty_mTableViewControllerAttributListAST (in_mTableViewControllerAttributListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_tableViewControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ;
}

void cPtr_tableViewControllerDeclarationAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@tableViewControllerDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsRoot.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerAttributListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tableViewControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tableViewControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mIsRoot, mProperty_mRootEntityName, mProperty_mToManyPropertyName, mProperty_mTableViewControllerBoundColumnListAST, mProperty_mTableViewControllerAttributListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ("tableViewControllerDeclarationAST",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST GALGAS_tableViewControllerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerDeclarationAST result ;
  const GALGAS_tableViewControllerDeclarationAST * p = (const GALGAS_tableViewControllerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tableViewControllerDeclarationAST_2D_weak::objectCompare (const GALGAS_tableViewControllerDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_tableViewControllerDeclarationAST_2D_weak::GALGAS_tableViewControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST_2D_weak & GALGAS_tableViewControllerDeclarationAST_2D_weak::operator = (const GALGAS_tableViewControllerDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST_2D_weak::GALGAS_tableViewControllerDeclarationAST_2D_weak (const GALGAS_tableViewControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST_2D_weak GALGAS_tableViewControllerDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_tableViewControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST GALGAS_tableViewControllerDeclarationAST_2D_weak::bang_tableViewControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_tableViewControllerDeclarationAST) ;
      result = GALGAS_tableViewControllerDeclarationAST ((cPtr_tableViewControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST_2D_weak ("tableViewControllerDeclarationAST-weak",
                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST_2D_weak GALGAS_tableViewControllerDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerDeclarationAST_2D_weak result ;
  const GALGAS_tableViewControllerDeclarationAST_2D_weak * p = (const GALGAS_tableViewControllerDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @tableViewControllerGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_tableViewControllerGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerBoundColumnListForGeneration.objectCompare (p->mProperty_mTableViewControllerBoundColumnListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerSortedColumnListForGeneration.objectCompare (p->mProperty_mTableViewControllerSortedColumnListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelTypeName.objectCompare (p->mProperty_mModelTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerModelKind.objectCompare (p->mProperty_mTableViewControllerModelKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeIsGraphic.objectCompare (p->mProperty_mElementTypeIsGraphic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeListForGeneration.objectCompare (p->mProperty_mAttributeListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_tableViewControllerGeneration::objectCompare (const GALGAS_tableViewControllerGeneration & inOperand) const {
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

GALGAS_tableViewControllerGeneration::GALGAS_tableViewControllerGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration::GALGAS_tableViewControllerGeneration (const cPtr_tableViewControllerGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tableViewControllerGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration GALGAS_tableViewControllerGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                            const GALGAS_lstring & inAttribute_mControllerName,
                                                                                            const GALGAS_string & inAttribute_mModelString,
                                                                                            const GALGAS_tableViewControllerBoundColumnListForGeneration & inAttribute_mTableViewControllerBoundColumnListForGeneration,
                                                                                            const GALGAS_tableViewControllerSortedColumnListForGeneration & inAttribute_mTableViewControllerSortedColumnListForGeneration,
                                                                                            const GALGAS_string & inAttribute_mModelTypeName,
                                                                                            const GALGAS_tableViewControllerModelKind & inAttribute_mTableViewControllerModelKind,
                                                                                            const GALGAS_string & inAttribute_mElementTypeName,
                                                                                            const GALGAS_bool & inAttribute_mElementTypeIsGraphic,
                                                                                            const GALGAS__32_stringlist & inAttribute_mAttributeListForGeneration
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mTableViewControllerBoundColumnListForGeneration.isValid () && inAttribute_mTableViewControllerSortedColumnListForGeneration.isValid () && inAttribute_mModelTypeName.isValid () && inAttribute_mTableViewControllerModelKind.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mElementTypeIsGraphic.isValid () && inAttribute_mAttributeListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tableViewControllerGeneration (inAttribute_mOwnerName, inAttribute_mControllerName, inAttribute_mModelString, inAttribute_mTableViewControllerBoundColumnListForGeneration, inAttribute_mTableViewControllerSortedColumnListForGeneration, inAttribute_mModelTypeName, inAttribute_mTableViewControllerModelKind, inAttribute_mElementTypeName, inAttribute_mElementTypeIsGraphic, inAttribute_mAttributeListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMControllerName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMModelString (GALGAS_string inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMTableViewControllerBoundColumnListForGeneration (GALGAS_tableViewControllerBoundColumnListForGeneration inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mTableViewControllerBoundColumnListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMTableViewControllerSortedColumnListForGeneration (GALGAS_tableViewControllerSortedColumnListForGeneration inValue
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mTableViewControllerSortedColumnListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMModelTypeName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mModelTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMTableViewControllerModelKind (GALGAS_tableViewControllerModelKind inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mTableViewControllerModelKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMElementTypeName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMElementTypeIsGraphic (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mElementTypeIsGraphic = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMAttributeListForGeneration (GALGAS__32_stringlist inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mAttributeListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerGeneration::readProperty_mOwnerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerGeneration::readProperty_mControllerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    return p->mProperty_mControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerGeneration::readProperty_mModelString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerGeneration::readProperty_mTableViewControllerBoundColumnListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_tableViewControllerBoundColumnListForGeneration () ;
  }else{
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerBoundColumnListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration GALGAS_tableViewControllerGeneration::readProperty_mTableViewControllerSortedColumnListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_tableViewControllerSortedColumnListForGeneration () ;
  }else{
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerSortedColumnListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerGeneration::readProperty_mModelTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    return p->mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind GALGAS_tableViewControllerGeneration::readProperty_mTableViewControllerModelKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_tableViewControllerModelKind () ;
  }else{
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerModelKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerGeneration::readProperty_mElementTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    return p->mProperty_mElementTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableViewControllerGeneration::readProperty_mElementTypeIsGraphic (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    return p->mProperty_mElementTypeIsGraphic ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_tableViewControllerGeneration::readProperty_mAttributeListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS__32_stringlist () ;
  }else{
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    return p->mProperty_mAttributeListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @tableViewControllerGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_tableViewControllerGeneration::cPtr_tableViewControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                                        const GALGAS_lstring & in_mControllerName,
                                                                        const GALGAS_string & in_mModelString,
                                                                        const GALGAS_tableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                                        const GALGAS_tableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                                        const GALGAS_string & in_mModelTypeName,
                                                                        const GALGAS_tableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                                        const GALGAS_string & in_mElementTypeName,
                                                                        const GALGAS_bool & in_mElementTypeIsGraphic,
                                                                        const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mControllerName (in_mControllerName),
mProperty_mModelString (in_mModelString),
mProperty_mTableViewControllerBoundColumnListForGeneration (in_mTableViewControllerBoundColumnListForGeneration),
mProperty_mTableViewControllerSortedColumnListForGeneration (in_mTableViewControllerSortedColumnListForGeneration),
mProperty_mModelTypeName (in_mModelTypeName),
mProperty_mTableViewControllerModelKind (in_mTableViewControllerModelKind),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mElementTypeIsGraphic (in_mElementTypeIsGraphic),
mProperty_mAttributeListForGeneration (in_mAttributeListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_tableViewControllerGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerGeneration ;
}

void cPtr_tableViewControllerGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@tableViewControllerGeneration:" ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerBoundColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerSortedColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerModelKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeIsGraphic.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tableViewControllerGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tableViewControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelString, mProperty_mTableViewControllerBoundColumnListForGeneration, mProperty_mTableViewControllerSortedColumnListForGeneration, mProperty_mModelTypeName, mProperty_mTableViewControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic, mProperty_mAttributeListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerGeneration ("tableViewControllerGeneration",
                                                      & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration GALGAS_tableViewControllerGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerGeneration result ;
  const GALGAS_tableViewControllerGeneration * p = (const GALGAS_tableViewControllerGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tableViewControllerGeneration_2D_weak::objectCompare (const GALGAS_tableViewControllerGeneration_2D_weak & inOperand) const {
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

GALGAS_tableViewControllerGeneration_2D_weak::GALGAS_tableViewControllerGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration_2D_weak & GALGAS_tableViewControllerGeneration_2D_weak::operator = (const GALGAS_tableViewControllerGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration_2D_weak::GALGAS_tableViewControllerGeneration_2D_weak (const GALGAS_tableViewControllerGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration_2D_weak GALGAS_tableViewControllerGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_tableViewControllerGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration GALGAS_tableViewControllerGeneration_2D_weak::bang_tableViewControllerGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_tableViewControllerGeneration) ;
      result = GALGAS_tableViewControllerGeneration ((cPtr_tableViewControllerGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerGeneration_2D_weak ("tableViewControllerGeneration-weak",
                                                              & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration_2D_weak GALGAS_tableViewControllerGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerGeneration_2D_weak result ;
  const GALGAS_tableViewControllerGeneration_2D_weak * p = (const GALGAS_tableViewControllerGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutTableViewControllerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutTableViewControllerDeclarationAST * p = (const cPtr_autoLayoutTableViewControllerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRoot.objectCompare (p->mProperty_mIsRoot) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyPropertyName.objectCompare (p->mProperty_mToManyPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerBoundColumnListAST.objectCompare (p->mProperty_mTableViewControllerBoundColumnListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerAttributListAST.objectCompare (p->mProperty_mTableViewControllerAttributListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutTableViewControllerDeclarationAST::objectCompare (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inOperand) const {
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

GALGAS_autoLayoutTableViewControllerDeclarationAST::GALGAS_autoLayoutTableViewControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST GALGAS_autoLayoutTableViewControllerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                              GALGAS_lstring::constructor_default (HERE),
                                                                              GALGAS_bool::constructor_default (HERE),
                                                                              GALGAS_lstring::constructor_default (HERE),
                                                                              GALGAS_lstring::constructor_default (HERE),
                                                                              GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_emptyList (HERE),
                                                                              GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_emptyList (HERE)
                                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST::GALGAS_autoLayoutTableViewControllerDeclarationAST (const cPtr_autoLayoutTableViewControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST GALGAS_autoLayoutTableViewControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                                        const GALGAS_lstring & inAttribute_mControllerName,
                                                                                                                        const GALGAS_bool & inAttribute_mIsRoot,
                                                                                                                        const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                                                        const GALGAS_lstring & inAttribute_mToManyPropertyName,
                                                                                                                        const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & inAttribute_mTableViewControllerBoundColumnListAST,
                                                                                                                        const GALGAS_autoLayoutTableViewControllerAttributListAST & inAttribute_mTableViewControllerAttributListAST
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mIsRoot.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mToManyPropertyName.isValid () && inAttribute_mTableViewControllerBoundColumnListAST.isValid () && inAttribute_mTableViewControllerAttributListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerDeclarationAST (inAttribute_mClassName, inAttribute_mControllerName, inAttribute_mIsRoot, inAttribute_mRootEntityName, inAttribute_mToManyPropertyName, inAttribute_mTableViewControllerBoundColumnListAST, inAttribute_mTableViewControllerAttributListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerDeclarationAST::setter_setMControllerName (GALGAS_lstring inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerDeclarationAST::setter_setMIsRoot (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    p->mProperty_mIsRoot = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerDeclarationAST::setter_setMToManyPropertyName (GALGAS_lstring inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    p->mProperty_mToManyPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerDeclarationAST::setter_setMTableViewControllerBoundColumnListAST (GALGAS_autoLayoutTableViewControllerBoundColumnListAST inValue
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    p->mProperty_mTableViewControllerBoundColumnListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerDeclarationAST::setter_setMTableViewControllerAttributListAST (GALGAS_autoLayoutTableViewControllerAttributListAST inValue
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    p->mProperty_mTableViewControllerAttributListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mControllerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mIsRoot (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mIsRoot ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mRootEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mToManyPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mToManyPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mTableViewControllerBoundColumnListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutTableViewControllerBoundColumnListAST () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mTableViewControllerBoundColumnListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mTableViewControllerAttributListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutTableViewControllerAttributListAST () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mTableViewControllerAttributListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerDeclarationAST::cPtr_autoLayoutTableViewControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                                    const GALGAS_lstring & in_mControllerName,
                                                                                                    const GALGAS_bool & in_mIsRoot,
                                                                                                    const GALGAS_lstring & in_mRootEntityName,
                                                                                                    const GALGAS_lstring & in_mToManyPropertyName,
                                                                                                    const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                                                    const GALGAS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mControllerName (in_mControllerName),
mProperty_mIsRoot (in_mIsRoot),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mToManyPropertyName (in_mToManyPropertyName),
mProperty_mTableViewControllerBoundColumnListAST (in_mTableViewControllerBoundColumnListAST),
mProperty_mTableViewControllerAttributListAST (in_mTableViewControllerAttributListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutTableViewControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;
}

void cPtr_autoLayoutTableViewControllerDeclarationAST::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@autoLayoutTableViewControllerDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsRoot.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerAttributListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutTableViewControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mIsRoot, mProperty_mRootEntityName, mProperty_mToManyPropertyName, mProperty_mTableViewControllerBoundColumnListAST, mProperty_mTableViewControllerAttributListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ("autoLayoutTableViewControllerDeclarationAST",
                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST GALGAS_autoLayoutTableViewControllerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST result ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST * p = (const GALGAS_autoLayoutTableViewControllerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::objectCompare (const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak & GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::operator = (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::bang_autoLayoutTableViewControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
// @autoLayoutTableViewControllerGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutTableViewControllerGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutTableViewControllerGeneration * p = (const cPtr_autoLayoutTableViewControllerGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerBoundColumnListForGeneration.objectCompare (p->mProperty_mTableViewControllerBoundColumnListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerSortedColumnListForGeneration.objectCompare (p->mProperty_mTableViewControllerSortedColumnListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelTypeName.objectCompare (p->mProperty_mModelTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerModelKind.objectCompare (p->mProperty_mTableViewControllerModelKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeIsGraphic.objectCompare (p->mProperty_mElementTypeIsGraphic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeListForGeneration.objectCompare (p->mProperty_mAttributeListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutTableViewControllerGeneration::objectCompare (const GALGAS_autoLayoutTableViewControllerGeneration & inOperand) const {
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

GALGAS_autoLayoutTableViewControllerGeneration::GALGAS_autoLayoutTableViewControllerGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration::GALGAS_autoLayoutTableViewControllerGeneration (const cPtr_autoLayoutTableViewControllerGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration GALGAS_autoLayoutTableViewControllerGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                                                const GALGAS_lstring & inAttribute_mControllerName,
                                                                                                                const GALGAS_string & inAttribute_mModelString,
                                                                                                                const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inAttribute_mTableViewControllerBoundColumnListForGeneration,
                                                                                                                const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & inAttribute_mTableViewControllerSortedColumnListForGeneration,
                                                                                                                const GALGAS_string & inAttribute_mModelTypeName,
                                                                                                                const GALGAS_autoLayoutTableViewControllerModelKind & inAttribute_mTableViewControllerModelKind,
                                                                                                                const GALGAS_string & inAttribute_mElementTypeName,
                                                                                                                const GALGAS_bool & inAttribute_mElementTypeIsGraphic,
                                                                                                                const GALGAS__32_stringlist & inAttribute_mAttributeListForGeneration
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mTableViewControllerBoundColumnListForGeneration.isValid () && inAttribute_mTableViewControllerSortedColumnListForGeneration.isValid () && inAttribute_mModelTypeName.isValid () && inAttribute_mTableViewControllerModelKind.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mElementTypeIsGraphic.isValid () && inAttribute_mAttributeListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerGeneration (inAttribute_mOwnerName, inAttribute_mControllerName, inAttribute_mModelString, inAttribute_mTableViewControllerBoundColumnListForGeneration, inAttribute_mTableViewControllerSortedColumnListForGeneration, inAttribute_mModelTypeName, inAttribute_mTableViewControllerModelKind, inAttribute_mElementTypeName, inAttribute_mElementTypeIsGraphic, inAttribute_mAttributeListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerGeneration::setter_setMControllerName (GALGAS_lstring inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerGeneration::setter_setMModelString (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerGeneration::setter_setMTableViewControllerBoundColumnListForGeneration (GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration inValue
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    p->mProperty_mTableViewControllerBoundColumnListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerGeneration::setter_setMTableViewControllerSortedColumnListForGeneration (GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration inValue
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    p->mProperty_mTableViewControllerSortedColumnListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerGeneration::setter_setMModelTypeName (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    p->mProperty_mModelTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerGeneration::setter_setMTableViewControllerModelKind (GALGAS_autoLayoutTableViewControllerModelKind inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    p->mProperty_mTableViewControllerModelKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerGeneration::setter_setMElementTypeName (GALGAS_string inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerGeneration::setter_setMElementTypeIsGraphic (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    p->mProperty_mElementTypeIsGraphic = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerGeneration::setter_setMAttributeListForGeneration (GALGAS__32_stringlist inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    p->mProperty_mAttributeListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mOwnerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mControllerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mModelString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerBoundColumnListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerBoundColumnListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerSortedColumnListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerSortedColumnListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mModelTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerModelKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutTableViewControllerModelKind () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerModelKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mElementTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mElementTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mElementTypeIsGraphic (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mElementTypeIsGraphic ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mAttributeListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS__32_stringlist () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mAttributeListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerGeneration::cPtr_autoLayoutTableViewControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                                                            const GALGAS_lstring & in_mControllerName,
                                                                                            const GALGAS_string & in_mModelString,
                                                                                            const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                                                            const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                                                            const GALGAS_string & in_mModelTypeName,
                                                                                            const GALGAS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                                                            const GALGAS_string & in_mElementTypeName,
                                                                                            const GALGAS_bool & in_mElementTypeIsGraphic,
                                                                                            const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mControllerName (in_mControllerName),
mProperty_mModelString (in_mModelString),
mProperty_mTableViewControllerBoundColumnListForGeneration (in_mTableViewControllerBoundColumnListForGeneration),
mProperty_mTableViewControllerSortedColumnListForGeneration (in_mTableViewControllerSortedColumnListForGeneration),
mProperty_mModelTypeName (in_mModelTypeName),
mProperty_mTableViewControllerModelKind (in_mTableViewControllerModelKind),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mElementTypeIsGraphic (in_mElementTypeIsGraphic),
mProperty_mAttributeListForGeneration (in_mAttributeListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutTableViewControllerGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;
}

void cPtr_autoLayoutTableViewControllerGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@autoLayoutTableViewControllerGeneration:" ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerBoundColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerSortedColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerModelKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeIsGraphic.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutTableViewControllerGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelString, mProperty_mTableViewControllerBoundColumnListForGeneration, mProperty_mTableViewControllerSortedColumnListForGeneration, mProperty_mModelTypeName, mProperty_mTableViewControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic, mProperty_mAttributeListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ("autoLayoutTableViewControllerGeneration",
                                                                & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration GALGAS_autoLayoutTableViewControllerGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerGeneration result ;
  const GALGAS_autoLayoutTableViewControllerGeneration * p = (const GALGAS_autoLayoutTableViewControllerGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutTableViewControllerGeneration_2D_weak & inOperand) const {
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

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::GALGAS_autoLayoutTableViewControllerGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak & GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::operator = (const GALGAS_autoLayoutTableViewControllerGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::GALGAS_autoLayoutTableViewControllerGeneration_2D_weak (const GALGAS_autoLayoutTableViewControllerGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::bang_autoLayoutTableViewControllerGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
// @selectionControllerDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selectionControllerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectionControllerName.objectCompare (p->mProperty_mSelectionControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerName.objectCompare (p->mProperty_mModelControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerPropertyName.objectCompare (p->mProperty_mModelControllerPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectionEntityName.objectCompare (p->mProperty_mSelectionEntityName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selectionControllerDeclarationAST::objectCompare (const GALGAS_selectionControllerDeclarationAST & inOperand) const {
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

GALGAS_selectionControllerDeclarationAST::GALGAS_selectionControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectionControllerDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST::GALGAS_selectionControllerDeclarationAST (const cPtr_selectionControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                    const GALGAS_lstring & inAttribute_mSelectionControllerName,
                                                                                                    const GALGAS_lstring & inAttribute_mModelControllerName,
                                                                                                    const GALGAS_lstring & inAttribute_mModelControllerPropertyName,
                                                                                                    const GALGAS_lstring & inAttribute_mSelectionEntityName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mSelectionControllerName.isValid () && inAttribute_mModelControllerName.isValid () && inAttribute_mModelControllerPropertyName.isValid () && inAttribute_mSelectionEntityName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectionControllerDeclarationAST (inAttribute_mClassName, inAttribute_mSelectionControllerName, inAttribute_mModelControllerName, inAttribute_mModelControllerPropertyName, inAttribute_mSelectionEntityName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerDeclarationAST::setter_setMSelectionControllerName (GALGAS_lstring inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    p->mProperty_mSelectionControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerDeclarationAST::setter_setMModelControllerName (GALGAS_lstring inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    p->mProperty_mModelControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerDeclarationAST::setter_setMModelControllerPropertyName (GALGAS_lstring inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    p->mProperty_mModelControllerPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerDeclarationAST::setter_setMSelectionEntityName (GALGAS_lstring inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    p->mProperty_mSelectionEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::readProperty_mSelectionControllerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mSelectionControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::readProperty_mModelControllerName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mModelControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::readProperty_mModelControllerPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mModelControllerPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::readProperty_mSelectionEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mSelectionEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selectionControllerDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selectionControllerDeclarationAST::cPtr_selectionControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_lstring & in_mSelectionControllerName,
                                                                                const GALGAS_lstring & in_mModelControllerName,
                                                                                const GALGAS_lstring & in_mModelControllerPropertyName,
                                                                                const GALGAS_lstring & in_mSelectionEntityName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mSelectionControllerName (in_mSelectionControllerName),
mProperty_mModelControllerName (in_mModelControllerName),
mProperty_mModelControllerPropertyName (in_mModelControllerPropertyName),
mProperty_mSelectionEntityName (in_mSelectionEntityName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectionControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

void cPtr_selectionControllerDeclarationAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@selectionControllerDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelectionEntityName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectionControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectionControllerDeclarationAST (mProperty_mClassName, mProperty_mSelectionControllerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName, mProperty_mSelectionEntityName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selectionControllerDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ("selectionControllerDeclarationAST",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST result ;
  const GALGAS_selectionControllerDeclarationAST * p = (const GALGAS_selectionControllerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selectionControllerDeclarationAST_2D_weak::objectCompare (const GALGAS_selectionControllerDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_selectionControllerDeclarationAST_2D_weak::GALGAS_selectionControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak & GALGAS_selectionControllerDeclarationAST_2D_weak::operator = (const GALGAS_selectionControllerDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak::GALGAS_selectionControllerDeclarationAST_2D_weak (const GALGAS_selectionControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak GALGAS_selectionControllerDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST_2D_weak::bang_selectionControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
// @boolAsDefaultValue reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolAsDefaultValue::objectCompare (const GALGAS_boolAsDefaultValue & inOperand) const {
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

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAsDefaultValue) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_new (const GALGAS_lbool & inAttribute_mValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boolAsDefaultValue::setter_setMValue (GALGAS_lbool inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbool GALGAS_boolAsDefaultValue::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lbool () ;
  }else{
    cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolAsDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

void cPtr_boolAsDefaultValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@boolAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolAsDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolAsDefaultValue ("boolAsDefaultValue",
                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAsDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  const GALGAS_boolAsDefaultValue * p = (const GALGAS_boolAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolAsDefaultValue_2D_weak::objectCompare (const GALGAS_boolAsDefaultValue_2D_weak & inOperand) const {
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

GALGAS_boolAsDefaultValue_2D_weak::GALGAS_boolAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak & GALGAS_boolAsDefaultValue_2D_weak::operator = (const GALGAS_boolAsDefaultValue & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak::GALGAS_boolAsDefaultValue_2D_weak (const GALGAS_boolAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak GALGAS_boolAsDefaultValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue_2D_weak::bang_boolAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolAsDefaultValue result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
// @stringAsDefaultValue reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_stringAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringAsDefaultValue * p = (const cPtr_stringAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_stringAsDefaultValue::objectCompare (const GALGAS_stringAsDefaultValue & inOperand) const {
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

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_stringAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringAsDefaultValue) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mValue
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_stringAsDefaultValue::setter_setMValue (GALGAS_lstring inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_stringAsDefaultValue::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @stringAsDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_stringAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

void cPtr_stringAsDefaultValue::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@stringAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_stringAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@stringAsDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringAsDefaultValue ("stringAsDefaultValue",
                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringAsDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue result ;
  const GALGAS_stringAsDefaultValue * p = (const GALGAS_stringAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_stringAsDefaultValue_2D_weak::objectCompare (const GALGAS_stringAsDefaultValue_2D_weak & inOperand) const {
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

GALGAS_stringAsDefaultValue_2D_weak::GALGAS_stringAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak & GALGAS_stringAsDefaultValue_2D_weak::operator = (const GALGAS_stringAsDefaultValue & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak::GALGAS_stringAsDefaultValue_2D_weak (const GALGAS_stringAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak GALGAS_stringAsDefaultValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue_2D_weak::bang_stringAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_stringAsDefaultValue result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
// @identifierAsDefaultValue reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_identifierAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_identifierAsDefaultValue * p = (const cPtr_identifierAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_identifierAsDefaultValue::objectCompare (const GALGAS_identifierAsDefaultValue & inOperand) const {
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

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_identifierAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_identifierAsDefaultValue) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mValue
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_identifierAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_identifierAsDefaultValue::setter_setMValue (GALGAS_lstring inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_identifierAsDefaultValue::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @identifierAsDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_identifierAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

void cPtr_identifierAsDefaultValue::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@identifierAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_identifierAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_identifierAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@identifierAsDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_identifierAsDefaultValue ("identifierAsDefaultValue",
                                                 & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_identifierAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_identifierAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierAsDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue result ;
  const GALGAS_identifierAsDefaultValue * p = (const GALGAS_identifierAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_identifierAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_identifierAsDefaultValue_2D_weak::objectCompare (const GALGAS_identifierAsDefaultValue_2D_weak & inOperand) const {
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

GALGAS_identifierAsDefaultValue_2D_weak::GALGAS_identifierAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak & GALGAS_identifierAsDefaultValue_2D_weak::operator = (const GALGAS_identifierAsDefaultValue & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak::GALGAS_identifierAsDefaultValue_2D_weak (const GALGAS_identifierAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak GALGAS_identifierAsDefaultValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue_2D_weak::bang_identifierAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_identifierAsDefaultValue result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
// @prefsAsDefaultValue reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_prefsAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefsAsDefaultValue * p = (const cPtr_prefsAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mPrefPropertyName.objectCompare (p->mProperty_mPrefPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_prefsAsDefaultValue::objectCompare (const GALGAS_prefsAsDefaultValue & inOperand) const {
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

GALGAS_prefsAsDefaultValue::GALGAS_prefsAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_prefsAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue::GALGAS_prefsAsDefaultValue (const cPtr_prefsAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsAsDefaultValue) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mPrefPropertyName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefsAsDefaultValue result ;
  if (inAttribute_mPrefPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefsAsDefaultValue (inAttribute_mPrefPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefsAsDefaultValue::setter_setMPrefPropertyName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
    p->mProperty_mPrefPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_prefsAsDefaultValue::readProperty_mPrefPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
    return p->mProperty_mPrefPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @prefsAsDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_prefsAsDefaultValue::cPtr_prefsAsDefaultValue (const GALGAS_lstring & in_mPrefPropertyName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mPrefPropertyName (in_mPrefPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefsAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue ;
}

void cPtr_prefsAsDefaultValue::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@prefsAsDefaultValue:" ;
  mProperty_mPrefPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefsAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefsAsDefaultValue (mProperty_mPrefPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@prefsAsDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsAsDefaultValue ("prefsAsDefaultValue",
                                            & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsAsDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsAsDefaultValue result ;
  const GALGAS_prefsAsDefaultValue * p = (const GALGAS_prefsAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefsAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

