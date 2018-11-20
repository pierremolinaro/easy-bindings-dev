#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-4.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mExternFunctionName.objectCompare (p->mProperty_mExternFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerate.objectCompare (p->mProperty_mGenerate) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_transientPropertyGeneration::objectCompare (const GALGAS_transientPropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration::GALGAS_transientPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration::GALGAS_transientPropertyGeneration (const cPtr_transientPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientPropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                        const GALGAS_string & inAttribute_mClassName,
                                                                                        const GALGAS_typeKind & inAttribute_mType,
                                                                                        const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList,
                                                                                        const GALGAS_string & inAttribute_mExternFunctionName,
                                                                                        const GALGAS_bool & inAttribute_mGenerate
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mType.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mExternFunctionName.isValid () && inAttribute_mGenerate.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientPropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mType, inAttribute_mDependencyList, inAttribute_mExternFunctionName, inAttribute_mGenerate COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientPropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_transientPropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_transientPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cPtr_transientPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientPropertyGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration cPtr_transientPropertyGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientPropertyGeneration::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mExternFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_transientPropertyGeneration::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientPropertyGeneration::getter_mGenerate (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mGenerate ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_transientPropertyGeneration::getter_mGenerate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerate ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @transientPropertyGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientPropertyGeneration::cPtr_transientPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                    const GALGAS_string & in_mClassName,
                                                                    const GALGAS_typeKind & in_mType,
                                                                    const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                    const GALGAS_string & in_mExternFunctionName,
                                                                    const GALGAS_bool & in_mGenerate
                                                                    COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mType (in_mType),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mExternFunctionName (in_mExternFunctionName),
mProperty_mGenerate (in_mGenerate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mExternFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerate.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mExternFunctionName, mProperty_mGenerate COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @transientPropertyGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyGeneration ("transientPropertyGeneration",
                                                    & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_atomicPropertyDeclarationAST::objectCompare (const GALGAS_atomicPropertyDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mPropertyTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_atomicPropertyDeclarationAST::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractDefaultValue result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mDefaultValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cPtr_atomicPropertyDeclarationAST::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_atomicPropertyDeclarationAST::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mNeedsValidation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_atomicPropertyDeclarationAST::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @atomicPropertyDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_atomicPropertyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicPropertyDeclarationAST (mProperty_mClassName, mProperty_mPropertyTypeName, mProperty_mPropertyName, mProperty_mDefaultValue, mProperty_mNeedsValidation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @atomicPropertyDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ("atomicPropertyDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mOppositeRelationshipName.objectCompare (p->mProperty_mOppositeRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInverseRelationMultiplicity.objectCompare (p->mProperty_mInverseRelationMultiplicity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCascading.objectCompare (p->mProperty_mCascading) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_toOneRelationshipAST::objectCompare (const GALGAS_toOneRelationshipAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOneRelationshipAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                          const GALGAS_lstring & inAttribute_mDestinationEntityName,
                                                                          const GALGAS_lstring & inAttribute_mToOneRelationshipName,
                                                                          const GALGAS_lstring & inAttribute_mOppositeRelationshipName,
                                                                          const GALGAS_propertyMultiplicity & inAttribute_mInverseRelationMultiplicity,
                                                                          const GALGAS_bool & inAttribute_mCascading
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDestinationEntityName.isValid () && inAttribute_mToOneRelationshipName.isValid () && inAttribute_mOppositeRelationshipName.isValid () && inAttribute_mInverseRelationMultiplicity.isValid () && inAttribute_mCascading.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toOneRelationshipAST (inAttribute_mClassName, inAttribute_mDestinationEntityName, inAttribute_mToOneRelationshipName, inAttribute_mOppositeRelationshipName, inAttribute_mInverseRelationMultiplicity, inAttribute_mCascading COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mDestinationEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneRelationshipAST::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyMultiplicity result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cPtr_toOneRelationshipAST::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOneRelationshipAST::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mCascading ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_toOneRelationshipAST::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascading ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @toOneRelationshipAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_toOneRelationshipAST::cPtr_toOneRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_lstring & in_mDestinationEntityName,
                                                      const GALGAS_lstring & in_mToOneRelationshipName,
                                                      const GALGAS_lstring & in_mOppositeRelationshipName,
                                                      const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                      const GALGAS_bool & in_mCascading
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (in_mDestinationEntityName),
mProperty_mToOneRelationshipName (in_mToOneRelationshipName),
mProperty_mOppositeRelationshipName (in_mOppositeRelationshipName),
mProperty_mInverseRelationMultiplicity (in_mInverseRelationMultiplicity),
mProperty_mCascading (in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCascading.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_toOneRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toOneRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToOneRelationshipName, mProperty_mOppositeRelationshipName, mProperty_mInverseRelationMultiplicity, mProperty_mCascading COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @toOneRelationshipAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipAST ("toOneRelationshipAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mOppositeRelationshipName.objectCompare (p->mProperty_mOppositeRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInverseRelationMultiplicity.objectCompare (p->mProperty_mInverseRelationMultiplicity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityObservablePropertyMap.objectCompare (p->mProperty_mDestinationEntityObservablePropertyMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCascading.objectCompare (p->mProperty_mCascading) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_toOnePropertyGeneration::objectCompare (const GALGAS_toOnePropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (const cPtr_toOnePropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOnePropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                const GALGAS_string & inAttribute_mClassName,
                                                                                const GALGAS_propertyKind & inAttribute_mRelationshipType,
                                                                                const GALGAS_string & inAttribute_mOppositeRelationshipName,
                                                                                const GALGAS_propertyMultiplicity & inAttribute_mInverseRelationMultiplicity,
                                                                                const GALGAS_propertyMap & inAttribute_mDestinationEntityObservablePropertyMap,
                                                                                const GALGAS_bool & inAttribute_mCascading
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mRelationshipType.isValid () && inAttribute_mOppositeRelationshipName.isValid () && inAttribute_mInverseRelationMultiplicity.isValid () && inAttribute_mDestinationEntityObservablePropertyMap.isValid () && inAttribute_mCascading.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toOnePropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mRelationshipType, inAttribute_mOppositeRelationshipName, inAttribute_mInverseRelationMultiplicity, inAttribute_mDestinationEntityObservablePropertyMap, inAttribute_mCascading COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOnePropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_toOnePropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_toOnePropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cPtr_toOnePropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOnePropertyGeneration::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_toOnePropertyGeneration::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOnePropertyGeneration::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyMultiplicity result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cPtr_toOnePropertyGeneration::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_toOnePropertyGeneration::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap cPtr_toOnePropertyGeneration::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOnePropertyGeneration::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mCascading ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_toOnePropertyGeneration::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascading ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @toOnePropertyGeneration class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                            const GALGAS_string & in_mClassName,
                                                            const GALGAS_propertyKind & in_mRelationshipType,
                                                            const GALGAS_string & in_mOppositeRelationshipName,
                                                            const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                            const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                            const GALGAS_bool & in_mCascading
                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mRelationshipType (in_mRelationshipType),
mProperty_mOppositeRelationshipName (in_mOppositeRelationshipName),
mProperty_mInverseRelationMultiplicity (in_mInverseRelationMultiplicity),
mProperty_mDestinationEntityObservablePropertyMap (in_mDestinationEntityObservablePropertyMap),
mProperty_mCascading (in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCascading.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_toOnePropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toOnePropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mRelationshipType, mProperty_mOppositeRelationshipName, mProperty_mInverseRelationMultiplicity, mProperty_mDestinationEntityObservablePropertyMap, mProperty_mCascading COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @toOnePropertyGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGeneration ("toOnePropertyGeneration",
                                                & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOnePropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOnePropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mOppositeRelationshipName.objectCompare (p->mProperty_mOppositeRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCascading.objectCompare (p->mProperty_mCascading) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_toManyRelationshipAST::objectCompare (const GALGAS_toManyRelationshipAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_toManyRelationshipAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyRelationshipAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                            const GALGAS_lstring & inAttribute_mDestinationEntityName,
                                                                            const GALGAS_lstring & inAttribute_mToManyRelationshipName,
                                                                            const GALGAS_lstring & inAttribute_mOppositeRelationshipName,
                                                                            const GALGAS_bool & inAttribute_mCascading
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDestinationEntityName.isValid () && inAttribute_mToManyRelationshipName.isValid () && inAttribute_mOppositeRelationshipName.isValid () && inAttribute_mCascading.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyRelationshipAST (inAttribute_mClassName, inAttribute_mDestinationEntityName, inAttribute_mToManyRelationshipName, inAttribute_mOppositeRelationshipName, inAttribute_mCascading COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mDestinationEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toManyRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipAST::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mToManyRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toManyRelationshipAST::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipAST::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toManyRelationshipAST::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toManyRelationshipAST::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mCascading ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_toManyRelationshipAST::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascading ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @toManyRelationshipAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_toManyRelationshipAST::cPtr_toManyRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                        const GALGAS_lstring & in_mDestinationEntityName,
                                                        const GALGAS_lstring & in_mToManyRelationshipName,
                                                        const GALGAS_lstring & in_mOppositeRelationshipName,
                                                        const GALGAS_bool & in_mCascading
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (in_mDestinationEntityName),
mProperty_mToManyRelationshipName (in_mToManyRelationshipName),
mProperty_mOppositeRelationshipName (in_mOppositeRelationshipName),
mProperty_mCascading (in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCascading.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_toManyRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toManyRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToManyRelationshipName, mProperty_mOppositeRelationshipName, mProperty_mCascading COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @toManyRelationshipAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipAST ("toManyRelationshipAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_propertyArrayDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_propertyArrayDeclarationAST * p = (const cPtr_propertyArrayDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_propertyArrayDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementClassName.objectCompare (p->mProperty_mElementClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStoredArrayPropertyName.objectCompare (p->mProperty_mStoredArrayPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_propertyArrayDeclarationAST::objectCompare (const GALGAS_propertyArrayDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyArrayDeclarationAST::GALGAS_propertyArrayDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyArrayDeclarationAST GALGAS_propertyArrayDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_propertyArrayDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyArrayDeclarationAST::GALGAS_propertyArrayDeclarationAST (const cPtr_propertyArrayDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_propertyArrayDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyArrayDeclarationAST GALGAS_propertyArrayDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                        const GALGAS_lstring & inAttribute_mElementClassName,
                                                                                        const GALGAS_lstring & inAttribute_mStoredArrayPropertyName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyArrayDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mElementClassName.isValid () && inAttribute_mStoredArrayPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_propertyArrayDeclarationAST (inAttribute_mClassName, inAttribute_mElementClassName, inAttribute_mStoredArrayPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_propertyArrayDeclarationAST::getter_mElementClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_propertyArrayDeclarationAST * p = (const cPtr_propertyArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyArrayDeclarationAST) ;
    result = p->mProperty_mElementClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_propertyArrayDeclarationAST::getter_mElementClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_propertyArrayDeclarationAST::getter_mStoredArrayPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_propertyArrayDeclarationAST * p = (const cPtr_propertyArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyArrayDeclarationAST) ;
    result = p->mProperty_mStoredArrayPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_propertyArrayDeclarationAST::getter_mStoredArrayPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredArrayPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @propertyArrayDeclarationAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_propertyArrayDeclarationAST::cPtr_propertyArrayDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                    const GALGAS_lstring & in_mElementClassName,
                                                                    const GALGAS_lstring & in_mStoredArrayPropertyName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mElementClassName (in_mElementClassName),
mProperty_mStoredArrayPropertyName (in_mStoredArrayPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_propertyArrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyArrayDeclarationAST ;
}

void cPtr_propertyArrayDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@propertyArrayDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStoredArrayPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_propertyArrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_propertyArrayDeclarationAST (mProperty_mClassName, mProperty_mElementClassName, mProperty_mStoredArrayPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @propertyArrayDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyArrayDeclarationAST ("propertyArrayDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyArrayDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyArrayDeclarationAST GALGAS_propertyArrayDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyArrayDeclarationAST result ;
  const GALGAS_propertyArrayDeclarationAST * p = (const GALGAS_propertyArrayDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyArrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyArrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_booleanMultipleBindingLiteralIntForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_booleanMultipleBindingLiteralIntForGeneration::objectCompare (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (const cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (const GALGAS_uint & inAttribute_mValue
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_booleanMultipleBindingLiteralIntForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_booleanMultipleBindingLiteralIntForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                       Pointer class for @booleanMultipleBindingLiteralIntForGeneration class                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_booleanMultipleBindingLiteralIntForGeneration::cPtr_booleanMultipleBindingLiteralIntForGeneration (const GALGAS_uint & in_mValue
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_booleanMultipleBindingLiteralIntForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

void cPtr_booleanMultipleBindingLiteralIntForGeneration::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@booleanMultipleBindingLiteralIntForGeneration:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_booleanMultipleBindingLiteralIntForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanMultipleBindingLiteralIntForGeneration (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @booleanMultipleBindingLiteralIntForGeneration type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ("booleanMultipleBindingLiteralIntForGeneration",
                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_booleanMultipleBindingLiteralIntForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_booleanMultipleBindingLiteralIntForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanMultipleBindingLiteralIntForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mIsRoot.objectCompare (p->mProperty_mIsRoot) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyPropertyName.objectCompare (p->mProperty_mToManyPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_arrayControllerDeclarationAST::objectCompare (const GALGAS_arrayControllerDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationAST::GALGAS_arrayControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayControllerDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationAST::GALGAS_arrayControllerDeclarationAST (const cPtr_arrayControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                            const GALGAS_lstring & inAttribute_mControllerName,
                                                                                            const GALGAS_bool & inAttribute_mIsRoot,
                                                                                            const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                            const GALGAS_lstring & inAttribute_mToManyPropertyName
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mIsRoot.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mToManyPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerDeclarationAST (inAttribute_mClassName, inAttribute_mControllerName, inAttribute_mIsRoot, inAttribute_mRootEntityName, inAttribute_mToManyPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayControllerDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerDeclarationAST::getter_mIsRoot (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mIsRoot ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_arrayControllerDeclarationAST::getter_mIsRoot (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsRoot ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayControllerDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mToManyPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayControllerDeclarationAST::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @arrayControllerDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_arrayControllerDeclarationAST::cPtr_arrayControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                        const GALGAS_lstring & in_mControllerName,
                                                                        const GALGAS_bool & in_mIsRoot,
                                                                        const GALGAS_lstring & in_mRootEntityName,
                                                                        const GALGAS_lstring & in_mToManyPropertyName
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mControllerName (in_mControllerName),
mProperty_mIsRoot (in_mIsRoot),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mToManyPropertyName (in_mToManyPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mIsRoot.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_arrayControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mIsRoot, mProperty_mRootEntityName, mProperty_mToManyPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @arrayControllerDeclarationAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ("arrayControllerDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_arrayControllerGeneration::objectCompare (const GALGAS_arrayControllerGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerGeneration::GALGAS_arrayControllerGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerGeneration::GALGAS_arrayControllerGeneration (const cPtr_arrayControllerGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                    const GALGAS_lstring & inAttribute_mControllerName,
                                                                                    const GALGAS_string & inAttribute_mModelString,
                                                                                    const GALGAS_string & inAttribute_mModelTypeName,
                                                                                    const GALGAS_arrayControllerModelKind & inAttribute_mArrayControllerModelKind,
                                                                                    const GALGAS_string & inAttribute_mElementTypeName,
                                                                                    const GALGAS_bool & inAttribute_mElementTypeIsGraphic
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mModelTypeName.isValid () && inAttribute_mArrayControllerModelKind.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mElementTypeIsGraphic.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerGeneration (inAttribute_mOwnerName, inAttribute_mControllerName, inAttribute_mModelString, inAttribute_mModelTypeName, inAttribute_mArrayControllerModelKind, inAttribute_mElementTypeName, inAttribute_mElementTypeIsGraphic COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerGeneration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayControllerGeneration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mModelString ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerGeneration::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mModelTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerGeneration::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerGeneration::getter_mArrayControllerModelKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerModelKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mArrayControllerModelKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind cPtr_arrayControllerGeneration::getter_mArrayControllerModelKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerModelKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerGeneration::getter_mElementTypeIsGraphic (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mElementTypeIsGraphic ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_arrayControllerGeneration::getter_mElementTypeIsGraphic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeIsGraphic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @arrayControllerGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_arrayControllerGeneration::cPtr_arrayControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                                const GALGAS_lstring & in_mControllerName,
                                                                const GALGAS_string & in_mModelString,
                                                                const GALGAS_string & in_mModelTypeName,
                                                                const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                                const GALGAS_string & in_mElementTypeName,
                                                                const GALGAS_bool & in_mElementTypeIsGraphic
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mControllerName (in_mControllerName),
mProperty_mModelString (in_mModelString),
mProperty_mModelTypeName (in_mModelTypeName),
mProperty_mArrayControllerModelKind (in_mArrayControllerModelKind),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mElementTypeIsGraphic (in_mElementTypeIsGraphic) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mModelString.description (ioString, inIndentation+1) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_arrayControllerGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelString, mProperty_mModelTypeName, mProperty_mArrayControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @arrayControllerGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerGeneration ("arrayControllerGeneration",
                                                  & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewColumnBindingAST::GALGAS_tableViewColumnBindingAST (void) :
mProperty_mRunActionName (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mRegularBindingList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewColumnBindingAST::~ GALGAS_tableViewColumnBindingAST (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewColumnBindingAST::GALGAS_tableViewColumnBindingAST (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_multipleBindingDescriptor & inOperand1,
                                                                    const GALGAS_multipleBindingDescriptor & inOperand2,
                                                                    const GALGAS_regularBindingList & inOperand3) :
mProperty_mRunActionName (inOperand0),
mProperty_mEnabledBindingDescriptor (inOperand1),
mProperty_mHiddenBindingDescriptor (inOperand2),
mProperty_mRegularBindingList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_tableViewColumnBindingAST::isValid (void) const {
  return mProperty_mRunActionName.isValid () && mProperty_mEnabledBindingDescriptor.isValid () && mProperty_mHiddenBindingDescriptor.isValid () && mProperty_mRegularBindingList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewColumnBindingAST::drop (void) {
  mProperty_mRunActionName.drop () ;
  mProperty_mEnabledBindingDescriptor.drop () ;
  mProperty_mHiddenBindingDescriptor.drop () ;
  mProperty_mRegularBindingList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_tableViewColumnBindingAST::getter_mRunActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunActionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_tableViewColumnBindingAST::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnabledBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_tableViewColumnBindingAST::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHiddenBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_tableViewColumnBindingAST::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @tableViewColumnBindingAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewColumnBindingAST ("tableViewColumnBindingAST",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewColumnBindingAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewColumnBindingAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewColumnBindingAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewColumnBindingAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mFilterProperties.objectCompare (p->mProperty_mFilterProperties) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerBoundColumnListAST.objectCompare (p->mProperty_mTableViewControllerBoundColumnListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerAttributListAST.objectCompare (p->mProperty_mTableViewControllerAttributListAST) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_tableViewControllerDeclarationAST::objectCompare (const GALGAS_tableViewControllerDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerDeclarationAST::GALGAS_tableViewControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerDeclarationAST GALGAS_tableViewControllerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_tableViewControllerDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                    GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (HERE),
                                                                    GALGAS_tableViewControllerAttributListAST::constructor_emptyList (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerDeclarationAST::GALGAS_tableViewControllerDeclarationAST (const cPtr_tableViewControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tableViewControllerDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerDeclarationAST GALGAS_tableViewControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                    const GALGAS_lstring & inAttribute_mControllerName,
                                                                                                    const GALGAS_bool & inAttribute_mIsRoot,
                                                                                                    const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                                    const GALGAS_lstring & inAttribute_mToManyPropertyName,
                                                                                                    const GALGAS_lstringlist & inAttribute_mFilterProperties,
                                                                                                    const GALGAS_tableViewControllerBoundColumnListAST & inAttribute_mTableViewControllerBoundColumnListAST,
                                                                                                    const GALGAS_tableViewControllerAttributListAST & inAttribute_mTableViewControllerAttributListAST
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mIsRoot.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mToManyPropertyName.isValid () && inAttribute_mFilterProperties.isValid () && inAttribute_mTableViewControllerBoundColumnListAST.isValid () && inAttribute_mTableViewControllerAttributListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tableViewControllerDeclarationAST (inAttribute_mClassName, inAttribute_mControllerName, inAttribute_mIsRoot, inAttribute_mRootEntityName, inAttribute_mToManyPropertyName, inAttribute_mFilterProperties, inAttribute_mTableViewControllerBoundColumnListAST, inAttribute_mTableViewControllerAttributListAST COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_tableViewControllerDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_tableViewControllerDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_tableViewControllerDeclarationAST::getter_mIsRoot (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mIsRoot ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_tableViewControllerDeclarationAST::getter_mIsRoot (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsRoot ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_tableViewControllerDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_tableViewControllerDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_tableViewControllerDeclarationAST::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mToManyPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_tableViewControllerDeclarationAST::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_tableViewControllerDeclarationAST::getter_mFilterProperties (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mFilterProperties ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_tableViewControllerDeclarationAST::getter_mFilterProperties (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterProperties ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerDeclarationAST::getter_mTableViewControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mTableViewControllerBoundColumnListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListAST cPtr_tableViewControllerDeclarationAST::getter_mTableViewControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerBoundColumnListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerDeclarationAST::getter_mTableViewControllerAttributListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerAttributListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mTableViewControllerAttributListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerAttributListAST cPtr_tableViewControllerDeclarationAST::getter_mTableViewControllerAttributListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerAttributListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @tableViewControllerDeclarationAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_tableViewControllerDeclarationAST::cPtr_tableViewControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_lstring & in_mControllerName,
                                                                                const GALGAS_bool & in_mIsRoot,
                                                                                const GALGAS_lstring & in_mRootEntityName,
                                                                                const GALGAS_lstring & in_mToManyPropertyName,
                                                                                const GALGAS_lstringlist & in_mFilterProperties,
                                                                                const GALGAS_tableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                                const GALGAS_tableViewControllerAttributListAST & in_mTableViewControllerAttributListAST
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mControllerName (in_mControllerName),
mProperty_mIsRoot (in_mIsRoot),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mToManyPropertyName (in_mToManyPropertyName),
mProperty_mFilterProperties (in_mFilterProperties),
mProperty_mTableViewControllerBoundColumnListAST (in_mTableViewControllerBoundColumnListAST),
mProperty_mTableViewControllerAttributListAST (in_mTableViewControllerAttributListAST) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mFilterProperties.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerAttributListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_tableViewControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tableViewControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mIsRoot, mProperty_mRootEntityName, mProperty_mToManyPropertyName, mProperty_mFilterProperties, mProperty_mTableViewControllerBoundColumnListAST, mProperty_mTableViewControllerAttributListAST COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @tableViewControllerDeclarationAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ("tableViewControllerDeclarationAST",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mTableViewControllerFilterListForGeneration.objectCompare (p->mProperty_mTableViewControllerFilterListForGeneration) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_tableViewControllerGeneration::objectCompare (const GALGAS_tableViewControllerGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerGeneration::GALGAS_tableViewControllerGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerGeneration::GALGAS_tableViewControllerGeneration (const cPtr_tableViewControllerGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tableViewControllerGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerGeneration GALGAS_tableViewControllerGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                            const GALGAS_lstring & inAttribute_mControllerName,
                                                                                            const GALGAS_tableViewControllerFilterListForGeneration & inAttribute_mTableViewControllerFilterListForGeneration,
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
  if (inAttribute_mOwnerName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mTableViewControllerFilterListForGeneration.isValid () && inAttribute_mModelString.isValid () && inAttribute_mTableViewControllerBoundColumnListForGeneration.isValid () && inAttribute_mTableViewControllerSortedColumnListForGeneration.isValid () && inAttribute_mModelTypeName.isValid () && inAttribute_mTableViewControllerModelKind.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mElementTypeIsGraphic.isValid () && inAttribute_mAttributeListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tableViewControllerGeneration (inAttribute_mOwnerName, inAttribute_mControllerName, inAttribute_mTableViewControllerFilterListForGeneration, inAttribute_mModelString, inAttribute_mTableViewControllerBoundColumnListForGeneration, inAttribute_mTableViewControllerSortedColumnListForGeneration, inAttribute_mModelTypeName, inAttribute_mTableViewControllerModelKind, inAttribute_mElementTypeName, inAttribute_mElementTypeIsGraphic, inAttribute_mAttributeListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_tableViewControllerGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_tableViewControllerGeneration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_tableViewControllerGeneration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration GALGAS_tableViewControllerGeneration::getter_mTableViewControllerFilterListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerFilterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mTableViewControllerFilterListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration cPtr_tableViewControllerGeneration::getter_mTableViewControllerFilterListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerFilterListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mModelString ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_tableViewControllerGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerGeneration::getter_mTableViewControllerBoundColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mTableViewControllerBoundColumnListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration cPtr_tableViewControllerGeneration::getter_mTableViewControllerBoundColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerBoundColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerSortedColumnListForGeneration GALGAS_tableViewControllerGeneration::getter_mTableViewControllerSortedColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerSortedColumnListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mTableViewControllerSortedColumnListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerSortedColumnListForGeneration cPtr_tableViewControllerGeneration::getter_mTableViewControllerSortedColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerSortedColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerGeneration::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mModelTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_tableViewControllerGeneration::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerModelKind GALGAS_tableViewControllerGeneration::getter_mTableViewControllerModelKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerModelKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mTableViewControllerModelKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerModelKind cPtr_tableViewControllerGeneration::getter_mTableViewControllerModelKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerModelKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_tableViewControllerGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_tableViewControllerGeneration::getter_mElementTypeIsGraphic (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mElementTypeIsGraphic ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_tableViewControllerGeneration::getter_mElementTypeIsGraphic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeIsGraphic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_tableViewControllerGeneration::getter_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS__32_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mAttributeListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist cPtr_tableViewControllerGeneration::getter_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @tableViewControllerGeneration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_tableViewControllerGeneration::cPtr_tableViewControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                                        const GALGAS_lstring & in_mControllerName,
                                                                        const GALGAS_tableViewControllerFilterListForGeneration & in_mTableViewControllerFilterListForGeneration,
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
mProperty_mTableViewControllerFilterListForGeneration (in_mTableViewControllerFilterListForGeneration),
mProperty_mModelString (in_mModelString),
mProperty_mTableViewControllerBoundColumnListForGeneration (in_mTableViewControllerBoundColumnListForGeneration),
mProperty_mTableViewControllerSortedColumnListForGeneration (in_mTableViewControllerSortedColumnListForGeneration),
mProperty_mModelTypeName (in_mModelTypeName),
mProperty_mTableViewControllerModelKind (in_mTableViewControllerModelKind),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mElementTypeIsGraphic (in_mElementTypeIsGraphic),
mProperty_mAttributeListForGeneration (in_mAttributeListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mTableViewControllerFilterListForGeneration.description (ioString, inIndentation+1) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_tableViewControllerGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tableViewControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mTableViewControllerFilterListForGeneration, mProperty_mModelString, mProperty_mTableViewControllerBoundColumnListForGeneration, mProperty_mTableViewControllerSortedColumnListForGeneration, mProperty_mModelTypeName, mProperty_mTableViewControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic, mProperty_mAttributeListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @tableViewControllerGeneration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerGeneration ("tableViewControllerGeneration",
                                                      & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_selectionControllerDeclarationAST::objectCompare (const GALGAS_selectionControllerDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationAST::GALGAS_selectionControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectionControllerDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationAST::GALGAS_selectionControllerDeclarationAST (const cPtr_selectionControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                    const GALGAS_lstring & inAttribute_mSelectionControllerName,
                                                                                                    const GALGAS_lstring & inAttribute_mModelControllerName,
                                                                                                    const GALGAS_lstring & inAttribute_mModelControllerPropertyName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mSelectionControllerName.isValid () && inAttribute_mModelControllerName.isValid () && inAttribute_mModelControllerPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectionControllerDeclarationAST (inAttribute_mClassName, inAttribute_mSelectionControllerName, inAttribute_mModelControllerName, inAttribute_mModelControllerPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mSelectionControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mModelControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mModelControllerPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @selectionControllerDeclarationAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_selectionControllerDeclarationAST::cPtr_selectionControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_lstring & in_mSelectionControllerName,
                                                                                const GALGAS_lstring & in_mModelControllerName,
                                                                                const GALGAS_lstring & in_mModelControllerPropertyName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mSelectionControllerName (in_mSelectionControllerName),
mProperty_mModelControllerName (in_mModelControllerName),
mProperty_mModelControllerPropertyName (in_mModelControllerPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_selectionControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectionControllerDeclarationAST (mProperty_mClassName, mProperty_mSelectionControllerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @selectionControllerDeclarationAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ("selectionControllerDeclarationAST",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selectionControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selectionControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_proxyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyName.objectCompare (p->mProperty_mProxyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_proxyDeclarationAST::objectCompare (const GALGAS_proxyDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationAST::GALGAS_proxyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_proxyDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationAST::GALGAS_proxyDeclarationAST (const cPtr_proxyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_proxyDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_lstring & inAttribute_mProxyName,
                                                                        const GALGAS_lstring & inAttribute_mControllerName,
                                                                        const GALGAS_lstring & inAttribute_mPropertyName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mProxyName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_proxyDeclarationAST (inAttribute_mClassName, inAttribute_mProxyName, inAttribute_mControllerName, inAttribute_mPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_proxyDeclarationAST::getter_mProxyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mProxyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_proxyDeclarationAST::getter_mProxyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProxyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_proxyDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_proxyDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_proxyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_proxyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @proxyDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_proxyDeclarationAST::cPtr_proxyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_lstring & in_mProxyName,
                                                    const GALGAS_lstring & in_mControllerName,
                                                    const GALGAS_lstring & in_mPropertyName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mProxyName (in_mProxyName),
mProperty_mControllerName (in_mControllerName),
mProperty_mPropertyName (in_mPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_proxyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

void cPtr_proxyDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@proxyDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_proxyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_proxyDeclarationAST (mProperty_mClassName, mProperty_mProxyName, mProperty_mControllerName, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @proxyDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_proxyDeclarationAST ("proxyDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_proxyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_proxyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_boolAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_boolAsDefaultValue::objectCompare (const GALGAS_boolAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_new (const GALGAS_lbool & inAttribute_mValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbool GALGAS_boolAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbool result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbool cPtr_boolAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @boolAsDefaultValue class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_boolAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

void cPtr_boolAsDefaultValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@boolAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_boolAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @boolAsDefaultValue type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolAsDefaultValue ("boolAsDefaultValue",
                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_boolAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_boolAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_integerAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_integerAsDefaultValue::objectCompare (const GALGAS_integerAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerAsDefaultValue::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (const cPtr_integerAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint GALGAS_integerAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint cPtr_integerAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @integerAsDefaultValue class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_integerAsDefaultValue::cPtr_integerAsDefaultValue (const GALGAS_luint & in_mValue
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_integerAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

void cPtr_integerAsDefaultValue::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@integerAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_integerAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @integerAsDefaultValue type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerAsDefaultValue ("integerAsDefaultValue",
                                              & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_integerAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_integerAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_stringAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringAsDefaultValue * p = (const cPtr_stringAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_stringAsDefaultValue::objectCompare (const GALGAS_stringAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_stringAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mValue
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_stringAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_stringAsDefaultValue * p = (const cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_stringAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @stringAsDefaultValue class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_stringAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

void cPtr_stringAsDefaultValue::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@stringAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_stringAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @stringAsDefaultValue type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringAsDefaultValue ("stringAsDefaultValue",
                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_stringAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_stringAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_identifierAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_identifierAsDefaultValue * p = (const cPtr_identifierAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_identifierAsDefaultValue::objectCompare (const GALGAS_identifierAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_identifierAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_identifierAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mValue
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_identifierAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_identifierAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_identifierAsDefaultValue * p = (const cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_identifierAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @identifierAsDefaultValue class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_identifierAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

void cPtr_identifierAsDefaultValue::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@identifierAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_identifierAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_identifierAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @identifierAsDefaultValue type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_identifierAsDefaultValue ("identifierAsDefaultValue",
                                                 & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_identifierAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_identifierAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationStruct::GALGAS_generationStruct (void) :
mProperty_mValidationStubRoutineListForGeneration (),
mProperty_mFileGenerationList (),
mProperty_mEntityListForGeneration (),
mProperty_mGenerateEBManagedDocumentSwift (),
mProperty_mNeededOutletClasses (),
mProperty_mMainXibDescriptorList (),
mProperty_mSelectionControllerListForGeneration (),
mProperty_mPropertyClassList (),
mProperty_mTransientPropertyTypeList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationStruct::~ GALGAS_generationStruct (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationStruct::GALGAS_generationStruct (const GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                  const GALGAS_fileGenerationList & inOperand1,
                                                  const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                                  const GALGAS_bool & inOperand3,
                                                  const GALGAS_stringset & inOperand4,
                                                  const GALGAS_mainXibDescriptorList & inOperand5,
                                                  const GALGAS_selectionControllerForGeneration & inOperand6,
                                                  const GALGAS_stringlist & inOperand7,
                                                  const GALGAS_transientExternTypeList & inOperand8) :
mProperty_mValidationStubRoutineListForGeneration (inOperand0),
mProperty_mFileGenerationList (inOperand1),
mProperty_mEntityListForGeneration (inOperand2),
mProperty_mGenerateEBManagedDocumentSwift (inOperand3),
mProperty_mNeededOutletClasses (inOperand4),
mProperty_mMainXibDescriptorList (inOperand5),
mProperty_mSelectionControllerListForGeneration (inOperand6),
mProperty_mPropertyClassList (inOperand7),
mProperty_mTransientPropertyTypeList (inOperand8) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationStruct GALGAS_generationStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationStruct (GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (HERE),
                                  GALGAS_fileGenerationList::constructor_emptyList (HERE),
                                  GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (HERE),
                                  GALGAS_bool::constructor_default (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE),
                                  GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                  GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE),
                                  GALGAS_stringlist::constructor_emptyList (HERE),
                                  GALGAS_transientExternTypeList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationStruct GALGAS_generationStruct::constructor_new (const GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                                  const GALGAS_fileGenerationList & inOperand1,
                                                                  const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                                                  const GALGAS_bool & inOperand3,
                                                                  const GALGAS_stringset & inOperand4,
                                                                  const GALGAS_mainXibDescriptorList & inOperand5,
                                                                  const GALGAS_selectionControllerForGeneration & inOperand6,
                                                                  const GALGAS_stringlist & inOperand7,
                                                                  const GALGAS_transientExternTypeList & inOperand8 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_generationStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mGenerateEBManagedDocumentSwift.objectCompare (inOperand.mProperty_mGenerateEBManagedDocumentSwift) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeededOutletClasses.objectCompare (inOperand.mProperty_mNeededOutletClasses) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_generationStruct::isValid (void) const {
  return mProperty_mValidationStubRoutineListForGeneration.isValid () && mProperty_mFileGenerationList.isValid () && mProperty_mEntityListForGeneration.isValid () && mProperty_mGenerateEBManagedDocumentSwift.isValid () && mProperty_mNeededOutletClasses.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () && mProperty_mPropertyClassList.isValid () && mProperty_mTransientPropertyTypeList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_generationStruct::drop (void) {
  mProperty_mValidationStubRoutineListForGeneration.drop () ;
  mProperty_mFileGenerationList.drop () ;
  mProperty_mEntityListForGeneration.drop () ;
  mProperty_mGenerateEBManagedDocumentSwift.drop () ;
  mProperty_mNeededOutletClasses.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mSelectionControllerListForGeneration.drop () ;
  mProperty_mPropertyClassList.drop () ;
  mProperty_mTransientPropertyTypeList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    mProperty_mGenerateEBManagedDocumentSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyClassList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientPropertyTypeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_generationStruct::getter_mValidationStubRoutineListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValidationStubRoutineListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList GALGAS_generationStruct::getter_mFileGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_generationStruct::getter_mEntityListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_generationStruct::getter_mGenerateEBManagedDocumentSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerateEBManagedDocumentSwift ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_generationStruct::getter_mNeededOutletClasses (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeededOutletClasses ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList GALGAS_generationStruct::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainXibDescriptorList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_generationStruct::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_generationStruct::getter_mPropertyClassList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyClassList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList GALGAS_generationStruct::getter_mTransientPropertyTypeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientPropertyTypeList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @generationStruct type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generationStruct ("generationStruct",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_generationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationStruct ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_generationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationStruct (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (void) :
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XcodeProjectDescriptor::~ GALGAS_XcodeProjectDescriptor (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (const GALGAS_uint & inOperand0,
                                                              const GALGAS_string & inOperand1,
                                                              const GALGAS_stringlist & inOperand2,
                                                              const GALGAS_string & inOperand3,
                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                              const GALGAS__32_stringlist & inOperand7,
                                                              const GALGAS__32_stringlist & inOperand8,
                                                              const GALGAS__32_stringlist & inOperand9,
                                                              const GALGAS__32_stringlist & inOperand10,
                                                              const GALGAS__32_stringlist & inOperand11,
                                                              const GALGAS__32_stringlist & inOperand12,
                                                              const GALGAS_BuildFileList & inOperand13,
                                                              const GALGAS_string & inOperand14,
                                                              const GALGAS_stringlist & inOperand15,
                                                              const GALGAS_string & inOperand16,
                                                              const GALGAS__32_stringlist & inOperand17,
                                                              const GALGAS__32_stringlist & inOperand18,
                                                              const GALGAS__32_stringlist & inOperand19,
                                                              const GALGAS__32_stringlist & inOperand20) :
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XcodeProjectDescriptor (GALGAS_uint::constructor_default (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_XCodeGroupList::constructor_emptyList (HERE),
                                        GALGAS_XCodeToolTargetList::constructor_emptyList (HERE),
                                        GALGAS_XCodeAppTargetList::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS_BuildFileList::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_new (const GALGAS_uint & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_stringlist & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                                              const GALGAS__32_stringlist & inOperand7,
                                                                              const GALGAS__32_stringlist & inOperand8,
                                                                              const GALGAS__32_stringlist & inOperand9,
                                                                              const GALGAS__32_stringlist & inOperand10,
                                                                              const GALGAS__32_stringlist & inOperand11,
                                                                              const GALGAS__32_stringlist & inOperand12,
                                                                              const GALGAS_BuildFileList & inOperand13,
                                                                              const GALGAS_string & inOperand14,
                                                                              const GALGAS_stringlist & inOperand15,
                                                                              const GALGAS_string & inOperand16,
                                                                              const GALGAS__32_stringlist & inOperand17,
                                                                              const GALGAS__32_stringlist & inOperand18,
                                                                              const GALGAS__32_stringlist & inOperand19,
                                                                              const GALGAS__32_stringlist & inOperand20 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid ()) {
    result = GALGAS_XcodeProjectDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_XcodeProjectDescriptor::objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSequenceNumber.objectCompare (inOperand.mProperty_mSequenceNumber) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainGroupReference.objectCompare (inOperand.mProperty_mMainGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainGroupChildrenRefs.objectCompare (inOperand.mProperty_mMainGroupChildrenRefs) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProjectObjectReference.objectCompare (inOperand.mProperty_mProjectObjectReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupList.objectCompare (inOperand.mProperty_mGroupList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mToolTargetList.objectCompare (inOperand.mProperty_mToolTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAppTargetList.objectCompare (inOperand.mProperty_mAppTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCppFileList.objectCompare (inOperand.mProperty_mCppFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_M_5F_FileList.objectCompare (inOperand.mProperty_m_5F_M_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_MM_5F_FileList.objectCompare (inOperand.mProperty_m_5F_MM_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_SwiftFileList.objectCompare (inOperand.mProperty_m_5F_SwiftFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkFileList.objectCompare (inOperand.mProperty_mFrameworkFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHeaderFileList.objectCompare (inOperand.mProperty_mHeaderFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildFileList.objectCompare (inOperand.mProperty_mBuildFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultConfigurationRef.objectCompare (inOperand.mProperty_mDefaultConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultConfigurationSettingList.objectCompare (inOperand.mProperty_mDefaultConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProjectBuildConfigurationRef.objectCompare (inOperand.mProperty_mProjectBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfoPlistFileList.objectCompare (inOperand.mProperty_mInfoPlistFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXIB_5F_fileList.objectCompare (inOperand.mProperty_mXIB_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTIFF_5F_fileList.objectCompare (inOperand.mProperty_mTIFF_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mICNS_5F_fileList.objectCompare (inOperand.mProperty_mICNS_5F_fileList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_XcodeProjectDescriptor::isValid (void) const {
  return mProperty_mSequenceNumber.isValid () && mProperty_mMainGroupReference.isValid () && mProperty_mMainGroupChildrenRefs.isValid () && mProperty_mProjectObjectReference.isValid () && mProperty_mGroupList.isValid () && mProperty_mToolTargetList.isValid () && mProperty_mAppTargetList.isValid () && mProperty_mCppFileList.isValid () && mProperty_m_5F_M_5F_FileList.isValid () && mProperty_m_5F_MM_5F_FileList.isValid () && mProperty_m_5F_SwiftFileList.isValid () && mProperty_mFrameworkFileList.isValid () && mProperty_mHeaderFileList.isValid () && mProperty_mBuildFileList.isValid () && mProperty_mDefaultConfigurationRef.isValid () && mProperty_mDefaultConfigurationSettingList.isValid () && mProperty_mProjectBuildConfigurationRef.isValid () && mProperty_mInfoPlistFileList.isValid () && mProperty_mXIB_5F_fileList.isValid () && mProperty_mTIFF_5F_fileList.isValid () && mProperty_mICNS_5F_fileList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XcodeProjectDescriptor::drop (void) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XcodeProjectDescriptor::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @XcodeProjectDescriptor:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSequenceNumber.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainGroupChildrenRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProjectObjectReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mToolTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAppTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCppFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_M_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_MM_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_SwiftFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHeaderFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProjectBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfoPlistFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXIB_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTIFF_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mICNS_5F_fileList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_XcodeProjectDescriptor::getter_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSequenceNumber ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mMainGroupReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainGroupReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XcodeProjectDescriptor::getter_mMainGroupChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainGroupChildrenRefs ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mProjectObjectReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProjectObjectReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList GALGAS_XcodeProjectDescriptor::getter_mGroupList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeToolTargetList GALGAS_XcodeProjectDescriptor::getter_mToolTargetList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToolTargetList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList GALGAS_XcodeProjectDescriptor::getter_mAppTargetList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAppTargetList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mCppFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppFileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_M_5F_FileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_M_5F_FileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_MM_5F_FileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_MM_5F_FileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_SwiftFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_SwiftFileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mFrameworkFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkFileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mHeaderFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHeaderFileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_XcodeProjectDescriptor::getter_mBuildFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildFileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mDefaultConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultConfigurationRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XcodeProjectDescriptor::getter_mDefaultConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultConfigurationSettingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mProjectBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProjectBuildConfigurationRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mInfoPlistFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfoPlistFileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mXIB_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXIB_5F_fileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mTIFF_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTIFF_5F_fileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mICNS_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mICNS_5F_fileList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @XcodeProjectDescriptor type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  const GALGAS_XcodeProjectDescriptor * p = (const GALGAS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XcodeProjectDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XcodeProjectDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@XcodeProjectDescriptor addTIFF_file'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addTIFF_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 15)) ;
  }
  ioObject.mProperty_mTIFF_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 16)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@XcodeProjectDescriptor addInfoPlistFile'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addInfoPlistFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 24)) ;
  }
  ioObject.mProperty_mInfoPlistFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 25)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension method '@XcodeProjectDescriptor addXIBFile'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addXIBFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 33)) ;
  }
  ioObject.mProperty_mXIB_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 34)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@XcodeProjectDescriptor addFrameworkFile'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addFrameworkFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 42)) ;
  }
  ioObject.mProperty_mFrameworkFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 43)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension method '@XcodeProjectDescriptor addMFile'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inFileName,
                               GALGAS_string & outArgument_outFileRef,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 51)) ;
  }
  ioObject.mProperty_m_5F_M_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 52)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@XcodeProjectDescriptor addSwiftFile'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addSwiftFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inFileName,
                                   GALGAS_string & outArgument_outFileRef,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 60)) ;
  }
  ioObject.mProperty_m_5F_SwiftFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 61)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension method '@XcodeProjectDescriptor addMMFile'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addMMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                const GALGAS_string constinArgument_inFileName,
                                GALGAS_string & outArgument_outFileRef,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 69)) ;
  }
  ioObject.mProperty_m_5F_MM_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 70)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension method '@XcodeProjectDescriptor addCppFile'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addCppFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 78)) ;
  }
  ioObject.mProperty_mCppFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 79)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@XcodeProjectDescriptor addHeaderFile'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addHeaderFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inFileName,
                                    GALGAS_string & outArgument_outFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 87)) ;
  }
  ioObject.mProperty_mHeaderFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 88)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@XcodeProjectDescriptor addBuildFile'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addBuildFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inFileReference,
                                   const GALGAS_string constinArgument_inFileName,
                                   GALGAS_string & outArgument_outBuildRef,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 97)) ;
  }
  ioObject.mProperty_mBuildFileList.addAssign_operation (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 98)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@XcodeProjectDescriptor addToolTarget'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addToolTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inTargetName,
                                    const GALGAS_string constinArgument_inProductFileName,
                                    const GALGAS_stringlist constinArgument_inSourceList,
                                    const GALGAS_stringlist constinArgument_inToolFrameworksFileRefList,
                                    const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    GALGAS_string & outArgument_outTargetRef,
                                    GALGAS_string & outArgument_outProductFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 111)) ;
  }
  GALGAS_string var_buildPhaseRef_4229 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_4229, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 112)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 113)) ;
  }
  GALGAS_string var_buildConfigurationListRef_4336 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_4336, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 114)) ;
  }
  GALGAS_string var_buildConfigurationRef_4394 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_4394, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 115)) ;
  }
  GALGAS_string var_frameworkBuildRef_4448 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_4448, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 116)) ;
  }
  ioObject.mProperty_mToolTargetList.addAssign_operation (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_4229, var_buildConfigurationListRef_4336, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_4394, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_4448  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 117)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@XcodeProjectDescriptor addAppTarget'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addAppTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inTargetName,
                                   const GALGAS_string constinArgument_inProductFileName,
                                   const GALGAS_stringlist constinArgument_inSourceList,
                                   const GALGAS_stringlist constinArgument_inFrameworksFileRefList,
                                   const GALGAS_stringlist constinArgument_inResourceFileBuildRefs,
                                   const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                   const GALGAS_stringlist constinArgument_inDependentTargetRefList,
                                   const GALGAS__32_stringlist constinArgument_inProductCopyList,
                                   const GALGAS_string constinArgument_inInfoPList,
                                   GALGAS_string & outArgument_outProductFileRef,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 145)) ;
  }
  GALGAS_string var_buildPhaseRef_5539 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5539, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 146)) ;
  }
  GALGAS_string var_targetRef_5585 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_5585, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 147)) ;
  }
  GALGAS_string var_buildConfigurationListRef_5647 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5647, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 148)) ;
  }
  GALGAS_string var_buildConfigurationRef_5705 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5705, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 149)) ;
  }
  GALGAS_string var_frameworkBuildRef_5759 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_5759, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 150)) ;
  }
  GALGAS_string var_resourceBuildRef_5812 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_5812, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 151)) ;
  }
  GALGAS__32_stringlist var_dependentTargets_5845 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 152)) ;
  cEnumerator_stringlist enumerator_5890 (constinArgument_inDependentTargetRefList, kENUMERATION_UP) ;
  while (enumerator_5890.hasCurrentObject ()) {
    GALGAS_string var_dependencyBuildRef_5949 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_5949, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 154)) ;
    }
    var_dependentTargets_5845.addAssign_operation (var_dependencyBuildRef_5949, enumerator_5890.current_mValue (HERE)  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 155)) ;
    enumerator_5890.gotoNextObject () ;
  }
  GALGAS_stringlist var_resourceFileBuildRefs_6041 = constinArgument_inResourceFileBuildRefs ;
  cEnumerator__32_stringlist enumerator_6105 (constinArgument_inProductCopyList, kENUMERATION_UP) ;
  while (enumerator_6105.hasCurrentObject ()) {
    GALGAS_string var_buildRef_6192 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_6105.current_mValue_30_ (HERE), enumerator_6105.current_mValue_31_ (HERE), var_buildRef_6192, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 159)) ;
    }
    var_resourceFileBuildRefs_6041.addAssign_operation (var_buildRef_6192  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 160)) ;
    enumerator_6105.gotoNextObject () ;
  }
  ioObject.mProperty_mAppTargetList.addAssign_operation (var_targetRef_5585, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5539, var_buildConfigurationListRef_5647, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5705, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_5759, var_dependentTargets_5845, var_resourceBuildRef_5812, var_resourceFileBuildRefs_6041, constinArgument_inInfoPList  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 162)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension method '@XcodeProjectDescriptor addGroup'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inGroupName,
                               const GALGAS_string constinArgument_inGroupPath,
                               const GALGAS_stringlist constinArgument_inChildrenRefs,
                               GALGAS_string & outArgument_outGroupRef,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, ioObject.mProperty_mDefaultConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 188)) ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, ioObject.mProperty_mProjectBuildConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 191)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioObject.mProperty_mMainGroupReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 194)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 196)) ;
  }
  ioObject.mProperty_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 197)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@XcodeProjectDescriptor addGroupWithFiles'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addGroupWithFiles (GALGAS_XcodeProjectDescriptor & ioObject,
                                        const GALGAS_string constinArgument_inGroupName,
                                        const GALGAS_string constinArgument_inGroupPath,
                                        const GALGAS_stringset constinArgument_inFileNames,
                                        GALGAS_stringlist & ioArgument_ioCppFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioMFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioMMFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioSwiftFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioFrameWorkFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioResourceFileBuildRefs,
                                        GALGAS_string & outArgument_outGroupRef,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, ioObject.mProperty_mDefaultConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 214)) ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, ioObject.mProperty_mProjectBuildConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 217)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioObject.mProperty_mMainGroupReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 220)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 222)) ;
  }
  GALGAS_stringlist var_childrenRefs_8380 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 224)) ;
  cEnumerator_stringset enumerator_8410 (constinArgument_inFileNames, kENUMERATION_UP) ;
  while (enumerator_8410.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_8410.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 226)).objectCompare (GALGAS_string ("cpp"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_cppFileRef_8521 ;
        {
        extensionSetter_addCppFile (ioObject, enumerator_8410.current_key (HERE), var_cppFileRef_8521, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 227)) ;
        }
        var_childrenRefs_8380.addAssign_operation (var_cppFileRef_8521  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 228)) ;
        GALGAS_string var_buildRef_8646 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cppFileRef_8521, enumerator_8410.current_key (HERE), var_buildRef_8646, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 229)) ;
        }
        ioArgument_ioCppFileBuildRefs.addAssign_operation (var_buildRef_8646  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 230)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_8410.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 231)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_string var_headerFileRef_8800 ;
          {
          extensionSetter_addHeaderFile (ioObject, enumerator_8410.current_key (HERE), var_headerFileRef_8800, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 232)) ;
          }
          var_childrenRefs_8380.addAssign_operation (var_headerFileRef_8800  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 233)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsEqual, enumerator_8410.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 234)).objectCompare (GALGAS_string ("m"))).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_string var_m_5F_FileRef_8944 ;
            {
            extensionSetter_addMFile (ioObject, enumerator_8410.current_key (HERE), var_m_5F_FileRef_8944, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 235)) ;
            }
            GALGAS_string var_buildRef_9034 ;
            {
            extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_8944, enumerator_8410.current_key (HERE), var_buildRef_9034, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 236)) ;
            }
            var_childrenRefs_8380.addAssign_operation (var_m_5F_FileRef_8944  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 237)) ;
            ioArgument_ioMFileBuildRefs.addAssign_operation (var_buildRef_9034  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 238)) ;
          }
        }
        if (kBoolFalse == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, enumerator_8410.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 239)).objectCompare (GALGAS_string ("swift"))).boolEnum () ;
            if (kBoolTrue == test_6) {
              GALGAS_string var_swift_5F_FileRef_9222 ;
              {
              extensionSetter_addSwiftFile (ioObject, enumerator_8410.current_key (HERE), var_swift_5F_FileRef_9222, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 240)) ;
              }
              GALGAS_string var_buildRef_9316 ;
              {
              extensionSetter_addBuildFile (ioObject, var_swift_5F_FileRef_9222, enumerator_8410.current_key (HERE), var_buildRef_9316, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 241)) ;
              }
              var_childrenRefs_8380.addAssign_operation (var_swift_5F_FileRef_9222  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 242)) ;
              ioArgument_ioSwiftFileBuildRefs.addAssign_operation (var_buildRef_9316  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 243)) ;
            }
          }
          if (kBoolFalse == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (kIsEqual, enumerator_8410.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 244)).objectCompare (GALGAS_string ("mm"))).boolEnum () ;
              if (kBoolTrue == test_7) {
                GALGAS_string var_m_5F_FileRef_9502 ;
                {
                extensionSetter_addMMFile (ioObject, enumerator_8410.current_key (HERE), var_m_5F_FileRef_9502, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 245)) ;
                }
                GALGAS_string var_buildRef_9592 ;
                {
                extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_9502, enumerator_8410.current_key (HERE), var_buildRef_9592, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 246)) ;
                }
                var_childrenRefs_8380.addAssign_operation (var_m_5F_FileRef_9502  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 247)) ;
                ioArgument_ioMMFileBuildRefs.addAssign_operation (var_buildRef_9592  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 248)) ;
              }
            }
            if (kBoolFalse == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, enumerator_8410.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 249)).objectCompare (GALGAS_string ("framework"))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  GALGAS_string var_framework_5F_FileRef_9793 ;
                  {
                  extensionSetter_addFrameworkFile (ioObject, enumerator_8410.current_key (HERE), var_framework_5F_FileRef_9793, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 250)) ;
                  }
                  GALGAS_string var_buildRef_9891 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_9793, enumerator_8410.current_key (HERE), var_buildRef_9891, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 251)) ;
                  }
                  var_childrenRefs_8380.addAssign_operation (var_framework_5F_FileRef_9793  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 252)) ;
                  ioArgument_ioFrameWorkFileBuildRefs.addAssign_operation (var_buildRef_9891  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 253)) ;
                }
              }
              if (kBoolFalse == test_8) {
                enumGalgasBool test_9 = kBoolTrue ;
                if (kBoolTrue == test_9) {
                  test_9 = GALGAS_bool (kIsEqual, enumerator_8410.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 254)).objectCompare (GALGAS_string ("plist"))).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    GALGAS_string var_resource_5F_FileRef_10102 ;
                    {
                    extensionSetter_addInfoPlistFile (ioObject, enumerator_8410.current_key (HERE), var_resource_5F_FileRef_10102, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 255)) ;
                    }
                    var_childrenRefs_8380.addAssign_operation (var_resource_5F_FileRef_10102  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 256)) ;
                  }
                }
                if (kBoolFalse == test_9) {
                  enumGalgasBool test_10 = kBoolTrue ;
                  if (kBoolTrue == test_10) {
                    test_10 = GALGAS_bool (kIsEqual, enumerator_8410.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 257)).objectCompare (GALGAS_string ("xib"))).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      GALGAS_string var_resource_5F_FileRef_10260 ;
                      {
                      extensionSetter_addXIBFile (ioObject, enumerator_8410.current_key (HERE), var_resource_5F_FileRef_10260, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 258)) ;
                      }
                      var_childrenRefs_8380.addAssign_operation (var_resource_5F_FileRef_10260  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 259)) ;
                      GALGAS_string var_buildRef_10397 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_10260, enumerator_8410.current_key (HERE), var_buildRef_10397, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 260)) ;
                      }
                      ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef_10397  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 261)) ;
                    }
                  }
                  if (kBoolFalse == test_10) {
                    enumGalgasBool test_11 = kBoolTrue ;
                    if (kBoolTrue == test_11) {
                      test_11 = GALGAS_bool (kIsEqual, enumerator_8410.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 262)).objectCompare (GALGAS_string ("tiff"))).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        GALGAS_string var_resource_5F_FileRef_10561 ;
                        {
                        extensionSetter_addTIFF_5F_file (ioObject, enumerator_8410.current_key (HERE), var_resource_5F_FileRef_10561, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 263)) ;
                        }
                        var_childrenRefs_8380.addAssign_operation (var_resource_5F_FileRef_10561  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 264)) ;
                        GALGAS_string var_buildRef_10698 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_10561, enumerator_8410.current_key (HERE), var_buildRef_10698, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 265)) ;
                        }
                        ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef_10698  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 266)) ;
                      }
                    }
                    if (kBoolFalse == test_11) {
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (kIsEqual, enumerator_8410.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 267)).objectCompare (GALGAS_string ("icns"))).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          GALGAS_string var_resource_5F_FileRef_10862 ;
                          {
                          extensionSetter_addICNS_5F_file (ioObject, enumerator_8410.current_key (HERE), var_resource_5F_FileRef_10862, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 268)) ;
                          }
                          var_childrenRefs_8380.addAssign_operation (var_resource_5F_FileRef_10862  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 269)) ;
                          GALGAS_string var_buildRef_10999 ;
                          {
                          extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_10862, enumerator_8410.current_key (HERE), var_buildRef_10999, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 270)) ;
                          }
                          ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef_10999  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 271)) ;
                        }
                      }
                      if (kBoolFalse == test_12) {
                        TC_Array <C_FixItDescription> fixItArray13 ;
                        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 273)), GALGAS_string ("unhandled extension for file '").add_operation (enumerator_8410.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 273)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 273)), fixItArray13  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 273)) ;
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
    enumerator_8410.gotoNextObject () ;
  }
  ioObject.mProperty_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_8380  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 276)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@XcodeProjectDescriptor placeGroupAsMainGroup'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_placeGroupAsMainGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                                            const GALGAS_string constinArgument_inGroupRef,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mMainGroupChildrenRefs.addAssign_operation (constinArgument_inGroupRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 283)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Extension method '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addSettingsToDefaultConfiguration (GALGAS_XcodeProjectDescriptor & ioObject,
                                                        const GALGAS_stringlist constinArgument_inSettingList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mDefaultConfigurationSettingList.plusAssign_operation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 290)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@XcodeProjectDescriptor getReferenceKey'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_getReferenceKey (GALGAS_XcodeProjectDescriptor & ioObject,
                                      GALGAS_string & outArgument_outRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, ioObject.mProperty_mProjectObjectReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioObject.mProperty_mProjectObjectReference = ioObject.mProperty_mSequenceNumber.getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 351)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 351)).getter_rightSubString (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 351)) ;
      ioObject.mProperty_mSequenceNumber.increment_operation (inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 352)) ;
    }
  }
  outArgument_outRef = ioObject.mProperty_mSequenceNumber.getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 354)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 354)).getter_rightSubString (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 354)) ;
  ioObject.mProperty_mSequenceNumber.increment_operation (inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 355)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@XcodeProjectDescriptor generateAtPath'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateAtPath (const GALGAS_XcodeProjectDescriptor inObject,
                                     const GALGAS_string constinArgument_inPath,
                                     const GALGAS_string constinArgument_inCacheFilePath,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_contents_15931 = GALGAS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, inObject.mProperty_mProjectObjectReference, inObject.mProperty_mMainGroupReference, inObject.mProperty_mGroupList, inObject.mProperty_mMainGroupChildrenRefs, inObject.mProperty_mToolTargetList, inObject.mProperty_mAppTargetList, inObject.mProperty_mCppFileList, inObject.mProperty_m_5F_M_5F_FileList, inObject.mProperty_m_5F_MM_5F_FileList, inObject.mProperty_m_5F_SwiftFileList, inObject.mProperty_mFrameworkFileList, inObject.mProperty_mHeaderFileList, inObject.mProperty_mInfoPlistFileList, inObject.mProperty_mTIFF_5F_fileList, inObject.mProperty_mICNS_5F_fileList, inObject.mProperty_mXIB_5F_fileList, inObject.mProperty_mBuildFileList, inObject.mProperty_mDefaultConfigurationRef, inObject.mProperty_mDefaultConfigurationSettingList, inObject.mProperty_mProjectBuildConfigurationRef COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 419))) ;
  GALGAS_string var_projectCoreFile_16482 = constinArgument_inPath.add_operation (GALGAS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 441)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = var_projectCoreFile_16482.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 442)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 442)) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 442)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 442)) ;
    }
    GALGAS_bool test_2 = test_1 ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = GALGAS_bool (kIsNotEqual, GALGAS_string::constructor_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 442)).objectCompare (var_contents_15931)) ;
    }
    test_0 = test_2.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bool joker_16732 ; // Joker input parameter
      var_contents_15931.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_16732, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 443)) ;
      var_contents_15931.method_makeDirectoryAndWriteToFile (var_projectCoreFile_16482, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 444)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element::GALGAS_astDeclarationListEX_2D_element (void) :
mProperty_mDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element::~ GALGAS_astDeclarationListEX_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element::GALGAS_astDeclarationListEX_2D_element (const GALGAS_astDeclaration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element GALGAS_astDeclarationListEX_2D_element::constructor_new (const GALGAS_astDeclaration & inOperand0 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationListEX_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astDeclarationListEX_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_astDeclarationListEX_2D_element::objectCompare (const GALGAS_astDeclarationListEX_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclaration.objectCompare (inOperand.mProperty_mDeclaration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_astDeclarationListEX_2D_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX_2D_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @astDeclarationListEX-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration GALGAS_astDeclarationListEX_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclaration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @astDeclarationListEX-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationListEX_2D_element ("astDeclarationListEX-element",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_astDeclarationListEX_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationListEX_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_astDeclarationListEX_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationListEX_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element GALGAS_astDeclarationListEX_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationListEX_2D_element result ;
  const GALGAS_astDeclarationListEX_2D_element * p = (const GALGAS_astDeclarationListEX_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationListEX_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationListEX-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (void) :
mProperty_mPropertyDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element::~ GALGAS_declarationListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclarationAST & inOperand0) :
mProperty_mPropertyDeclaration (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::constructor_new (const GALGAS_abstractDeclarationAST & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_declarationListAST_2D_element::objectCompare (const GALGAS_declarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyDeclaration.objectCompare (inOperand.mProperty_mPropertyDeclaration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_declarationListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyDeclaration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST_2D_element::drop (void) {
  mProperty_mPropertyDeclaration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @declarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST GALGAS_declarationListAST_2D_element::getter_mPropertyDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyDeclaration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @declarationListAST-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationListAST_2D_element ("declarationListAST-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_declarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_declarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  const GALGAS_declarationListAST_2D_element * p = (const GALGAS_declarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element::GALGAS_externSwiftDelegateList_2D_element (void) :
mProperty_mExternSwiftDelegateName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element::~ GALGAS_externSwiftDelegateList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element::GALGAS_externSwiftDelegateList_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_mExternSwiftDelegateName (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftDelegateList_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_externSwiftDelegateList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_externSwiftDelegateList_2D_element::objectCompare (const GALGAS_externSwiftDelegateList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftDelegateName.objectCompare (inOperand.mProperty_mExternSwiftDelegateName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_externSwiftDelegateList_2D_element::isValid (void) const {
  return mProperty_mExternSwiftDelegateName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList_2D_element::drop (void) {
  mProperty_mExternSwiftDelegateName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @externSwiftDelegateList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExternSwiftDelegateName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externSwiftDelegateList_2D_element::getter_mExternSwiftDelegateName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @externSwiftDelegateList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ("externSwiftDelegateList-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externSwiftDelegateList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externSwiftDelegateList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftDelegateList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList_2D_element result ;
  const GALGAS_externSwiftDelegateList_2D_element * p = (const GALGAS_externSwiftDelegateList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftDelegateList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftDelegateList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element::GALGAS_externSwiftFunctionList_2D_element (void) :
mProperty_mExternSwiftFunctionName (),
mProperty_mCallerName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element::~ GALGAS_externSwiftFunctionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element::GALGAS_externSwiftFunctionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mExternSwiftFunctionName (inOperand0),
mProperty_mCallerName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftFunctionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externSwiftFunctionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_externSwiftFunctionList_2D_element::objectCompare (const GALGAS_externSwiftFunctionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionName.objectCompare (inOperand.mProperty_mExternSwiftFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCallerName.objectCompare (inOperand.mProperty_mCallerName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_externSwiftFunctionList_2D_element::isValid (void) const {
  return mProperty_mExternSwiftFunctionName.isValid () && mProperty_mCallerName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList_2D_element::drop (void) {
  mProperty_mExternSwiftFunctionName.drop () ;
  mProperty_mCallerName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @externSwiftFunctionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExternSwiftFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCallerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externSwiftFunctionList_2D_element::getter_mExternSwiftFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externSwiftFunctionList_2D_element::getter_mCallerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCallerName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @externSwiftFunctionList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ("externSwiftFunctionList-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externSwiftFunctionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externSwiftFunctionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftFunctionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  const GALGAS_externSwiftFunctionList_2D_element * p = (const GALGAS_externSwiftFunctionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftFunctionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element::GALGAS_externFunctionMap_2D_element (void) :
mProperty_lkey () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element::~ GALGAS_externFunctionMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element::GALGAS_externFunctionMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externFunctionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_externFunctionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_externFunctionMap_2D_element::objectCompare (const GALGAS_externFunctionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_externFunctionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externFunctionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externFunctionMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @externFunctionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externFunctionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @externFunctionMap-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionMap_2D_element ("externFunctionMap-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externFunctionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externFunctionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  const GALGAS_externFunctionMap_2D_element * p = (const GALGAS_externFunctionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mProperty_lkey () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  const GALGAS_enumConstantMap_2D_element * p = (const GALGAS_enumConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSuperClassName (),
mProperty_mHandlesRunAction (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandleEnabledBinding (),
mProperty_mHandleHiddenBinding (),
mProperty_mHandleGraphicControllerBinding (),
mProperty_mUserDefined () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element::~ GALGAS_outletClassMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_bool & inOperand3,
                                                                    const GALGAS_bool & inOperand4,
                                                                    const GALGAS_bool & inOperand5,
                                                                    const GALGAS_bool & inOperand6,
                                                                    const GALGAS_bool & inOperand7) :
mProperty_lkey (inOperand0),
mProperty_mSuperClassName (inOperand1),
mProperty_mHandlesRunAction (inOperand2),
mProperty_mHandlesTableValueBinding (inOperand3),
mProperty_mHandleEnabledBinding (inOperand4),
mProperty_mHandleHiddenBinding (inOperand5),
mProperty_mHandleGraphicControllerBinding (inOperand6),
mProperty_mUserDefined (inOperand7) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_bool & inOperand2,
                                                                                    const GALGAS_bool & inOperand3,
                                                                                    const GALGAS_bool & inOperand4,
                                                                                    const GALGAS_bool & inOperand5,
                                                                                    const GALGAS_bool & inOperand6,
                                                                                    const GALGAS_bool & inOperand7 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_outletClassMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletClassMap_2D_element::objectCompare (const GALGAS_outletClassMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSuperClassName.objectCompare (inOperand.mProperty_mSuperClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandlesRunAction.objectCompare (inOperand.mProperty_mHandlesRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (inOperand.mProperty_mHandlesTableValueBinding) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandleEnabledBinding.objectCompare (inOperand.mProperty_mHandleEnabledBinding) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandleHiddenBinding.objectCompare (inOperand.mProperty_mHandleHiddenBinding) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandleGraphicControllerBinding.objectCompare (inOperand.mProperty_mHandleGraphicControllerBinding) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUserDefined.objectCompare (inOperand.mProperty_mUserDefined) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletClassMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSuperClassName.isValid () && mProperty_mHandlesRunAction.isValid () && mProperty_mHandlesTableValueBinding.isValid () && mProperty_mHandleEnabledBinding.isValid () && mProperty_mHandleHiddenBinding.isValid () && mProperty_mHandleGraphicControllerBinding.isValid () && mProperty_mUserDefined.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSuperClassName.drop () ;
  mProperty_mHandlesRunAction.drop () ;
  mProperty_mHandlesTableValueBinding.drop () ;
  mProperty_mHandleEnabledBinding.drop () ;
  mProperty_mHandleHiddenBinding.drop () ;
  mProperty_mHandleGraphicControllerBinding.drop () ;
  mProperty_mUserDefined.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @outletClassMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandlesRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandleEnabledBinding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandleHiddenBinding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassMap_2D_element::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandlesRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesTableValueBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandleEnabledBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandleEnabledBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandleHiddenBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandleHiddenBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandleGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandleGraphicControllerBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @outletClassMap-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassMap_2D_element ("outletClassMap-element",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  const GALGAS_outletClassMap_2D_element * p = (const GALGAS_outletClassMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (void) :
mProperty_mOptionName (),
mProperty_mOptionTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element::~ GALGAS_controllerBindingOptionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mProperty_mOptionName (inOperand0),
mProperty_mOptionTypeName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controllerBindingOptionList_2D_element::objectCompare (const GALGAS_controllerBindingOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOptionName.objectCompare (inOperand.mProperty_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionTypeName.objectCompare (inOperand.mProperty_mOptionTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controllerBindingOptionList_2D_element::isValid (void) const {
  return mProperty_mOptionName.isValid () && mProperty_mOptionTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList_2D_element::drop (void) {
  mProperty_mOptionName.drop () ;
  mProperty_mOptionTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::getter_mOptionTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @controllerBindingOptionList-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ("controllerBindingOptionList-element",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controllerBindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  const GALGAS_controllerBindingOptionList_2D_element * p = (const GALGAS_controllerBindingOptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (void) :
mProperty_mModelTypeName (),
mProperty_mModelShouldBeWritableProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element::~ GALGAS_outletClassBindingSpecificationModelList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_bool & inOperand1) :
mProperty_mModelTypeName (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationModelList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                        const GALGAS_bool & inOperand1 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletClassBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModelTypeName.objectCompare (inOperand.mProperty_mModelTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelShouldBeWritableProperty.objectCompare (inOperand.mProperty_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletClassBindingSpecificationModelList_2D_element::isValid (void) const {
  return mProperty_mModelTypeName.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList_2D_element::drop (void) {
  mProperty_mModelTypeName.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @outletClassBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassBindingSpecificationModelList_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassBindingSpecificationModelList_2D_element::getter_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelShouldBeWritableProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @outletClassBindingSpecificationModelList-element type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ("outletClassBindingSpecificationModelList-element",
                                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletClassBindingSpecificationModelList_2D_element * p = (const GALGAS_outletClassBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (void) :
mProperty_mOutletClassName (),
mProperty_mIsUserDefined (),
mProperty_mBindingName (),
mProperty_mOutletClassBindingSpecificationModelList (),
mProperty_mBindingOptionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element::~ GALGAS_outletClassBindingSpecificationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand3,
                                                                                                              const GALGAS_controllerBindingOptionList & inOperand4) :
mProperty_mOutletClassName (inOperand0),
mProperty_mIsUserDefined (inOperand1),
mProperty_mBindingName (inOperand2),
mProperty_mOutletClassBindingSpecificationModelList (inOperand3),
mProperty_mBindingOptionList (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (HERE),
                                                                GALGAS_controllerBindingOptionList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1,
                                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand3,
                                                                                                                              const GALGAS_controllerBindingOptionList & inOperand4 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletClassBindingSpecificationList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletClassName.objectCompare (inOperand.mProperty_mOutletClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsUserDefined.objectCompare (inOperand.mProperty_mIsUserDefined) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletClassBindingSpecificationModelList.objectCompare (inOperand.mProperty_mOutletClassBindingSpecificationModelList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingOptionList.objectCompare (inOperand.mProperty_mBindingOptionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletClassBindingSpecificationList_2D_element::isValid (void) const {
  return mProperty_mOutletClassName.isValid () && mProperty_mIsUserDefined.isValid () && mProperty_mBindingName.isValid () && mProperty_mOutletClassBindingSpecificationModelList.isValid () && mProperty_mBindingOptionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList_2D_element::drop (void) {
  mProperty_mOutletClassName.drop () ;
  mProperty_mIsUserDefined.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mOutletClassBindingSpecificationModelList.drop () ;
  mProperty_mBindingOptionList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletClassBindingSpecificationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsUserDefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassBindingSpecificationList_2D_element::getter_mOutletClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassBindingSpecificationList_2D_element::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassBindingSpecificationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationList_2D_element::getter_mOutletClassBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletClassBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_outletClassBindingSpecificationList_2D_element::getter_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingOptionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @outletClassBindingSpecificationList-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ("outletClassBindingSpecificationList-element",
                                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList_2D_element result ;
  const GALGAS_outletClassBindingSpecificationList_2D_element * p = (const GALGAS_outletClassBindingSpecificationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element::GALGAS_bindingSpecificationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOutletSuperClassName (),
mProperty_mBindingMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element::~ GALGAS_bindingSpecificationMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element::GALGAS_bindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_outletBindingSpecificationMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mOutletSuperClassName (inOperand1),
mProperty_mBindingMap (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingSpecificationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_outletBindingSpecificationMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_outletBindingSpecificationMap & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_bindingSpecificationMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_bindingSpecificationMap_2D_element::objectCompare (const GALGAS_bindingSpecificationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletSuperClassName.objectCompare (inOperand.mProperty_mOutletSuperClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingMap.objectCompare (inOperand.mProperty_mBindingMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_bindingSpecificationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletSuperClassName.isValid () && mProperty_mBindingMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletSuperClassName.drop () ;
  mProperty_mBindingMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @bindingSpecificationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletSuperClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_bindingSpecificationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_bindingSpecificationMap_2D_element::getter_mOutletSuperClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap GALGAS_bindingSpecificationMap_2D_element::getter_mBindingMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @bindingSpecificationMap-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ("bindingSpecificationMap-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_bindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap_2D_element result ;
  const GALGAS_bindingSpecificationMap_2D_element * p = (const GALGAS_bindingSpecificationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (void) :
mProperty_mOptionType (),
mProperty_mOptionName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element::~ GALGAS_controllerBindingOptionDecoratedList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1) :
mProperty_mOptionType (inOperand0),
mProperty_mOptionName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                                const GALGAS_lstring & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionDecoratedList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controllerBindingOptionDecoratedList_2D_element::objectCompare (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOptionType.objectCompare (inOperand.mProperty_mOptionType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionName.objectCompare (inOperand.mProperty_mOptionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controllerBindingOptionDecoratedList_2D_element::isValid (void) const {
  return mProperty_mOptionType.isValid () && mProperty_mOptionName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::drop (void) {
  mProperty_mOptionType.drop () ;
  mProperty_mOptionName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionDecoratedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOptionType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_controllerBindingOptionDecoratedList_2D_element::getter_mOptionType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controllerBindingOptionDecoratedList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @controllerBindingOptionDecoratedList-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ("controllerBindingOptionDecoratedList-element",
                                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionDecoratedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controllerBindingOptionDecoratedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionDecoratedList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList_2D_element result ;
  const GALGAS_controllerBindingOptionDecoratedList_2D_element * p = (const GALGAS_controllerBindingOptionDecoratedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionDecoratedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionDecoratedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOutletBindingSpecificationModelList (),
mProperty_mControllerBindingOptionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element::~ GALGAS_outletBindingSpecificationMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mOutletBindingSpecificationModelList (inOperand1),
mProperty_mControllerBindingOptionList (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingSpecificationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_outletBindingSpecificationModelList::constructor_emptyList (HERE),
                                                          GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_outletBindingSpecificationMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletBindingSpecificationMap_2D_element::objectCompare (const GALGAS_outletBindingSpecificationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletBindingSpecificationModelList.objectCompare (inOperand.mProperty_mOutletBindingSpecificationModelList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControllerBindingOptionList.objectCompare (inOperand.mProperty_mControllerBindingOptionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletBindingSpecificationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletBindingSpecificationModelList.isValid () && mProperty_mControllerBindingOptionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletBindingSpecificationModelList.drop () ;
  mProperty_mControllerBindingOptionList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControllerBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletBindingSpecificationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationMap_2D_element::getter_mOutletBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_outletBindingSpecificationMap_2D_element::getter_mControllerBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerBindingOptionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @outletBindingSpecificationMap-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ("outletBindingSpecificationMap-element",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap_2D_element result ;
  const GALGAS_outletBindingSpecificationMap_2D_element * p = (const GALGAS_outletBindingSpecificationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element::GALGAS_bindingOptionList_2D_element (void) :
mProperty_mOptionName (),
mProperty_mOptionValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element::~ GALGAS_bindingOptionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element::GALGAS_bindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_abstractDefaultValue & inOperand1) :
mProperty_mOptionName (inOperand0),
mProperty_mOptionValue (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element GALGAS_bindingOptionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_abstractDefaultValue & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingOptionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_bindingOptionList_2D_element::objectCompare (const GALGAS_bindingOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOptionName.objectCompare (inOperand.mProperty_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionValue.objectCompare (inOperand.mProperty_mOptionValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_bindingOptionList_2D_element::isValid (void) const {
  return mProperty_mOptionName.isValid () && mProperty_mOptionValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList_2D_element::drop (void) {
  mProperty_mOptionName.drop () ;
  mProperty_mOptionValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @bindingOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_bindingOptionList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_bindingOptionList_2D_element::getter_mOptionValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @bindingOptionList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingOptionList_2D_element ("bindingOptionList-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_bindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_bindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element GALGAS_bindingOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bindingOptionList_2D_element result ;
  const GALGAS_bindingOptionList_2D_element * p = (const GALGAS_bindingOptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (void) :
mProperty_mOutletTypeName (),
mProperty_mOutletName (),
mProperty_mTableValueBindingDescriptor (),
mProperty_mRunDescriptor (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mRegularBindingList (),
mProperty_mGraphicController () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element::~ GALGAS_outletDeclarationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_tableValueBinding & inOperand2,
                                                                                  const GALGAS_runActionDescriptor & inOperand3,
                                                                                  const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                  const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                  const GALGAS_regularBindingList & inOperand6,
                                                                                  const GALGAS_graphicController & inOperand7) :
mProperty_mOutletTypeName (inOperand0),
mProperty_mOutletName (inOperand1),
mProperty_mTableValueBindingDescriptor (inOperand2),
mProperty_mRunDescriptor (inOperand3),
mProperty_mEnabledBindingDescriptor (inOperand4),
mProperty_mHiddenBindingDescriptor (inOperand5),
mProperty_mRegularBindingList (inOperand6),
mProperty_mGraphicController (inOperand7) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element GALGAS_outletDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_tableValueBinding & inOperand2,
                                                                                                  const GALGAS_runActionDescriptor & inOperand3,
                                                                                                  const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                                  const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                                  const GALGAS_regularBindingList & inOperand6,
                                                                                                  const GALGAS_graphicController & inOperand7 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_outletDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletDeclarationList_2D_element::objectCompare (const GALGAS_outletDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletTypeName.objectCompare (inOperand.mProperty_mOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTableValueBindingDescriptor.objectCompare (inOperand.mProperty_mTableValueBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRunDescriptor.objectCompare (inOperand.mProperty_mRunDescriptor) ;
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
  if (result == kOperandEqual) {
    result = mProperty_mGraphicController.objectCompare (inOperand.mProperty_mGraphicController) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletDeclarationList_2D_element::isValid (void) const {
  return mProperty_mOutletTypeName.isValid () && mProperty_mOutletName.isValid () && mProperty_mTableValueBindingDescriptor.isValid () && mProperty_mRunDescriptor.isValid () && mProperty_mEnabledBindingDescriptor.isValid () && mProperty_mHiddenBindingDescriptor.isValid () && mProperty_mRegularBindingList.isValid () && mProperty_mGraphicController.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList_2D_element::drop (void) {
  mProperty_mOutletTypeName.drop () ;
  mProperty_mOutletName.drop () ;
  mProperty_mTableValueBindingDescriptor.drop () ;
  mProperty_mRunDescriptor.drop () ;
  mProperty_mEnabledBindingDescriptor.drop () ;
  mProperty_mHiddenBindingDescriptor.drop () ;
  mProperty_mRegularBindingList.drop () ;
  mProperty_mGraphicController.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @outletDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTableValueBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRunDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGraphicController.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::getter_mOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding GALGAS_outletDeclarationList_2D_element::getter_mTableValueBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor GALGAS_outletDeclarationList_2D_element::getter_mRunDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList_2D_element::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnabledBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList_2D_element::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHiddenBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_outletDeclarationList_2D_element::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController GALGAS_outletDeclarationList_2D_element::getter_mGraphicController (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGraphicController ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @outletDeclarationList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ("outletDeclarationList-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element GALGAS_outletDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList_2D_element result ;
  const GALGAS_outletDeclarationList_2D_element * p = (const GALGAS_outletDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOutletTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element::~ GALGAS_decoratedOutletMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mOutletTypeName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedOutletMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_string & inOperand1 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedOutletMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_decoratedOutletMap_2D_element::objectCompare (const GALGAS_decoratedOutletMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletTypeName.objectCompare (inOperand.mProperty_mOutletTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedOutletMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @decoratedOutletMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedOutletMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_decoratedOutletMap_2D_element::getter_mOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @decoratedOutletMap-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedOutletMap_2D_element ("decoratedOutletMap-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedOutletMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedOutletMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedOutletMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap_2D_element result ;
  const GALGAS_decoratedOutletMap_2D_element * p = (const GALGAS_decoratedOutletMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedOutletMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedOutletMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGenerationList_2D_element::GALGAS_transientPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGenerationList_2D_element::~ GALGAS_transientPropertyGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGenerationList_2D_element::GALGAS_transientPropertyGenerationList_2D_element (const GALGAS_transientPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGenerationList_2D_element GALGAS_transientPropertyGenerationList_2D_element::constructor_new (const GALGAS_transientPropertyGeneration & inOperand0 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_transientPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_transientPropertyGenerationList_2D_element::objectCompare (const GALGAS_transientPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_transientPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientPropertyGenerationList_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @transientPropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @transientPropertyGenerationList-element type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ("transientPropertyGenerationList-element",
                                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGenerationList_2D_element GALGAS_transientPropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGenerationList_2D_element result ;
  const GALGAS_transientPropertyGenerationList_2D_element * p = (const GALGAS_transientPropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element::GALGAS_simpleStoredPropertyList_2D_element (void) :
mProperty_mPropertyTypeName (),
mProperty_mPropertyName (),
mProperty_mDefaultValue (),
mProperty_mNeedsValidation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element::~ GALGAS_simpleStoredPropertyList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element::GALGAS_simpleStoredPropertyList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_abstractDefaultValue & inOperand2,
                                                                                        const GALGAS_bool & inOperand3) :
mProperty_mPropertyTypeName (inOperand0),
mProperty_mPropertyName (inOperand1),
mProperty_mDefaultValue (inOperand2),
mProperty_mNeedsValidation (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element GALGAS_simpleStoredPropertyList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_abstractDefaultValue & inOperand2,
                                                                                                        const GALGAS_bool & inOperand3 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_simpleStoredPropertyList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_simpleStoredPropertyList_2D_element::objectCompare (const GALGAS_simpleStoredPropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyTypeName.objectCompare (inOperand.mProperty_mPropertyTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultValue.objectCompare (inOperand.mProperty_mDefaultValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsValidation.objectCompare (inOperand.mProperty_mNeedsValidation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_simpleStoredPropertyList_2D_element::isValid (void) const {
  return mProperty_mPropertyTypeName.isValid () && mProperty_mPropertyName.isValid () && mProperty_mDefaultValue.isValid () && mProperty_mNeedsValidation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList_2D_element::drop (void) {
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mPropertyName.drop () ;
  mProperty_mDefaultValue.drop () ;
  mProperty_mNeedsValidation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @simpleStoredPropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_simpleStoredPropertyList_2D_element::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_simpleStoredPropertyList_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_simpleStoredPropertyList_2D_element::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_simpleStoredPropertyList_2D_element::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @simpleStoredPropertyList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyList_2D_element ("simpleStoredPropertyList-element",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_simpleStoredPropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element GALGAS_simpleStoredPropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList_2D_element result ;
  const GALGAS_simpleStoredPropertyList_2D_element * p = (const GALGAS_simpleStoredPropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleStoredPropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element::GALGAS_toOnePropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element::~ GALGAS_toOnePropertyGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element::GALGAS_toOnePropertyGenerationList_2D_element (const GALGAS_toOnePropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element GALGAS_toOnePropertyGenerationList_2D_element::constructor_new (const GALGAS_toOnePropertyGeneration & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toOnePropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_toOnePropertyGenerationList_2D_element::objectCompare (const GALGAS_toOnePropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_toOnePropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @toOnePropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @toOnePropertyGenerationList-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2D_element ("toOnePropertyGenerationList-element",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOnePropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOnePropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element GALGAS_toOnePropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList_2D_element result ;
  const GALGAS_toOnePropertyGenerationList_2D_element * p = (const GALGAS_toOnePropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOnePropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element::GALGAS_storedArrayPropertyListAST_2D_element (void) :
mProperty_mElementClassName (),
mProperty_mStoredArrayPropertyName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element::~ GALGAS_storedArrayPropertyListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element::GALGAS_storedArrayPropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1) :
mProperty_mElementClassName (inOperand0),
mProperty_mStoredArrayPropertyName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element GALGAS_storedArrayPropertyListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_storedArrayPropertyListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element GALGAS_storedArrayPropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_storedArrayPropertyListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_storedArrayPropertyListAST_2D_element::objectCompare (const GALGAS_storedArrayPropertyListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElementClassName.objectCompare (inOperand.mProperty_mElementClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredArrayPropertyName.objectCompare (inOperand.mProperty_mStoredArrayPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_storedArrayPropertyListAST_2D_element::isValid (void) const {
  return mProperty_mElementClassName.isValid () && mProperty_mStoredArrayPropertyName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST_2D_element::drop (void) {
  mProperty_mElementClassName.drop () ;
  mProperty_mStoredArrayPropertyName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @storedArrayPropertyListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mElementClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredArrayPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_storedArrayPropertyListAST_2D_element::getter_mElementClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_storedArrayPropertyListAST_2D_element::getter_mStoredArrayPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredArrayPropertyName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @storedArrayPropertyListAST-element type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storedArrayPropertyListAST_2D_element ("storedArrayPropertyListAST-element",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_storedArrayPropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storedArrayPropertyListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_storedArrayPropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storedArrayPropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element GALGAS_storedArrayPropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListAST_2D_element result ;
  const GALGAS_storedArrayPropertyListAST_2D_element * p = (const GALGAS_storedArrayPropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storedArrayPropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storedArrayPropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element::GALGAS_actionMap_2D_element (void) :
mProperty_lkey () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element::~ GALGAS_actionMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element::GALGAS_actionMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_actionMap_2D_element::objectCompare (const GALGAS_actionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_actionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @actionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_actionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @actionMap-element type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionMap_2D_element ("actionMap-element",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionMap_2D_element result ;
  const GALGAS_actionMap_2D_element * p = (const GALGAS_actionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element::GALGAS_regularBindingList_2D_element (void) :
mProperty_mBindingName (),
mProperty_mObservablePropertyList (),
mProperty_mBindingOptionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element::~ GALGAS_regularBindingList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element::GALGAS_regularBindingList_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_observablePropertyList & inOperand1,
                                                                            const GALGAS_bindingOptionList & inOperand2) :
mProperty_mBindingName (inOperand0),
mProperty_mObservablePropertyList (inOperand1),
mProperty_mBindingOptionList (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element GALGAS_regularBindingList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_observablePropertyList::constructor_emptyList (HERE),
                                               GALGAS_bindingOptionList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element GALGAS_regularBindingList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_observablePropertyList & inOperand1,
                                                                                            const GALGAS_bindingOptionList & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_regularBindingList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_regularBindingList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_regularBindingList_2D_element::objectCompare (const GALGAS_regularBindingList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObservablePropertyList.objectCompare (inOperand.mProperty_mObservablePropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingOptionList.objectCompare (inOperand.mProperty_mBindingOptionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_regularBindingList_2D_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mObservablePropertyList.isValid () && mProperty_mBindingOptionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList_2D_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mObservablePropertyList.drop () ;
  mProperty_mBindingOptionList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @regularBindingList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObservablePropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_regularBindingList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList GALGAS_regularBindingList_2D_element::getter_mObservablePropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservablePropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_regularBindingList_2D_element::getter_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingOptionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @regularBindingList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingList_2D_element ("regularBindingList-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_regularBindingList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_regularBindingList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element GALGAS_regularBindingList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingList_2D_element result ;
  const GALGAS_regularBindingList_2D_element * p = (const GALGAS_regularBindingList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListAST_2D_element::GALGAS_tableViewControllerBoundColumnListAST_2D_element (void) :
mProperty_mColumnName (),
mProperty_mColumnOutletTypeName (),
mProperty_mColumnBindingAST (),
mProperty_mSortPropertyName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListAST_2D_element::~ GALGAS_tableViewControllerBoundColumnListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListAST_2D_element::GALGAS_tableViewControllerBoundColumnListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_tableViewColumnBindingAST & inOperand2,
                                                                                                                  const GALGAS_lstring & inOperand3) :
mProperty_mColumnName (inOperand0),
mProperty_mColumnOutletTypeName (inOperand1),
mProperty_mColumnBindingAST (inOperand2),
mProperty_mSortPropertyName (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListAST_2D_element GALGAS_tableViewControllerBoundColumnListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                                  const GALGAS_tableViewColumnBindingAST & inOperand2,
                                                                                                                                  const GALGAS_lstring & inOperand3 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_tableViewControllerBoundColumnListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_tableViewControllerBoundColumnListAST_2D_element::objectCompare (const GALGAS_tableViewControllerBoundColumnListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mColumnName.objectCompare (inOperand.mProperty_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mColumnOutletTypeName.objectCompare (inOperand.mProperty_mColumnOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mColumnBindingAST.objectCompare (inOperand.mProperty_mColumnBindingAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSortPropertyName.objectCompare (inOperand.mProperty_mSortPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_tableViewControllerBoundColumnListAST_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mColumnOutletTypeName.isValid () && mProperty_mColumnBindingAST.isValid () && mProperty_mSortPropertyName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerBoundColumnListAST_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mColumnOutletTypeName.drop () ;
  mProperty_mColumnBindingAST.drop () ;
  mProperty_mSortPropertyName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerBoundColumnListAST_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @tableViewControllerBoundColumnListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mColumnOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mColumnBindingAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSortPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_tableViewControllerBoundColumnListAST_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_tableViewControllerBoundColumnListAST_2D_element::getter_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewColumnBindingAST GALGAS_tableViewControllerBoundColumnListAST_2D_element::getter_mColumnBindingAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnBindingAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_tableViewControllerBoundColumnListAST_2D_element::getter_mSortPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortPropertyName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @tableViewControllerBoundColumnListAST-element type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListAST_2D_element ("tableViewControllerBoundColumnListAST-element",
                                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewControllerBoundColumnListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewControllerBoundColumnListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerBoundColumnListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListAST_2D_element GALGAS_tableViewControllerBoundColumnListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListAST_2D_element result ;
  const GALGAS_tableViewControllerBoundColumnListAST_2D_element * p = (const GALGAS_tableViewControllerBoundColumnListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerBoundColumnListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerBoundColumnListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerAttributListAST_2D_element::GALGAS_tableViewControllerAttributListAST_2D_element (void) :
mProperty_mAttributeName (),
mProperty_mAttributeValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerAttributListAST_2D_element::~ GALGAS_tableViewControllerAttributListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerAttributListAST_2D_element::GALGAS_tableViewControllerAttributListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_abstractDefaultValue & inOperand1) :
mProperty_mAttributeName (inOperand0),
mProperty_mAttributeValue (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerAttributListAST_2D_element GALGAS_tableViewControllerAttributListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_abstractDefaultValue & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerAttributListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewControllerAttributListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_tableViewControllerAttributListAST_2D_element::objectCompare (const GALGAS_tableViewControllerAttributListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeValue.objectCompare (inOperand.mProperty_mAttributeValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_tableViewControllerAttributListAST_2D_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mAttributeValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerAttributListAST_2D_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mAttributeValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerAttributListAST_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @tableViewControllerAttributListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_tableViewControllerAttributListAST_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_tableViewControllerAttributListAST_2D_element::getter_mAttributeValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @tableViewControllerAttributListAST-element type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerAttributListAST_2D_element ("tableViewControllerAttributListAST-element",
                                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewControllerAttributListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerAttributListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewControllerAttributListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerAttributListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerAttributListAST_2D_element GALGAS_tableViewControllerAttributListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerAttributListAST_2D_element result ;
  const GALGAS_tableViewControllerAttributListAST_2D_element * p = (const GALGAS_tableViewControllerAttributListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerAttributListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerAttributListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap_2D_element::GALGAS_observablePropertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mInverseRelationshipName (),
mProperty_mActionMap (),
mProperty_mCascade () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap_2D_element::~ GALGAS_observablePropertyMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap_2D_element::GALGAS_observablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_propertyKind & inOperand1,
                                                                                  const GALGAS_string & inOperand2,
                                                                                  const GALGAS_actionMap & inOperand3,
                                                                                  const GALGAS_bool & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mInverseRelationshipName (inOperand2),
mProperty_mActionMap (inOperand3),
mProperty_mCascade (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap_2D_element GALGAS_observablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_propertyKind & inOperand1,
                                                                                                  const GALGAS_string & inOperand2,
                                                                                                  const GALGAS_actionMap & inOperand3,
                                                                                                  const GALGAS_bool & inOperand4 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_observablePropertyMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_observablePropertyMap_2D_element::objectCompare (const GALGAS_observablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInverseRelationshipName.objectCompare (inOperand.mProperty_mInverseRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionMap.objectCompare (inOperand.mProperty_mActionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCascade.objectCompare (inOperand.mProperty_mCascade) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_observablePropertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mInverseRelationshipName.isValid () && mProperty_mActionMap.isValid () && mProperty_mCascade.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mInverseRelationshipName.drop () ;
  mProperty_mActionMap.drop () ;
  mProperty_mCascade.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @observablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInverseRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCascade.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_observablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_observablePropertyMap_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_observablePropertyMap_2D_element::getter_mInverseRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInverseRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_observablePropertyMap_2D_element::getter_mActionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyMap_2D_element::getter_mCascade (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascade ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @observablePropertyMap-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyMap_2D_element ("observablePropertyMap-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap_2D_element GALGAS_observablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyMap_2D_element result ;
  const GALGAS_observablePropertyMap_2D_element * p = (const GALGAS_observablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap_2D_element::GALGAS_classMap_2D_element (void) :
mProperty_lkey (),
mProperty_mClassKind (),
mProperty_mPropertyMap (),
mProperty_mActionMap (),
mProperty_mPropertyGenerationList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap_2D_element::~ GALGAS_classMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap_2D_element::GALGAS_classMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_classKind & inOperand1,
                                                        const GALGAS_propertyMap & inOperand2,
                                                        const GALGAS_actionMap & inOperand3,
                                                        const GALGAS_propertyGenerationList & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mClassKind (inOperand1),
mProperty_mPropertyMap (inOperand2),
mProperty_mActionMap (inOperand3),
mProperty_mPropertyGenerationList (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap_2D_element GALGAS_classMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_classKind & inOperand1,
                                                                        const GALGAS_propertyMap & inOperand2,
                                                                        const GALGAS_actionMap & inOperand3,
                                                                        const GALGAS_propertyGenerationList & inOperand4 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_classMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_classMap_2D_element::objectCompare (const GALGAS_classMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mClassKind.objectCompare (inOperand.mProperty_mClassKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyMap.objectCompare (inOperand.mProperty_mPropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionMap.objectCompare (inOperand.mProperty_mActionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyGenerationList.objectCompare (inOperand.mProperty_mPropertyGenerationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_classMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mClassKind.isValid () && mProperty_mPropertyMap.isValid () && mProperty_mActionMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mClassKind.drop () ;
  mProperty_mPropertyMap.drop () ;
  mProperty_mActionMap.drop () ;
  mProperty_mPropertyGenerationList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @classMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mClassKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_classMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classKind GALGAS_classMap_2D_element::getter_mClassKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_classMap_2D_element::getter_mPropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_classMap_2D_element::getter_mActionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_classMap_2D_element::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyGenerationList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @classMap-element type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classMap_2D_element ("classMap-element",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap_2D_element GALGAS_classMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classMap_2D_element result ;
  const GALGAS_classMap_2D_element * p = (const GALGAS_classMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mActionMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_propertyKind & inOperand1,
                                                              const GALGAS_actionMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mActionMap (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_propertyKind & inOperand1,
                                                                              const GALGAS_actionMap & inOperand2 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_propertyMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyMap_2D_element::objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionMap.objectCompare (inOperand.mProperty_mActionMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mActionMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mActionMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @propertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_propertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_propertyMap_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_propertyMap_2D_element::getter_mActionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @propertyMap-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap_2D_element ("propertyMap-element",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  const GALGAS_propertyMap_2D_element * p = (const GALGAS_propertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationStruct::GALGAS_astDeclarationStruct (void) :
mProperty_mUnifiedDeclarationList (),
mProperty_mDeclarationList (),
mProperty_mBindingSpecificationListMap (),
mProperty_mPreferences (),
mProperty_mXcodeProject () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationStruct::~ GALGAS_astDeclarationStruct (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationStruct::GALGAS_astDeclarationStruct (const GALGAS_declarationListAST & inOperand0,
                                                          const GALGAS_astDeclarationListEX & inOperand1,
                                                          const GALGAS_outletClassBindingSpecificationList & inOperand2,
                                                          const GALGAS_prefDeclaration & inOperand3,
                                                          const GALGAS_lstring & inOperand4) :
mProperty_mUnifiedDeclarationList (inOperand0),
mProperty_mDeclarationList (inOperand1),
mProperty_mBindingSpecificationListMap (inOperand2),
mProperty_mPreferences (inOperand3),
mProperty_mXcodeProject (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_astDeclarationStruct (GALGAS_declarationListAST::constructor_emptyList (HERE),
                                      GALGAS_astDeclarationListEX::constructor_emptyList (HERE),
                                      GALGAS_outletClassBindingSpecificationList::constructor_emptyList (HERE),
                                      GALGAS_prefDeclaration::constructor_default (HERE),
                                      GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_new (const GALGAS_declarationListAST & inOperand0,
                                                                          const GALGAS_astDeclarationListEX & inOperand1,
                                                                          const GALGAS_outletClassBindingSpecificationList & inOperand2,
                                                                          const GALGAS_prefDeclaration & inOperand3,
                                                                          const GALGAS_lstring & inOperand4 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_astDeclarationStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_astDeclarationStruct::objectCompare (const GALGAS_astDeclarationStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mUnifiedDeclarationList.objectCompare (inOperand.mProperty_mUnifiedDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeclarationList.objectCompare (inOperand.mProperty_mDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingSpecificationListMap.objectCompare (inOperand.mProperty_mBindingSpecificationListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPreferences.objectCompare (inOperand.mProperty_mPreferences) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXcodeProject.objectCompare (inOperand.mProperty_mXcodeProject) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_astDeclarationStruct::isValid (void) const {
  return mProperty_mUnifiedDeclarationList.isValid () && mProperty_mDeclarationList.isValid () && mProperty_mBindingSpecificationListMap.isValid () && mProperty_mPreferences.isValid () && mProperty_mXcodeProject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationStruct::drop (void) {
  mProperty_mUnifiedDeclarationList.drop () ;
  mProperty_mDeclarationList.drop () ;
  mProperty_mBindingSpecificationListMap.drop () ;
  mProperty_mPreferences.drop () ;
  mProperty_mXcodeProject.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationStruct::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @astDeclarationStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mUnifiedDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingSpecificationListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPreferences.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXcodeProject.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_astDeclarationStruct::getter_mUnifiedDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnifiedDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX GALGAS_astDeclarationStruct::getter_mDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_astDeclarationStruct::getter_mBindingSpecificationListMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingSpecificationListMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_astDeclarationStruct::getter_mPreferences (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPreferences ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_astDeclarationStruct::getter_mXcodeProject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXcodeProject ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @astDeclarationStruct type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationStruct ("astDeclarationStruct",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_astDeclarationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationStruct ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_astDeclarationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationStruct (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct result ;
  const GALGAS_astDeclarationStruct * p = (const GALGAS_astDeclarationStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_literalIntMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalIntMultipleBindingExpressionAST * p = (const cPtr_literalIntMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_literalIntMultipleBindingExpressionAST::objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntMultipleBindingExpressionAST::GALGAS_literalIntMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntMultipleBindingExpressionAST::GALGAS_literalIntMultipleBindingExpressionAST (const cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalIntMultipleBindingExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint GALGAS_literalIntMultipleBindingExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalIntMultipleBindingExpressionAST * p = (const cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint cPtr_literalIntMultipleBindingExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @literalIntMultipleBindingExpressionAST class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_literalIntMultipleBindingExpressionAST::cPtr_literalIntMultipleBindingExpressionAST (const GALGAS_luint & in_mValue
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_literalIntMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

void cPtr_literalIntMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@literalIntMultipleBindingExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_literalIntMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalIntMultipleBindingExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @literalIntMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ("literalIntMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_literalIntMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_literalIntMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_doubleAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_doubleAsDefaultValue * p = (const cPtr_doubleAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_doubleAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_doubleAsDefaultValue::objectCompare (const GALGAS_doubleAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_doubleAsDefaultValue::GALGAS_doubleAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_doubleAsDefaultValue GALGAS_doubleAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_doubleAsDefaultValue::constructor_new (GALGAS_ldouble::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_doubleAsDefaultValue::GALGAS_doubleAsDefaultValue (const cPtr_doubleAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_doubleAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_doubleAsDefaultValue GALGAS_doubleAsDefaultValue::constructor_new (const GALGAS_ldouble & inAttribute_mValue
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_doubleAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_doubleAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ldouble GALGAS_doubleAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_ldouble result ;
  if (NULL != mObjectPtr) {
    const cPtr_doubleAsDefaultValue * p = (const cPtr_doubleAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_doubleAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ldouble cPtr_doubleAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @doubleAsDefaultValue class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_doubleAsDefaultValue::cPtr_doubleAsDefaultValue (const GALGAS_ldouble & in_mValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_doubleAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue ;
}

void cPtr_doubleAsDefaultValue::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@doubleAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_doubleAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_doubleAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @doubleAsDefaultValue type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_doubleAsDefaultValue ("doubleAsDefaultValue",
                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_doubleAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_doubleAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_doubleAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_doubleAsDefaultValue GALGAS_doubleAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_doubleAsDefaultValue result ;
  const GALGAS_doubleAsDefaultValue * p = (const GALGAS_doubleAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_doubleAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doubleAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@XcodeProjectDescriptor addICNS_file'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addICNS_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 6)) ;
  }
  ioObject.mProperty_mICNS_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 7)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ("easyBindings_options",
                                         "outputDeclarationDependencyGraph",
                                         103,
                                         "output-declaration-graph",
                                         "Output a declaration dependancy graph graphviz file") ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'predefinedOutletClasses'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_4 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_4_predefinedOutletClasses (
  "controllers",
  0,
  gWrapperAllFiles_predefinedOutletClasses_4,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_4
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_5 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_5_predefinedOutletClasses (
  "outlet-classes",
  0,
  gWrapperAllFiles_predefinedOutletClasses_5,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_5
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses (
  "standard-properties",
  0,
  gWrapperAllFiles_predefinedOutletClasses_1,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_1
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_3 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses (
  "swift-sources",
  0,
  gWrapperAllFiles_predefinedOutletClasses_3,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_3
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_2 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses (
  "xcode-project",
  0,
  gWrapperAllFiles_predefinedOutletClasses_2,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_0 [6] = {
  & gWrapperDirectory_4_predefinedOutletClasses,
  & gWrapperDirectory_5_predefinedOutletClasses,
  & gWrapperDirectory_1_predefinedOutletClasses,
  & gWrapperDirectory_3_predefinedOutletClasses,
  & gWrapperDirectory_2_predefinedOutletClasses,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses (
  "",
  0,
  gWrapperAllFiles_predefinedOutletClasses_0,
  5,
  gWrapperAllDirectories_predefinedOutletClasses_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Filewrapper template 'predefinedOutletClasses sourceFile'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "transient property struct CGFloat ;\n"
    "\n"
    "transient property class NSImage ;\n"
    "\n"
    "transient property class EBShape ;\n"
    "\n"
    "extern outlet class EBView : NSView $graphicController ;\n"
    "binding EBView $underObjectsDisplay : transient EBShape ;\n"
    "binding EBView $overObjectsDisplay : transient EBShape ;\n"
    "binding EBView $arrowKeyMagnitude : transient CGFloat ;\n"
    "binding EBView $shiftArrowKeyMagnitude : transient CGFloat ;\n"
    "\n"
    "extern outlet class NSView $hidden ;\n"
    "\n"
    "extern outlet class NSControl : NSView $enabled $run ;\n"
    "\n"
    "extern outlet class EBButton : NSControl ;\n"
    "binding EBButton $title : transient String ;\n"
    "\n"
    "extern outlet class EBColorObserverWell : NSControl ;\n"
    "binding EBColorObserverWell $colorObserver : transient NSColor ;\n"
    "\n"
    "extern outlet class EBColorWell : NSControl ;\n"
    "binding EBColorWell $color : property NSColor {sendContinously : Bool} ;\n"
    "\n"
    "\n"
    "extern outlet class EBDatePicker : NSControl ;\n"
    "binding EBDatePicker $date : property Date ;\n"
    "\n"
    "extern outlet class EBDoubleField : NSView ;\n"
    "binding EBDoubleField $value : property Double {sendContinously : Bool, autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "extern outlet class EBDoubleObserverField : NSView ;\n"
    "binding EBDoubleObserverField $valueObserver : transient Double {autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "extern outlet class EBIntField : NSControl ;\n"
    "binding EBIntField $value : property Int {sendContinously : Bool, autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "extern outlet class EBIntObserverField : NSView ;\n"
    "binding EBIntObserverField $valueObserver : transient Int {autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "extern outlet class EBFontButton : NSControl ;\n"
    "binding EBFontButton $fontValue : property NSFont ;\n"
    "\n"
    "\n"
    "extern outlet class EBPopUpButton : NSControl ;\n"
    "binding EBPopUpButton $selectedTag : property Int ;\n"
    "\n"
    "\n"
    "extern outlet class EBGroupButton : NSControl ;\n"
    "binding EBGroupButton $selectedIndex : property Int ;\n"
    "\n"
    "\n"
    "extern outlet class EBImageObserverView : NSView ;\n"
    "binding EBImageObserverView $image : transient NSImage ;\n"
    "binding EBImageObserverView $tooltip : transient String ;\n"
    "\n"
    "\n"
    "extern outlet class EBMenu ;\n"
    "\n"
    "\n"
    "extern outlet class EBMenuItem ;\n"
    "\n"
    "\n"
    "extern outlet class EBCheckedMenuItem ;\n"
    "binding EBCheckedMenuItem $checked : property Bool ;\n"
    "\n"
    "\n"
    "extern outlet class EBProgressIndicator : NSView ;\n"
    "\n"
    "\n"
    "extern outlet class EBSegmentedControl : NSControl ;\n"
    "binding EBSegmentedControl $selectedIndex : property Int ;\n"
    "\n"
    "\n"
    "extern outlet class EBSlider : NSControl ;\n"
    "binding EBSlider $doubleValue : property Double {sendContinously:Bool} ;\n"
    "binding EBSlider $intValue : property Int {sendContinously:Bool} ;\n"
    "\n"
    "\n"
    "extern outlet class EBStepper : NSControl ;\n"
    "binding EBStepper $value : property Int {sendContinously:Bool} ;\n"
    "\n"
    "\n"
    "extern outlet class EBSwitch : NSControl ;\n"
    "binding EBSwitch $value : property Bool ;\n"
    "\n"
    "\n"
    "extern outlet class EBTableView : NSControl $tableValue ;\n"
    "\n"
    "\n"
    "extern outlet class EBTextField : NSControl ;\n"
    "binding EBTextField $value : property String {sendContinously : Bool} ;\n"
    "\n"
    "extern outlet class EBTextObserverField : NSView ;\n"
    "binding EBTextObserverField $valueObserver : transient String ;\n"
    "\n"
    "\n"
    "extern outlet class EBTextObserverView : NSView ;\n"
    "binding EBTextObserverView $valueObserver : transient String ;\n"
    "\n"
    "\n"
    "extern outlet class EBTextView : NSControl ;\n"
    "binding EBTextView $value : property String ;\n"
    "\n"
    "extern outlet class EBWindow ;\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'sortProperties'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_sortProperties (const GALGAS_string constinArgument_inSourceFile,
                             const GALGAS_declarationListAST constinArgument_inDeclarationListAST,
                             GALGAS_declarationListAST & outArgument_outSortedDeclarationListAST,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_declarationPrecedenceGraph var_declarationPrecedenceGraph_2348 = GALGAS_declarationPrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("declaration-graph.galgas", 59)) ;
  cEnumerator_declarationListAST enumerator_2406 (constinArgument_inDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_2406.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) enumerator_2406.current_mPropertyDeclaration (HERE).ptr (), var_declarationPrecedenceGraph_2348, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 61)) ;
    enumerator_2406.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_easyBindings_5F_options_outputDeclarationDependencyGraph.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_2610 = var_declarationPrecedenceGraph_2348.getter_graphviz (SOURCE_FILE ("declaration-graph.galgas", 65)) ;
      GALGAS_string var_path_2663 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependancy.dot"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 66)) ;
      GALGAS_bool joker_2757 ; // Joker input parameter
      var_s_2610.method_writeToFileWhenDifferentContents (var_path_2663, joker_2757, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 67)) ;
    }
  }
  outArgument_outSortedDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-graph.galgas", 70)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_declarationPrecedenceGraph_2348.getter_undefinedNodeCount (SOURCE_FILE ("declaration-graph.galgas", 71)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_3007 (var_declarationPrecedenceGraph_2348.getter_undefinedNodeReferenceList (SOURCE_FILE ("declaration-graph.galgas", 72)), kENUMERATION_UP) ;
      while (enumerator_3007.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3007.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-graph.galgas", 73)), GALGAS_string ("the property ").add_operation (enumerator_3007.current_mValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 73)).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 73)), fixItArray2  COMMA_SOURCE_FILE ("declaration-graph.galgas", 73)) ;
        enumerator_3007.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_3236 ;
    GALGAS_lstringlist joker_3189 ; // Joker input parameter
    GALGAS_lstringlist joker_3244 ; // Joker input parameter
    var_declarationPrecedenceGraph_2348.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_3189, var_unsortedSemanticDeclarationListAST_3236, joker_3244, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 76)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_3236.getter_length (SOURCE_FILE ("declaration-graph.galgas", 82)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_3323 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3236.getter_length (SOURCE_FILE ("declaration-graph.galgas", 84)).getter_string (SOURCE_FILE ("declaration-graph.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 83)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 84)) ;
        cEnumerator_declarationListAST enumerator_3549 (var_unsortedSemanticDeclarationListAST_3236, kENUMERATION_UP) ;
        while (enumerator_3549.hasCurrentObject ()) {
          var_s_3323.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (callExtensionGetter_lkey ((const cPtr_abstractDeclarationAST *) enumerator_3549.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 87)).getter_string (SOURCE_FILE ("declaration-graph.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("declaration-graph.galgas", 87)) ;
          enumerator_3549.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-graph.galgas", 89)), var_s_3323, fixItArray4  COMMA_SOURCE_FILE ("declaration-graph.galgas", 89)) ;
        cEnumerator_declarationListAST enumerator_3692 (var_unsortedSemanticDeclarationListAST_3236, kENUMERATION_UP) ;
        while (enumerator_3692.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (callExtensionGetter_lkey ((const cPtr_abstractDeclarationAST *) enumerator_3692.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 91)).getter_location (SOURCE_FILE ("declaration-graph.galgas", 91)), GALGAS_string ("the ").add_operation (callExtensionGetter_lkey ((const cPtr_abstractDeclarationAST *) enumerator_3692.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 91)).getter_string (SOURCE_FILE ("declaration-graph.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 91)).add_operation (GALGAS_string (" property is declared here"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas", 91)), fixItArray5  COMMA_SOURCE_FILE ("declaration-graph.galgas", 91)) ;
          enumerator_3692.gotoNextObject () ;
        }
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@transientClassDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientClassDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientClassDeclarationAST * object = (const cPtr_transientClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientClassDeclarationAST) ;
  {
  const GALGAS_transientClassDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mClassName, temp_0, inCompiler COMMA_SOURCE_FILE ("transient-property-class.galgas", 12)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_transientClassDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_transientClassDeclarationAST.mSlotID,
                                               extensionMethod_transientClassDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_transientClassDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_transientClassDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension getter '@transientClassDeclarationAST lkey'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_transientClassDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_transientClassDeclarationAST * object = (const cPtr_transientClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientClassDeclarationAST) ;
  result_result = object->mProperty_mClassName ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_transientClassDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_transientClassDeclarationAST.mSlotID,
                             extensionGetter_transientClassDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_transientClassDeclarationAST_lkey (defineExtensionGetter_transientClassDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@transientClassDeclarationAST firstAnalysisPhase'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_transientClassDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientClassDeclarationAST * object = (const cPtr_transientClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientClassDeclarationAST) ;
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (object->mProperty_mClassName, GALGAS_classKind::constructor_atomic (GALGAS_typeKind::constructor_transientPropertyExternType (object->mProperty_mClassName.getter_string (SOURCE_FILE ("transient-property-class.galgas", 65))  COMMA_SOURCE_FILE ("transient-property-class.galgas", 65))  COMMA_SOURCE_FILE ("transient-property-class.galgas", 65)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property-class.galgas", 66)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property-class.galgas", 67)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("transient-property-class.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("transient-property-class.galgas", 63)) ;
  }
  ioArgument_ioGeneration.mProperty_mTransientPropertyTypeList.addAssign_operation (object->mProperty_mClassName.getter_string (HERE), object->mProperty_mIsClass  COMMA_SOURCE_FILE ("transient-property-class.galgas", 70)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_transientClassDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_transientClassDeclarationAST.mSlotID,
                                           extensionMethod_transientClassDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_transientClassDeclarationAST_firstAnalysisPhase (defineExtensionMethod_transientClassDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  {
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mClassName, temp_0, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 12)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                               extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Overriding extension getter '@enumerationDeclarationAST lkey'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_enumerationDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_result = object->mProperty_mClassName ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                             extensionGetter_enumerationDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_lkey (defineExtensionGetter_enumerationDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@enumerationDeclarationAST firstAnalysisPhase'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  GALGAS_enumConstantMap var_enumConstantMap_2610 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration.galgas", 65)) ;
  cEnumerator_lstringlist enumerator_2650 (object->mProperty_mEnumConstantNameList, kENUMERATION_UP) ;
  while (enumerator_2650.hasCurrentObject ()) {
    {
    var_enumConstantMap_2610.setter_insertKey (enumerator_2650.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 67)) ;
    }
    enumerator_2650.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (object->mProperty_mClassName, GALGAS_classKind::constructor_atomic (GALGAS_typeKind::constructor_enumType (object->mProperty_mClassName.getter_string (SOURCE_FILE ("enumeration.galgas", 71)), var_enumConstantMap_2610  COMMA_SOURCE_FILE ("enumeration.galgas", 71))  COMMA_SOURCE_FILE ("enumeration.galgas", 71)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("enumeration.galgas", 72)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("enumeration.galgas", 73)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("enumeration.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 69)) ;
  }
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_enumForGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("enumeration.galgas", 78)), object->mProperty_mEnumConstantNameList  COMMA_SOURCE_FILE ("enumeration.galgas", 77))  COMMA_SOURCE_FILE ("enumeration.galgas", 77)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                           extensionMethod_enumerationDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_firstAnalysisPhase (defineExtensionMethod_enumerationDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_4_enumGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_enumGenerationTemplate_4,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_4
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_5_enumGenerationTemplate (
  "outlet-classes",
  0,
  gWrapperAllFiles_enumGenerationTemplate_5,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_5
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_enumGenerationTemplate_1,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_1
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_3 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate (
  "swift-sources",
  0,
  gWrapperAllFiles_enumGenerationTemplate_3,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_3
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_2 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_enumGenerationTemplate_2,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [6] = {
  & gWrapperDirectory_4_enumGenerationTemplate,
  & gWrapperDirectory_5_enumGenerationTemplate,
  & gWrapperDirectory_1_enumGenerationTemplate,
  & gWrapperDirectory_3_enumGenerationTemplate,
  & gWrapperDirectory_2_enumGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  5,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                const GALGAS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "enum " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " : Int, ValuePropertyProtocol {\n" ;
  GALGAS_uint index_540_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_540 (in_CONSTANT_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_540.hasCurrentObject ()) {
      result << "  case " ;
      result << enumerator_540.current_mValue (HERE).getter_string (HERE).stringValue () ;
      result << " = " ;
      result << index_540_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 12)).stringValue () ;
      result << "\n" ;
      index_540_idx.increment () ;
      enumerator_540.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func descriptionForExplorer () -> String {\n"
    "    switch self {\n" ;
  GALGAS_uint index_828_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_828 (in_CONSTANT_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_828.hasCurrentObject ()) {
      result << "      case ." ;
      result << enumerator_828.current_mValue (HERE).getter_string (HERE).stringValue () ;
      result << " : return \"" ;
      result << enumerator_828.current_mValue (HERE).getter_string (HERE).stringValue () ;
      result << "\" // " ;
      result << index_828_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 22)).stringValue () ;
      result << "\n" ;
      index_828_idx.increment () ;
      enumerator_828.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func enumfromRawValue (rawValue : Int) -> " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n"
    "    var result = self\n"
    "    let v : " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " (rawValue:rawValue) ;\n"
    "    if let unwrappedV = v {\n"
    "      result = unwrappedV\n"
    "    }\n"
    "    return result\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //  ValuePropertyProtocol\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func ebHashValue () -> UInt32 {\n"
    "    return UInt32 (self.rawValue)\n"
    "  }\n"
    "\n"
    "  func convertToNSObject () -> NSObject {\n"
    "    return NSNumber (value: self.rawValue)\n"
    "  }\n"
    "\n"
    "  static func convertFromNSObject (object : NSObject) -> " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n"
    "    var result = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_CONSTANT_5F_ORDERED_5F_LIST.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("enum.swift.galgasTemplate", 51)).getter_string (HERE).stringValue () ;
  result << "\n"
    "    if let number = object as\? NSNumber, let v = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " (rawValue: number.intValue) {\n"
    "      result = v\n"
    "    }\n"
    "    return result\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "typealias EBReadOnlyProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBReadOnlyValueProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n"
    "typealias EBTransientProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBTransientValueProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n"
    "typealias EBReadWriteProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBReadWriteValueProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n"
    "typealias EBStoredProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBStoredValueProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n"
    "typealias EBPropertyProxy_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBPropertyValueProxy <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Overriding extension method '@enumForGeneration generateCode'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumForGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                            const GALGAS_string constinArgument_inOutputDirectory,
                                                            GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumForGeneration * object = (const cPtr_enumForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mEnumConstantList.getter_length (SOURCE_FILE ("enumeration.galgas", 108)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_4037 = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (inCompiler, object->mProperty_mEnumName, object->mProperty_mEnumConstantList COMMA_SOURCE_FILE ("enumeration.galgas", 109))) ;
      GALGAS_string var_fileName_4162 = GALGAS_string ("enum-").add_operation (object->mProperty_mEnumName, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 113)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 113)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_4162  COMMA_SOURCE_FILE ("enumeration.galgas", 114)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_4162, var_s_4037, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 115)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumForGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_enumForGeneration.mSlotID,
                                     extensionMethod_enumForGeneration_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumForGeneration_generateCode (defineExtensionMethod_enumForGeneration_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@atomicClassDeclarationAST enterInPrecedenceGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_atomicClassDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_atomicClassDeclarationAST * object = (const cPtr_atomicClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_atomicClassDeclarationAST) ;
  {
  const GALGAS_atomicClassDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mClassName, temp_0, inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas", 12)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_atomicClassDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_atomicClassDeclarationAST.mSlotID,
                                               extensionMethod_atomicClassDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_atomicClassDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_atomicClassDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Overriding extension getter '@atomicClassDeclarationAST lkey'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_atomicClassDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_atomicClassDeclarationAST * object = (const cPtr_atomicClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_atomicClassDeclarationAST) ;
  result_result = object->mProperty_mClassName ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_atomicClassDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_atomicClassDeclarationAST.mSlotID,
                             extensionGetter_atomicClassDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_atomicClassDeclarationAST_lkey (defineExtensionGetter_atomicClassDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'enterAtomicClassesIn'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterAtomicClassesIn (GALGAS_declarationListAST & ioArgument_ioDeclarationListAST,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("Double").getter_nowhere (SOURCE_FILE ("atomic-class.galgas", 26)), GALGAS_typeKind::constructor_doubleType (SOURCE_FILE ("atomic-class.galgas", 26))  COMMA_SOURCE_FILE ("atomic-class.galgas", 26))  COMMA_SOURCE_FILE ("atomic-class.galgas", 26)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("String").getter_nowhere (SOURCE_FILE ("atomic-class.galgas", 27)), GALGAS_typeKind::constructor_stringType (SOURCE_FILE ("atomic-class.galgas", 27))  COMMA_SOURCE_FILE ("atomic-class.galgas", 27))  COMMA_SOURCE_FILE ("atomic-class.galgas", 27)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("Int").getter_nowhere (SOURCE_FILE ("atomic-class.galgas", 28)), GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("atomic-class.galgas", 28))  COMMA_SOURCE_FILE ("atomic-class.galgas", 28))  COMMA_SOURCE_FILE ("atomic-class.galgas", 28)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("Bool").getter_nowhere (SOURCE_FILE ("atomic-class.galgas", 29)), GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("atomic-class.galgas", 29))  COMMA_SOURCE_FILE ("atomic-class.galgas", 29))  COMMA_SOURCE_FILE ("atomic-class.galgas", 29)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("NSColor").getter_nowhere (SOURCE_FILE ("atomic-class.galgas", 31)), GALGAS_typeKind::constructor_colorType (SOURCE_FILE ("atomic-class.galgas", 31))  COMMA_SOURCE_FILE ("atomic-class.galgas", 31))  COMMA_SOURCE_FILE ("atomic-class.galgas", 31)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("NSFont").getter_nowhere (SOURCE_FILE ("atomic-class.galgas", 32)), GALGAS_typeKind::constructor_fontType (SOURCE_FILE ("atomic-class.galgas", 32))  COMMA_SOURCE_FILE ("atomic-class.galgas", 32))  COMMA_SOURCE_FILE ("atomic-class.galgas", 32)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("Date").getter_nowhere (SOURCE_FILE ("atomic-class.galgas", 33)), GALGAS_typeKind::constructor_dateType (SOURCE_FILE ("atomic-class.galgas", 33))  COMMA_SOURCE_FILE ("atomic-class.galgas", 33))  COMMA_SOURCE_FILE ("atomic-class.galgas", 33)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@atomicClassDeclarationAST firstAnalysisPhase'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_atomicClassDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_atomicClassDeclarationAST * object = (const cPtr_atomicClassDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_atomicClassDeclarationAST) ;
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (object->mProperty_mClassName, GALGAS_classKind::constructor_atomic (object->mProperty_mKind  COMMA_SOURCE_FILE ("atomic-class.galgas", 46)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("atomic-class.galgas", 47)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("atomic-class.galgas", 48)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("atomic-class.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas", 44)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_atomicClassDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_atomicClassDeclarationAST.mSlotID,
                                           extensionMethod_atomicClassDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_atomicClassDeclarationAST_firstAnalysisPhase (defineExtensionMethod_atomicClassDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@classDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mClassName, temp_0, inCompiler COMMA_SOURCE_FILE ("class.galgas", 15)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               extensionMethod_classDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_classDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Overriding extension getter '@classDeclarationAST lkey'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_classDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  result_result = object->mProperty_mClassName ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_classDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                             extensionGetter_classDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_classDeclarationAST_lkey (defineExtensionGetter_classDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@classDeclarationAST firstAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_actionMap var_actionMap_2920 ;
  {
  routine_buildActionMap (object->mProperty_mActionDeclarationList, var_actionMap_2920, inCompiler  COMMA_SOURCE_FILE ("class.galgas", 76)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (object->mProperty_mClassName, GALGAS_classKind::constructor_simpleClass (SOURCE_FILE ("class.galgas", 79)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("class.galgas", 80)), var_actionMap_2920, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("class.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("class.galgas", 77)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                           extensionMethod_classDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classDeclarationAST_firstAnalysisPhase (defineExtensionMethod_classDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@classDeclarationAST thirdAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_propertyGenerationList var_propertyGenerationList_3421 ;
  GALGAS_classKind joker_3363_3 ; // Joker input parameter
  GALGAS_propertyMap joker_3363_2 ; // Joker input parameter
  GALGAS_actionMap joker_3363_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, joker_3363_3, joker_3363_2, joker_3363_1, var_propertyGenerationList_3421, inCompiler COMMA_SOURCE_FILE ("class.galgas", 92)) ;
  cEnumerator_externSwiftFunctionList enumerator_3493 (object->mProperty_mExternSwiftFunctionList, kENUMERATION_UP) ;
  while (enumerator_3493.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = function_externSwiftFunctionCallerSet (inCompiler COMMA_SOURCE_FILE ("class.galgas", 99)).getter_hasKey (enumerator_3493.current_mCallerName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("class.galgas", 99)).operator_not (SOURCE_FILE ("class.galgas", 99)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_m_3585 = GALGAS_string ("allowed here:") ;
        cEnumerator_stringset enumerator_3650 (function_externSwiftFunctionCallerSet (inCompiler COMMA_SOURCE_FILE ("class.galgas", 101)), kENUMERATION_UP) ;
        while (enumerator_3650.hasCurrentObject ()) {
          var_m_3585.plusAssign_operation(GALGAS_string (" '").add_operation (enumerator_3650.current (HERE), inCompiler COMMA_SOURCE_FILE ("class.galgas", 102)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("class.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("class.galgas", 102)) ;
          if (enumerator_3650.hasNextObject ()) {
            var_m_3585.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("class.galgas", 103)) ;
          }
          enumerator_3650.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_3493.current_mCallerName (HERE).getter_location (SOURCE_FILE ("class.galgas", 105)), var_m_3585, fixItArray1  COMMA_SOURCE_FILE ("class.galgas", 105)) ;
      }
    }
    enumerator_3493.gotoNextObject () ;
  }
  GALGAS_actionMap var_actionMap_3820 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("class.galgas", 109)) ;
  cEnumerator_lstringlist enumerator_3870 (object->mProperty_mActionDeclarationList, kENUMERATION_UP) ;
  while (enumerator_3870.hasCurrentObject ()) {
    {
    var_actionMap_3820.setter_insertKey (enumerator_3870.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("class.galgas", 111)) ;
    }
    ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_actionFileGeneration::constructor_new (object->mProperty_mClassName.getter_string (HERE), enumerator_3870.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("class.galgas", 112))  COMMA_SOURCE_FILE ("class.galgas", 112)) ;
    enumerator_3870.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_classForGeneration::constructor_new (object->mProperty_mClassName.getter_string (HERE), var_propertyGenerationList_3421, object->mProperty_mExternSwiftFunctionList, object->mProperty_mExternSwiftDelegateList  COMMA_SOURCE_FILE ("class.galgas", 115))  COMMA_SOURCE_FILE ("class.galgas", 115)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                           extensionMethod_classDeclarationAST_thirdAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_classDeclarationAST_thirdAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Once function 'externSwiftFunctionCallerSet'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset onceFunction_externSwiftFunctionCallerSet (C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outResult ; // Returned variable
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("class.galgas", 126)) ;
  temp_0.addAssign_operation (GALGAS_string ("setUpWithDictionary")  COMMA_SOURCE_FILE ("class.galgas", 126)) ;
  temp_0.addAssign_operation (GALGAS_string ("init")  COMMA_SOURCE_FILE ("class.galgas", 126)) ;
  temp_0.addAssign_operation (GALGAS_string ("saveIntoDictionary")  COMMA_SOURCE_FILE ("class.galgas", 126)) ;
  result_outResult = temp_0 ;
//---
  return result_outResult ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_externSwiftFunctionCallerSet = false ;
static GALGAS_stringset gOnceFunctionResult_externSwiftFunctionCallerSet ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset function_externSwiftFunctionCallerSet (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_externSwiftFunctionCallerSet) {
    gOnceFunctionResult_externSwiftFunctionCallerSet = onceFunction_externSwiftFunctionCallerSet (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_externSwiftFunctionCallerSet = true ;
  }
  return gOnceFunctionResult_externSwiftFunctionCallerSet ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_externSwiftFunctionCallerSet (void) {
  gOnceFunctionResult_externSwiftFunctionCallerSet.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_externSwiftFunctionCallerSet (NULL,
                                                                          releaseOnceFunctionResult_externSwiftFunctionCallerSet) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_externSwiftFunctionCallerSet [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_externSwiftFunctionCallerSet (C_Compiler * inCompiler,
                                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  return function_externSwiftFunctionCallerSet (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_externSwiftFunctionCallerSet ("externSwiftFunctionCallerSet",
                                                                              functionWithGenericHeader_externSwiftFunctionCallerSet,
                                                                              & kTypeDescriptor_GALGAS_stringset,
                                                                              0,
                                                                              functionArgs_externSwiftFunctionCallerSet) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Overriding extension method '@classForGeneration generateCode'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classForGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                             const GALGAS_string constinArgument_inOutputDirectory,
                                                             GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classForGeneration * object = (const cPtr_classForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classForGeneration) ;
  GALGAS_atomicPropertyGenerationList var_atomicPropertyGenerationList_5290 = GALGAS_atomicPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("class.galgas", 146)) ;
  cEnumerator_propertyGenerationList enumerator_5339 (object->mProperty_mPropertyGenerationList, kENUMERATION_UP) ;
  while (enumerator_5339.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_atomicPropertyGeneration var_atomicProperty_5368 (dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_5339.current_mProperty (HERE).ptr ())) ;
      if (NULL == var_atomicProperty_5368.ptr ()) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_atomicPropertyGenerationList_5290.addAssign_operation (var_atomicProperty_5368  COMMA_SOURCE_FILE ("class.galgas", 149)) ;
      }
    }
    enumerator_5339.gotoNextObject () ;
  }
  GALGAS_string var_s_5489 = GALGAS_string (filewrapperTemplate_classGenerationTemplate_classImplementationInSwift (inCompiler, object->mProperty_mClassName, object->mProperty_mPropertyGenerationList, var_atomicPropertyGenerationList_5290, object->mProperty_mExternSwiftFunctionList, object->mProperty_mExternSwiftDelegateList, GALGAS_string ("<< not handled>>") COMMA_SOURCE_FILE ("class.galgas", 152))) ;
  GALGAS_string var_fileName_5737 = object->mProperty_mClassName.add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("class.galgas", 160)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_5737  COMMA_SOURCE_FILE ("class.galgas", 161)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_5737, var_s_5489, inCompiler COMMA_SOURCE_FILE ("class.galgas", 162)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classForGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_classForGeneration.mSlotID,
                                     extensionMethod_classForGeneration_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classForGeneration_generateCode (defineExtensionMethod_classForGeneration_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'classGenerationTemplate'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_4_classGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_classGenerationTemplate_4,
  0,
  gWrapperAllDirectories_classGenerationTemplate_4
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_5_classGenerationTemplate (
  "outlet-classes",
  0,
  gWrapperAllFiles_classGenerationTemplate_5,
  0,
  gWrapperAllDirectories_classGenerationTemplate_5
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_classGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_classGenerationTemplate_1,
  0,
  gWrapperAllDirectories_classGenerationTemplate_1
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_3 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_3_classGenerationTemplate (
  "swift-sources",
  0,
  gWrapperAllFiles_classGenerationTemplate_3,
  0,
  gWrapperAllDirectories_classGenerationTemplate_3
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_2 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_classGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_classGenerationTemplate_2,
  0,
  gWrapperAllDirectories_classGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_0 [6] = {
  & gWrapperDirectory_4_classGenerationTemplate,
  & gWrapperDirectory_5_classGenerationTemplate,
  & gWrapperDirectory_1_classGenerationTemplate,
  & gWrapperDirectory_3_classGenerationTemplate,
  & gWrapperDirectory_2_classGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_classGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_classGenerationTemplate_0,
  5,
  gWrapperAllDirectories_classGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Filewrapper template 'classGenerationTemplate classImplementationInSwift'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_classGenerationTemplate_classImplementationInSwift (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & in_CLASS_5F_NAME,
                                                                                      const GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                      const GALGAS_atomicPropertyGenerationList & in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                      const GALGAS_externSwiftFunctionList & in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                      const GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                      const GALGAS_string & /* in_EXPLORER_5F_ACCESS */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("Class: ").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 8)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class " ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " : EBSimpleClass" ;
  GALGAS_uint index_678_ (0) ;
  if (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_678 (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_678.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_678.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 13)).stringValue () ;
      index_678_.increment () ;
      enumerator_678.gotoNextObject () ;
    }
  }
  result << " {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //  Undo manager\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var undoManager : EBUndoManager\? = nil {\n"
    "    didSet {\n" ;
  GALGAS_uint index_1106_ (0) ;
  if (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_1106 (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_1106.hasCurrentObject ()) {
      result << "      self." ;
      result << enumerator_1106.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 25)).stringValue () ;
      result << "_property.undoManager = self.undoManager\n" ;
      index_1106_.increment () ;
      enumerator_1106.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "\n" ;
  GALGAS_uint index_1252_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_1252 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_1252.hasCurrentObject ()) {
      result << callExtensionGetter_declarationCode ((const cPtr_propertyGeneration *) enumerator_1252.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 32)).stringValue () ;
      index_1252_.increment () ;
      enumerator_1252.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Extern delegates\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_1624_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_1624 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_1624.hasCurrentObject ()) {
      result << "  var mExternDelegate" ;
      result << index_1624_idx.getter_string (SOURCE_FILE ("class.swift.galgasTemplate", 41)).stringValue () ;
      result << " : " ;
      result << enumerator_1624.current_mExternSwiftDelegateName (HERE).getter_string (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_1624_idx.increment () ;
      enumerator_1624.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    init\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    super.init ()\n" ;
  GALGAS_uint index_2060_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2060 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2060.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_2060.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 52)).stringValue () ;
      index_2060_.increment () ;
      enumerator_2060.gotoNextObject () ;
    }
  }
  result << "  //--- Extern functions\n" ;
  GALGAS_uint index_2180_ (0) ;
  if (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_2180 (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_2180.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2180.current_mCallerName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("init"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "    " ;
        result << enumerator_2180.current_mExternSwiftFunctionName (HERE).getter_string (HERE).stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_2180_.increment () ;
      enumerator_2180.gotoNextObject () ;
    }
  }
  result << "  //--- Extern delegates\n" ;
  GALGAS_uint index_2380_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_2380 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_2380.hasCurrentObject ()) {
      result << "    mExternDelegate" ;
      result << index_2380_idx.getter_string (SOURCE_FILE ("class.swift.galgasTemplate", 64)).stringValue () ;
      result << " = " ;
      result << enumerator_2380.current_mExternSwiftDelegateName (HERE).getter_string (HERE).stringValue () ;
      result << " (object:self)\n" ;
      index_2380_idx.increment () ;
      enumerator_2380.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    populateExplorerWindow\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func populateExplorerWindow (_ y : inout CGFloat, view : NSView) {\n"
    "    super.populateExplorerWindow (&y, view:view)\n" ;
  GALGAS_uint index_2938_ (0) ;
  if (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_2938 (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2938.hasCurrentObject ()) {
      result << "    createEntryForPropertyNamed (\n"
        "      \"" ;
      result << enumerator_2938.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 77)).stringValue () ;
      result << "\",\n"
        "      idx:self." ;
      result << enumerator_2938.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 78)).stringValue () ;
      result << "_property.mEasyBindingsObjectIndex,\n"
        "      y:&y,\n"
        "      view:view,\n"
        "      observerExplorer:&self." ;
      result << enumerator_2938.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 81)).stringValue () ;
      result << "_property.mObserverExplorer,\n"
        "      valueExplorer:&self." ;
      result << enumerator_2938.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 82)).stringValue () ;
      result << "_property.mValueExplorer\n"
        "    )\n" ;
      index_2938_.increment () ;
      enumerator_2938.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    clearObjectExplorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func clearObjectExplorer () {\n" ;
  GALGAS_uint index_3709_ (0) ;
  if (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_3709 (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_3709.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_3709.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 93)).stringValue () ;
      result << "_property.mObserverExplorer = nil\n"
        "    self." ;
      result << enumerator_3709.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 94)).stringValue () ;
      result << "_property.mValueExplorer = nil\n" ;
      index_3709_.increment () ;
      enumerator_3709.gotoNextObject () ;
    }
  }
  result << "    super.clearObjectExplorer ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    saveIntoDictionary\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func saveInto (dictionary : NSMutableDictionary) {\n"
    "    super.saveInto (dictionary: dictionary)\n" ;
  GALGAS_uint index_4334_ (0) ;
  if (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_4334 (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_4334.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_4334.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 107)).stringValue () ;
      result << "_property.storeIn (dictionary: dictionary, forKey: \"" ;
      result << enumerator_4334.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 107)).stringValue () ;
      result << "\")\n" ;
      index_4334_.increment () ;
      enumerator_4334.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4521_ (0) ;
  if (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_4521 (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_4521.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_4521.current_mCallerName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("saveIntoDictionary"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "    " ;
        result << enumerator_4521.current_mExternSwiftFunctionName (HERE).getter_string (HERE).stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_4521_.increment () ;
      enumerator_4521.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    setUpWithDictionary\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func setUp (withDictionary dictionary : NSDictionary) {\n"
    "    super.setUp (withDictionary: dictionary)\n" ;
  GALGAS_uint index_5082_ (0) ;
  if (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_5082 (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_5082.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_5082.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 124)).stringValue () ;
      result << "_property.readFrom (dictionary: dictionary, forKey:\"" ;
      result << enumerator_5082.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 124)).stringValue () ;
      result << "\")\n" ;
      index_5082_.increment () ;
      enumerator_5082.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5265_ (0) ;
  if (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_5265 (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_5265.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5265.current_mCallerName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("setUpWithDictionary"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    " ;
        result << enumerator_5265.current_mExternSwiftFunctionName (HERE).getter_string (HERE).stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_5265_.increment () ;
      enumerator_5265.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//   Class as transient property\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "typealias EBReadOnlyProperty_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " = EBReadOnlyClassProperty <" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << ">\n"
    "typealias EBTransientProperty_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " = EBTransientClassProperty <" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << ">\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("ReadOnlyArrayOf_").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 145)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class ReadOnlyArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " : ReadOnlyAbstractArrayProperty <" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "> {\n"
    "\n" ;
  GALGAS_uint index_6381_ (0) ;
  if (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_6381 (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_6381.hasCurrentObject ()) {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  // Stored property '" ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 153)).stringValue () ;
      result << "'\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  private var mObserversOf_" ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 156)).stringValue () ;
      result << " = EBWeakEventSet ()\n"
        "\n"
        "  final func addEBObserverOf_" ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 158)).stringValue () ;
      result << " (_ inObserver : EBEvent) {\n"
        "    mObserversOf_" ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 159)).stringValue () ;
      result << ".insert (inObserver)\n"
        "    switch prop {\n"
        "    case .empty, .multiple :\n"
        "      break\n"
        "    case .single (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 165)).stringValue () ;
      result << "_property.addEBObserver (inObserver)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func removeEBObserverOf_" ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 170)).stringValue () ;
      result << " (_ inObserver : EBEvent) {\n"
        "    mObserversOf_" ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 171)).stringValue () ;
      result << ".remove (inObserver)\n"
        "    switch prop {\n"
        "    case .empty, .multiple :\n"
        "      break\n"
        "    case .single (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 177)).stringValue () ;
      result << "_property.removeEBObserver (inObserver)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func addEBObserversOf_" ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 182)).stringValue () ;
      result << "_toElementsOfSet (_ inSet : Set<" ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << ">) {\n"
        "    for managedObject in inSet {\n"
        "      for observer in mObserversOf_" ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 184)).stringValue () ;
      result << " {\n"
        "        managedObject." ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 185)).stringValue () ;
      result << "_property.addEBObserver (observer)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func removeEBObserversOf_" ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 190)).stringValue () ;
      result << "_fromElementsOfSet (_ inSet : Set<" ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << ">) {\n"
        "    for observer in mObserversOf_" ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 191)).stringValue () ;
      result << " {\n"
        "      observer.postEvent ()\n"
        "      for managedObject in inSet {\n"
        "        managedObject." ;
      result << enumerator_6381.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 194)).stringValue () ;
      result << "_property.removeEBObserver (observer)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n" ;
      index_6381_.increment () ;
      enumerator_6381.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8214_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_8214 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_8214.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (enumerator_8214.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
          "  // Transient property '" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 204)).stringValue () ;
        result << "'\n"
          "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
          "\n"
          "  private var mObserversOf_" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 207)).stringValue () ;
        result << " = EBWeakEventSet ()\n"
          "\n"
          "  final func addEBObserverOf_" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 209)).stringValue () ;
        result << " (_ inObserver : EBEvent) {\n"
          "    mObserversOf_" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 210)).stringValue () ;
        result << ".insert (inObserver)\n"
          "    switch prop {\n"
          "    case .empty, .multiple :\n"
          "      break\n"
          "    case .single (let v) :\n"
          "      for managedObject in v {\n"
          "        managedObject." ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 216)).stringValue () ;
        result << "_property.addEBObserver (inObserver)\n"
          "      }\n"
          "    }\n"
          "  }\n"
          "\n"
          "  final func removeEBObserverOf_" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 221)).stringValue () ;
        result << " (_ inObserver : EBEvent) {\n"
          "    mObserversOf_" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 222)).stringValue () ;
        result << ".remove (inObserver)\n"
          "    switch prop {\n"
          "    case .empty, .multiple :\n"
          "      break\n"
          "    case .single (let v) :\n"
          "      for managedObject in v {\n"
          "        managedObject." ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 228)).stringValue () ;
        result << "_property.removeEBObserver (inObserver)\n"
          "      }\n"
          "    }\n"
          "  }\n"
          "\n"
          "  final func postEventTo_" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 233)).stringValue () ;
        result << " () {\n"
          "    switch prop {\n"
          "    case .empty, .multiple :\n"
          "      break\n"
          "    case .single (let v) :\n"
          "      for managedObject in v {\n"
          "        managedObject." ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 239)).stringValue () ;
        result << "_property.postEvent ()\n"
          "      }\n"
          "    }\n"
          "  }\n"
          "\n"
          "  final func addEBObserversOf_" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 244)).stringValue () ;
        result << "_toElementsOfSet (_ inSet : Set<" ;
        result << in_CLASS_5F_NAME.stringValue () ;
        result << ">) {\n"
          "    for managedObject in inSet {\n"
          "      for observer in mObserversOf_" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 246)).stringValue () ;
        result << " {\n"
          "        managedObject." ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 247)).stringValue () ;
        result << "_property.addEBObserver (observer)\n"
          "      }\n"
          "    }\n"
          "  }\n"
          "\n"
          "  final func removeEBObserversOf_" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 252)).stringValue () ;
        result << "_fromElementsOfSet (_ inSet : Set<" ;
        result << in_CLASS_5F_NAME.stringValue () ;
        result << ">) {\n"
          "    for managedObject in inSet {\n"
          "      for observer in mObserversOf_" ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 254)).stringValue () ;
        result << " {\n"
          "        managedObject." ;
        result << enumerator_8214.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 255)).stringValue () ;
        result << "_property.removeEBObserver (observer)\n"
          "      }\n"
          "    }\n"
          "  }\n"
          "  \n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_8214_.increment () ;
      enumerator_8214.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("TransientArrayOf_").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 268)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class TransientArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " : ReadOnlyArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " {\n"
    "\n"
    "  var readModelFunction : Optional<() -> EBSelection < [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] > >\n"
    " \n"
    "  private var prop_cache : EBSelection < [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] >\? \n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    super.init ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var prop : EBSelection < [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] > {\n"
    "    get {\n"
    "      if let unwrappedComputeFunction = readModelFunction, prop_cache == nil {\n"
    "        prop_cache = unwrappedComputeFunction ()\n"
    "      }\n"
    "      if prop_cache == nil {\n"
    "        prop_cache = .empty\n"
    "      }\n"
    "      return prop_cache!\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func postEvent () {\n"
    "    if prop_cache != nil {\n"
    "      prop_cache = nil\n"
    "      if logEvents () {\n"
    "        appendMessageString (\"  \\(explorerIndexString (self.mEasyBindingsObjectIndex)) propagation\\n\")\n"
    "      }\n"
    "      super.postEvent ()\n"
    "    }else if logEvents () {\n"
    "      appendMessageString (\"  \\(explorerIndexString (self.mEasyBindingsObjectIndex)) nil\\n\")\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_12193_ (0) ;
  if (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_12193 (in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_12193.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
        "\n"
        "protocol " ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_12193.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 319)).stringValue () ;
      result << " : class {\n"
        "  var " ;
      result << enumerator_12193.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 320)).stringValue () ;
      result << " : " ;
      result << extensionGetter_swiftTypeName (enumerator_12193.current_mProperty (HERE).getter_mType (SOURCE_FILE ("class.swift.galgasTemplate", 320)), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 320)).stringValue () ;
      result << " { get }\n"
        "}\n"
        "\n" ;
      index_12193_.increment () ;
      enumerator_12193.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("Read write array of class: ").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 328)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class ReadWriteArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " : ReadOnlyArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //  Undo manager\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var undoManager : EBUndoManager\? = nil {\n"
    "    didSet {\n"
    "      for object in self.propval {\n"
    "        object.undoManager = self.undoManager\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //  Abstract methods\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func setProp (_ value:  [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "]) { }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var propval : [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] { get { return [] } }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("Stored array of class: ").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 359)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class StoredArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " : ReadWriteArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //  Preferences Key\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private let mPreferencesKey : String\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //  Init\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  init (_ inPreferencesKey : String) {\n"
    "    mPreferencesKey = inPreferencesKey\n"
    "    super.init ()\n"
    "  //--- Read from user defaults\n"
    "    let ud = UserDefaults.standard\n"
    "    let value : Any\? = ud.object (forKey: self.mPreferencesKey)\n"
    "    if let unwValue : Any = value {\n"
    "      if let array : [NSDictionary] = unwValue as\? [NSDictionary] {\n"
    "        for dict in array {\n"
    "          let object = " ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " ()\n"
    "          object.setUp (withDictionary: dict)\n"
    "          mValue.append (object)\n"
    "        }\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mSet = Set<" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "> ()\n"
    "  private var mValue = [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] () {\n"
    "    didSet {\n"
    "      if oldValue != mValue {\n"
    "        let oldSet = mSet\n"
    "        mSet = Set (mValue)\n"
    "      //--- Register old value in undo manager\n"
    "        self.undoManager\?.registerUndo (withTarget: self, selector:#selector(performUndo(_:)), object:oldValue)\n"
    "      //--- Removed object set\n"
    "        let removedSet = oldSet.subtracting (mSet)\n" ;
  GALGAS_uint index_15894_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_15894 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_15894.hasCurrentObject ()) {
      result << "        removeEBObserversOf_" ;
      result << enumerator_15894.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 405)).stringValue () ;
      result << "_fromElementsOfSet (removedSet)\n" ;
      index_15894_.increment () ;
      enumerator_15894.gotoNextObject () ;
    }
  }
  result << "        for object in removedSet {\n"
    "          object.undoManager = nil\n"
    "        }\n"
    "      //--- Added object set\n"
    "        let addedSet = mSet.subtracting (oldSet)\n" ;
  GALGAS_uint index_16195_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_16195 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_16195.hasCurrentObject ()) {
      result << "        addEBObserversOf_" ;
      result << enumerator_16195.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("class.swift.galgasTemplate", 414)).stringValue () ;
      result << "_toElementsOfSet (addedSet)\n" ;
      index_16195_.increment () ;
      enumerator_16195.gotoNextObject () ;
    }
  }
  result << "        for object in addedSet {\n"
    "          object.undoManager = self.undoManager\n"
    "        }\n"
    "      //--- Notify observers object count did change\n"
    "        postEvent ()\n"
    "      //--- Store in user defaults (undo manager is nil during setup)\n"
    "        if self.undoManager != nil {\n"
    "          let ud = UserDefaults.standard\n"
    "          var array = [NSDictionary] ()\n"
    "          for object in mValue {\n"
    "            let dict = NSMutableDictionary ()\n"
    "            object.saveInto (dictionary: dict)\n"
    "            array.append (dict)\n"
    "          }\n"
    "          ud.set (array, forKey: self.mPreferencesKey)\n"
    "        }\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  @objc func performUndo (_ oldValue : [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "]) {\n"
    "    mValue = oldValue\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var prop : EBSelection < [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] > {\n"
    "    get {\n"
    "      return .single (mValue)\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func setProp (_ value:  [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "]) { mValue = value }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var propval : [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] { get { return mValue } }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@entityDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_entityDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclarationAST * object = (const cPtr_entityDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclarationAST) ;
  {
  const GALGAS_entityDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mClassName, temp_0, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 18)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mProperty_mClassName, object->mProperty_mSuperEntityName COMMA_SOURCE_FILE ("entity.galgas", 20)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_entityDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_entityDeclarationAST.mSlotID,
                                               extensionMethod_entityDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_entityDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_entityDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Overriding extension getter '@entityDeclarationAST lkey'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_lstring extensionGetter_entityDeclarationAST_lkey (const cPtr_abstractDeclarationAST * inObject,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_entityDeclarationAST * object = (const cPtr_entityDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclarationAST) ;
  result_result = object->mProperty_mClassName ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_entityDeclarationAST_lkey (void) {
  enterExtensionGetter_lkey (kTypeDescriptor_GALGAS_entityDeclarationAST.mSlotID,
                             extensionGetter_entityDeclarationAST_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_entityDeclarationAST_lkey (defineExtensionGetter_entityDeclarationAST_lkey, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@entityDeclarationAST firstAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_entityDeclarationAST_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclarationAST * object = (const cPtr_entityDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclarationAST) ;
  GALGAS_actionMap var_actionMap_3767 ;
  {
  routine_buildActionMap (object->mProperty_mActionDeclarationList, var_actionMap_3767, inCompiler  COMMA_SOURCE_FILE ("entity.galgas", 110)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (object->mProperty_mClassName, GALGAS_classKind::constructor_entity (object->mProperty_mIsGraphicEntity  COMMA_SOURCE_FILE ("entity.galgas", 113)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 114)), var_actionMap_3767, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 111)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_entityDeclarationAST_firstAnalysisPhase (void) {
  enterExtensionMethod_firstAnalysisPhase (kTypeDescriptor_GALGAS_entityDeclarationAST.mSlotID,
                                           extensionMethod_entityDeclarationAST_firstAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_entityDeclarationAST_firstAnalysisPhase (defineExtensionMethod_entityDeclarationAST_firstAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@entityDeclarationAST thirdAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_entityDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclarationAST * object = (const cPtr_entityDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclarationAST) ;
  GALGAS_propertyMap var_propertyMap_4272 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_4335 ;
  GALGAS_classKind joker_4237 ; // Joker input parameter
  GALGAS_actionMap joker_4278 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, joker_4237, var_propertyMap_4272, joker_4278, var_propertyGenerationList_4335, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 126)) ;
  GALGAS_stringset var_transientsDeclaredInSuperEntity_4431 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("entity.galgas", 134)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mIsGraphicEntity.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_transientsDeclaredInSuperEntity_4431.addAssign_operation (GALGAS_string ("selectionDisplay")  COMMA_SOURCE_FILE ("entity.galgas", 136)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_propertyMap_4272.getter_hasKey (GALGAS_string ("selectionDisplay") COMMA_SOURCE_FILE ("entity.galgas", 137)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_propertyKind var_kind_4671 ;
          GALGAS_actionMap joker_4681 ; // Joker input parameter
          var_propertyMap_4272.method_searchKey (GALGAS_string ("selectionDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 139)), var_kind_4671, joker_4681, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 138)) ;
          GALGAS_location var_errorLocation_4714 = var_propertyMap_4272.getter_locationForKey (GALGAS_string ("selectionDisplay"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 143)) ;
          switch (var_kind_4671.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              const cEnumAssociatedValues_propertyKind_property * extractPtr_5119 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_4671.unsafePointer ()) ;
              const GALGAS_typeKind extractedValue_type = extractPtr_5119->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_5119->mAssociatedValue1 ;
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("entity.galgas", 146)).operator_not (SOURCE_FILE ("entity.galgas", 146)).boolEnum () ;
                if (kBoolTrue == test_2) {
                  TC_Array <C_FixItDescription> fixItArray3 ;
                  inCompiler->emitSemanticError (var_errorLocation_4714, GALGAS_string ("the 'selectionDisplay' property should be a transient"), fixItArray3  COMMA_SOURCE_FILE ("entity.galgas", 147)) ;
                }
              }
              if (kBoolFalse == test_2) {
                enumGalgasBool test_4 = kBoolTrue ;
                if (kBoolTrue == test_4) {
                  test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 148)).objectCompare (GALGAS_string ("EBShape"))).boolEnum () ;
                  if (kBoolTrue == test_4) {
                    TC_Array <C_FixItDescription> fixItArray5 ;
                    inCompiler->emitSemanticError (var_errorLocation_4714, GALGAS_string ("the 'selectionDisplay' transient type should be 'EBShape'"), fixItArray5  COMMA_SOURCE_FILE ("entity.galgas", 149)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (var_errorLocation_4714, GALGAS_string ("the 'selectionDisplay' transient type should be 'EBShape'"), fixItArray6  COMMA_SOURCE_FILE ("entity.galgas", 152)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (var_errorLocation_4714, GALGAS_string ("the 'selectionDisplay' transient type should be 'EBShape'"), fixItArray7  COMMA_SOURCE_FILE ("entity.galgas", 154)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (var_errorLocation_4714, GALGAS_string ("the 'selectionDisplay' transient type should be 'EBShape'"), fixItArray8  COMMA_SOURCE_FILE ("entity.galgas", 156)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_errorLocation_4714, GALGAS_string ("the 'selectionDisplay' transient type should be 'EBShape'"), fixItArray9  COMMA_SOURCE_FILE ("entity.galgas", 158)) ;
            }
            break ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (object->mProperty_mClassName.getter_location (SOURCE_FILE ("entity.galgas", 161)), GALGAS_string ("a graphic entity should declare the 'selectionDisplay' transient, with 'EBShape' type"), fixItArray10  COMMA_SOURCE_FILE ("entity.galgas", 161)) ;
      }
      var_transientsDeclaredInSuperEntity_4431.addAssign_operation (GALGAS_string ("objectDisplay")  COMMA_SOURCE_FILE ("entity.galgas", 163)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = var_propertyMap_4272.getter_hasKey (GALGAS_string ("objectDisplay") COMMA_SOURCE_FILE ("entity.galgas", 164)).boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_propertyKind var_kind_5938 ;
          GALGAS_actionMap joker_5948 ; // Joker input parameter
          var_propertyMap_4272.method_searchKey (GALGAS_string ("objectDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 166)), var_kind_5938, joker_5948, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 165)) ;
          GALGAS_location var_errorLocation_5981 = var_propertyMap_4272.getter_locationForKey (GALGAS_string ("objectDisplay"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 170)) ;
          switch (var_kind_5938.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              const cEnumAssociatedValues_propertyKind_property * extractPtr_6383 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_5938.unsafePointer ()) ;
              const GALGAS_typeKind extractedValue_type = extractPtr_6383->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_6383->mAssociatedValue1 ;
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("entity.galgas", 173)).operator_not (SOURCE_FILE ("entity.galgas", 173)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (var_errorLocation_5981, GALGAS_string ("the 'selectionDisplay' property should be a transient"), fixItArray13  COMMA_SOURCE_FILE ("entity.galgas", 174)) ;
                }
              }
              if (kBoolFalse == test_12) {
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 175)).objectCompare (GALGAS_string ("EBShape"))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (var_errorLocation_5981, GALGAS_string ("the 'selectionDisplay' transient type should be 'EBShape'"), fixItArray15  COMMA_SOURCE_FILE ("entity.galgas", 176)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (var_errorLocation_5981, GALGAS_string ("the 'selectionDisplay' transient type should be 'EBShape'"), fixItArray16  COMMA_SOURCE_FILE ("entity.galgas", 179)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (var_errorLocation_5981, GALGAS_string ("the 'selectionDisplay' transient type should be 'EBShape'"), fixItArray17  COMMA_SOURCE_FILE ("entity.galgas", 181)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (var_errorLocation_5981, GALGAS_string ("the 'selectionDisplay' transient type should be 'EBShape'"), fixItArray18  COMMA_SOURCE_FILE ("entity.galgas", 183)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (var_errorLocation_5981, GALGAS_string ("the 'selectionDisplay' transient type should be 'EBShape'"), fixItArray19  COMMA_SOURCE_FILE ("entity.galgas", 185)) ;
            }
            break ;
          }
        }
      }
      if (kBoolFalse == test_11) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (object->mProperty_mClassName.getter_location (SOURCE_FILE ("entity.galgas", 188)), GALGAS_string ("a graphic entity should declare the 'objectDisplay' transient, with 'EBShape' type"), fixItArray20  COMMA_SOURCE_FILE ("entity.galgas", 188)) ;
      }
    }
  }
  ioArgument_ioGeneration.mProperty_mEntityListForGeneration.addAssign_operation (object->mProperty_mClassName.getter_string (HERE), object->mProperty_mObsoleteEntityNames  COMMA_SOURCE_FILE ("entity.galgas", 192)) ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_entityForGeneration::constructor_new (object->mProperty_mClassName.getter_string (HERE), object->mProperty_mSuperEntityName.getter_string (HERE), var_propertyGenerationList_4335, object->mProperty_mSignatureList, object->mProperty_mIsGraphicEntity, var_transientsDeclaredInSuperEntity_4431  COMMA_SOURCE_FILE ("entity.galgas", 195))  COMMA_SOURCE_FILE ("entity.galgas", 195)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_entityDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_entityDeclarationAST.mSlotID,
                                           extensionMethod_entityDeclarationAST_thirdAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_entityDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_entityDeclarationAST_thirdAnalysisPhase, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Overriding extension method '@entityForGeneration generateCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_entityForGeneration_generateCode (const cPtr_abstractFileGeneration * inObject,
                                                              const GALGAS_string constinArgument_inOutputDirectory,
                                                              GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityForGeneration * object = (const cPtr_entityForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_entityForGeneration) ;
  GALGAS_atomicPropertyGenerationList var_atomicPropertyGenerationList_8696 = GALGAS_atomicPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 237)) ;
  GALGAS_transientPropertyGenerationList var_transientPropertyGenerationList_8768 = GALGAS_transientPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 238)) ;
  GALGAS_toOnePropertyGenerationList var_toOnePropertyGenerationList_8832 = GALGAS_toOnePropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 239)) ;
  cEnumerator_propertyGenerationList enumerator_8881 (object->mProperty_mPropertyGenerationList, kENUMERATION_UP) ;
  while (enumerator_8881.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_atomicPropertyGeneration var_atomicProperty_8910 (dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_8881.current_mProperty (HERE).ptr ())) ;
      if (NULL == var_atomicProperty_8910.ptr ()) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_atomicPropertyGenerationList_8696.addAssign_operation (var_atomicProperty_8910  COMMA_SOURCE_FILE ("entity.galgas", 242)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        GALGAS_transientPropertyGeneration var_transientProperty_9041 (dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_8881.current_mProperty (HERE).ptr ())) ;
        if (NULL == var_transientProperty_9041.ptr ()) {
          test_1 = kBoolFalse ;
        }
        if (kBoolTrue == test_1) {
          var_transientPropertyGenerationList_8768.addAssign_operation (var_transientProperty_9041  COMMA_SOURCE_FILE ("entity.galgas", 244)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          GALGAS_toOnePropertyGeneration var_toOneProperty_9177 (dynamic_cast <const cPtr_toOnePropertyGeneration *> (enumerator_8881.current_mProperty (HERE).ptr ())) ;
          if (NULL == var_toOneProperty_9177.ptr ()) {
            test_2 = kBoolFalse ;
          }
          if (kBoolTrue == test_2) {
            var_toOnePropertyGenerationList_8832.addAssign_operation (var_toOneProperty_9177  COMMA_SOURCE_FILE ("entity.galgas", 246)) ;
          }
        }
      }
    }
    enumerator_8881.gotoNextObject () ;
  }
  GALGAS_string var_s_9295 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (inCompiler, object->mProperty_mEntityName, object->mProperty_mPropertyGenerationList, var_atomicPropertyGenerationList_8696, var_transientPropertyGenerationList_8768, var_toOnePropertyGenerationList_8832, GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("entity.galgas", 255)), object->mProperty_mSignatureSet, object->mProperty_mIsGraphicEntity, object->mProperty_mTransientsDeclaredInSuperEntity COMMA_SOURCE_FILE ("entity.galgas", 249))) ;
  GALGAS_string var_fileName_9732 = GALGAS_string ("entity-").add_operation (object->mProperty_mEntityName, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 262)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 262)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_9732  COMMA_SOURCE_FILE ("entity.galgas", 263)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_9732, var_s_9295, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 264)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_entityForGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_entityForGeneration.mSlotID,
                                     extensionMethod_entityForGeneration_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_entityForGeneration_generateCode (defineExtensionMethod_entityForGeneration_generateCode, NULL) ;

