#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-4.h"

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
  if (kOperandEqual == result) {
    result = mProperty_mSelectionEntityName.objectCompare (p->mProperty_mSelectionEntityName) ;
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
                                                                                                    const GALGAS_lstring & inAttribute_mModelControllerPropertyName,
                                                                                                    const GALGAS_lstring & inAttribute_mSelectionEntityName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mSelectionControllerName.isValid () && inAttribute_mModelControllerName.isValid () && inAttribute_mModelControllerPropertyName.isValid () && inAttribute_mSelectionEntityName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectionControllerDeclarationAST (inAttribute_mClassName, inAttribute_mSelectionControllerName, inAttribute_mModelControllerName, inAttribute_mModelControllerPropertyName, inAttribute_mSelectionEntityName COMMA_THERE)) ;
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

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mSelectionEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mSelectionEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mSelectionEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @selectionControllerDeclarationAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioString << ", " ;
  mProperty_mSelectionEntityName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_selectionControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectionControllerDeclarationAST (mProperty_mClassName, mProperty_mSelectionControllerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName, mProperty_mSelectionEntityName COMMA_THERE)) ;
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
  if (kOperandEqual == result) {
    result = mProperty_mNegative.objectCompare (p->mProperty_mNegative) ;
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
  return GALGAS_integerAsDefaultValue::constructor_new (GALGAS_luint::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (const cPtr_integerAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::constructor_new (const GALGAS_luint & inAttribute_mValue,
                                                                            const GALGAS_bool & inAttribute_mNegative
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue result ;
  if (inAttribute_mValue.isValid () && inAttribute_mNegative.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerAsDefaultValue (inAttribute_mValue, inAttribute_mNegative COMMA_THERE)) ;
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

GALGAS_bool GALGAS_integerAsDefaultValue::getter_mNegative (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    result = p->mProperty_mNegative ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_integerAsDefaultValue::getter_mNegative (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNegative ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @integerAsDefaultValue class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_integerAsDefaultValue::cPtr_integerAsDefaultValue (const GALGAS_luint & in_mValue,
                                                        const GALGAS_bool & in_mNegative
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue),
mProperty_mNegative (in_mNegative) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_integerAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerAsDefaultValue (mProperty_mValue, mProperty_mNegative COMMA_THERE)) ;
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
mProperty_mBindingName (),
mProperty_mOutletClassBindingSpecificationModelList (),
mProperty_mBindingOptionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element::~ GALGAS_outletClassBindingSpecificationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                              const GALGAS_controllerBindingOptionList & inOperand3) :
mProperty_mOutletClassName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mOutletClassBindingSpecificationModelList (inOperand2),
mProperty_mBindingOptionList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (HERE),
                                                                GALGAS_controllerBindingOptionList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                                              const GALGAS_controllerBindingOptionList & inOperand3 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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
  return mProperty_mOutletClassName.isValid () && mProperty_mBindingName.isValid () && mProperty_mOutletClassBindingSpecificationModelList.isValid () && mProperty_mBindingOptionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList_2D_element::drop (void) {
  mProperty_mOutletClassName.drop () ;
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
//                                 Extension Getter '@propertyMap-element isAbstract'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_isAbstract (const GALGAS_propertyMap_2D_element & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = inObject.mProperty_mKind.getter_isProperty (SOURCE_FILE ("semantic-analysis.galgas", 129)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_propertyAccessibility var_accessibility_5370 ;
      GALGAS_typeKind joker_5312_1 ; // Joker input parameter
      inObject.mProperty_mKind.method_property (joker_5312_1, var_accessibility_5370, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 130)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_accessibility_5370.getter_isTransient (SOURCE_FILE ("semantic-analysis.galgas", 131)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_bool var_ab_5462 ;
          var_accessibility_5370.method_transient (var_ab_5462, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 132)) ;
          result_result = var_ab_5462 ;
        }
      }
    }
  }
//---
  return result_result ;
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
  result << "\n"
    "enum GridStyle {\n"
    "  noGrid, cross, line\n"
    "}\n"
    "\n"
    "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "transient property struct CGFloat ;\n"
    "\n"
    "transient property class NSImage ;\n"
    "\n"
    "transient property class EBShape ;\n"
    "\n"
    "extern outlet class EBView : NSView $graphicController ;\n"
    "binding EBView $underObjectsDisplay : transient EBShape ;\n"
    "binding EBView $overObjectsDisplay : transient EBShape ;\n"
    "binding EBView $arrowKeyMagnitude : transient Int ;\n"
    "binding EBView $shiftArrowKeyMagnitude : transient Int ;\n"
    "binding EBView $backColor : transient NSColor ;\n"
    "binding EBView $mouseGrid : transient Int ;\n"
    "binding EBView $gridStep : transient Int ;\n"
    "binding EBView $gridStyle : transient GridStyle ;\n"
    "binding EBView $gridDisplayFactor : transient Int ;\n"
    "binding EBView $gridLineColor : transient NSColor ;\n"
    "binding EBView $gridCrossColor : transient NSColor ;\n"
    "binding EBView $zoom : property Int ;\n"
    "binding EBView $horizontalFlip : transient Bool ;\n"
    "binding EBView $verticalFlip : transient Bool ;\n"
    "binding EBView $xPlacardUnit : transient Int ;\n"
    "binding EBView $yPlacardUnit : transient Int ;\n"
    "\n"
    "extern outlet class NSView $hidden ;\n"
    "\n"
    "extern outlet class NSControl : NSView $enabled $run ;\n"
    "\n"
    "outlet class EBButton : NSControl ;\n"
    "binding EBButton $title : transient String ;\n"
    "\n"
    "outlet class EBColorObserverWell : NSControl ;\n"
    "binding EBColorObserverWell $colorObserver : transient NSColor ;\n"
    "\n"
    "outlet class EBColorWell : NSControl ;\n"
    "binding EBColorWell $color : property NSColor {sendContinously : Bool} ;\n"
    "\n"
    "\n"
    "outlet class EBDatePicker : NSControl ;\n"
    "binding EBDatePicker $date : property Date ;\n"
    "\n"
    "outlet class EBDoubleField : NSView ;\n"
    "binding EBDoubleField $value : property Double {sendContinously : Bool, autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "outlet class EBDoubleObserverField : NSView ;\n"
    "binding EBDoubleObserverField $valueObserver : transient Double {autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "outlet class EBIntField : NSControl ;\n"
    "binding EBIntField $value : property Int {sendContinously : Bool, autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "outlet class EBIntObserverField : NSView ;\n"
    "binding EBIntObserverField $valueObserver : transient Int {autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "outlet class EBFontButton : NSControl ;\n"
    "binding EBFontButton $fontValue : property NSFont ;\n"
    "\n"
    "\n"
    "outlet class EBPopUpButton : NSControl ;\n"
    "binding EBPopUpButton $selectedTag : property Int ;\n"
    "binding EBPopUpButton $selectedIndex : property enum ;\n"
    "\n"
    "\n"
    "outlet class EBGroupButton : NSControl ;\n"
    "binding EBGroupButton $selectedIndex : property Int ;\n"
    "\n"
    "\n"
    "outlet class EBImageObserverView : NSView ;\n"
    "binding EBImageObserverView $image : transient NSImage ;\n"
    "binding EBImageObserverView $tooltip : transient String ;\n"
    "\n"
    "\n"
    "outlet class EBMenu ;\n"
    "\n"
    "\n"
    "outlet class EBMenuItem ;\n"
    "\n"
    "\n"
    "outlet class EBCheckedMenuItem ;\n"
    "binding EBCheckedMenuItem $checked : property Bool ;\n"
    "\n"
    "\n"
    "outlet class EBProgressIndicator : NSView ;\n"
    "\n"
    "\n"
    "outlet class EBSegmentedControl : NSControl ;\n"
    "binding EBSegmentedControl $selectedIndex : property Int ;\n"
    "\n"
    "\n"
    "outlet class EBSlider : NSControl ;\n"
    "binding EBSlider $doubleValue : property Double {sendContinously:Bool} ;\n"
    "binding EBSlider $intValue : property Int {sendContinously:Bool} ;\n"
    "\n"
    "\n"
    "outlet class EBStepper : NSControl ;\n"
    "binding EBStepper $value : property Int {sendContinously:Bool} ;\n"
    "\n"
    "\n"
    "outlet class EBSwitch : NSControl ;\n"
    "binding EBSwitch $value : property Bool ;\n"
    "\n"
    "\n"
    "outlet class EBTableView : NSControl $tableValue ;\n"
    "\n"
    "\n"
    "outlet class EBTextField : NSControl ;\n"
    "binding EBTextField $value : property String {sendContinously : Bool} ;\n"
    "\n"
    "outlet class EBTextObserverField : NSView ;\n"
    "binding EBTextObserverField $valueObserver : transient String ;\n"
    "\n"
    "\n"
    "outlet class EBTextObserverView : NSView ;\n"
    "binding EBTextObserverView $valueObserver : transient String ;\n"
    "\n"
    "\n"
    "outlet class EBTextView : NSControl ;\n"
    "binding EBTextView $value : property String ;\n"
    "\n"
    "outlet class EBWindow ;\n" ;
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
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (object->mProperty_mClassName, GALGAS_classKind::constructor_atomic (GALGAS_typeKind::constructor_transientPropertyExternType (object->mProperty_mClassName.getter_string (SOURCE_FILE ("transient-property-class.galgas", 62))  COMMA_SOURCE_FILE ("transient-property-class.galgas", 62))  COMMA_SOURCE_FILE ("transient-property-class.galgas", 62)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property-class.galgas", 63)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property-class.galgas", 64)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("transient-property-class.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("transient-property-class.galgas", 60)) ;
  }
  ioArgument_ioGeneration.mProperty_mTransientPropertyTypeList.addAssign_operation (object->mProperty_mClassName.getter_string (HERE), object->mProperty_mIsClass  COMMA_SOURCE_FILE ("transient-property-class.galgas", 67)) ;
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
  GALGAS_enumConstantMap var_enumConstantMap_2568 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration.galgas", 63)) ;
  cEnumerator_lstringlist enumerator_2608 (object->mProperty_mEnumConstantNameList, kENUMERATION_UP) ;
  while (enumerator_2608.hasCurrentObject ()) {
    {
    var_enumConstantMap_2568.setter_insertKey (enumerator_2608.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 65)) ;
    }
    enumerator_2608.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (object->mProperty_mClassName, GALGAS_classKind::constructor_atomic (GALGAS_typeKind::constructor_enumType (object->mProperty_mClassName.getter_string (SOURCE_FILE ("enumeration.galgas", 69)), var_enumConstantMap_2568  COMMA_SOURCE_FILE ("enumeration.galgas", 69))  COMMA_SOURCE_FILE ("enumeration.galgas", 69)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("enumeration.galgas", 70)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("enumeration.galgas", 71)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("enumeration.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 67)) ;
  }
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_enumForGeneration::constructor_new (object->mProperty_mClassName.getter_string (SOURCE_FILE ("enumeration.galgas", 76)), object->mProperty_mEnumConstantNameList  COMMA_SOURCE_FILE ("enumeration.galgas", 75))  COMMA_SOURCE_FILE ("enumeration.galgas", 75)) ;
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
  result << " : Int, EnumPropertyProtocol {\n" ;
  GALGAS_uint index_539_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_539 (in_CONSTANT_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_539.hasCurrentObject ()) {
      result << "  case " ;
      result << enumerator_539.current_mValue (HERE).getter_string (HERE).stringValue () ;
      result << " = " ;
      result << index_539_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 12)).stringValue () ;
      result << "\n" ;
      index_539_idx.increment () ;
      enumerator_539.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  init\? (string : String) {\n"
    "    switch string {\n" ;
  GALGAS_uint index_812_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_812 (in_CONSTANT_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_812.hasCurrentObject ()) {
      result << "      case \"" ;
      result << enumerator_812.current_mValue (HERE).getter_string (HERE).stringValue () ;
      result << "\" : self = ." ;
      result << enumerator_812.current_mValue (HERE).getter_string (HERE).stringValue () ;
      result << " // " ;
      result << index_812_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 22)).stringValue () ;
      result << "\n" ;
      index_812_idx.increment () ;
      enumerator_812.gotoNextObject () ;
    }
  }
  result << "      case _ : return nil\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func descriptionForExplorer () -> String {\n"
    "    switch self {\n" ;
  GALGAS_uint index_1169_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1169 (in_CONSTANT_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1169.hasCurrentObject ()) {
      result << "      case ." ;
      result << enumerator_1169.current_mValue (HERE).getter_string (HERE).stringValue () ;
      result << " : return \"" ;
      result << enumerator_1169.current_mValue (HERE).getter_string (HERE).stringValue () ;
      result << "\" // " ;
      result << index_1169_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 34)).stringValue () ;
      result << "\n" ;
      index_1169_idx.increment () ;
      enumerator_1169.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //  Enum generic bindings utility functions\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  static func buildfromRawValue (rawValue : Int) -> " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? {\n"
    "    if let v = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " (rawValue:rawValue) {\n"
    "      return v\n"
    "    }else{\n"
    "      return nil\n"
    "    }\n"
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
  result << in_CONSTANT_5F_ORDERED_5F_LIST.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("enum.swift.galgasTemplate", 75)).getter_string (HERE).stringValue () ;
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
    "typealias EBReadOnlyController_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBReadOnlyEnumController <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n"
    "\n"
    "typealias EBReadOnlyProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBReadOnlyEnumProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n"
    "typealias EBTransientProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBTransientEnumProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n"
    "typealias EBReadWriteProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBReadWriteEnumProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n"
    "typealias EBStoredProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBStoredEnumProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n"
    "typealias EBPropertyProxy_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBPropertyEnumProxy <" ;
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
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mEnumConstantList.getter_length (SOURCE_FILE ("enumeration.galgas", 106)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_3995 = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (inCompiler, object->mProperty_mEnumName, object->mProperty_mEnumConstantList COMMA_SOURCE_FILE ("enumeration.galgas", 107))) ;
      GALGAS_string var_fileName_4120 = GALGAS_string ("enum-").add_operation (object->mProperty_mEnumName, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 111)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 111)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_4120  COMMA_SOURCE_FILE ("enumeration.galgas", 112)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_4120, var_s_3995, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 113)) ;
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
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("Data").getter_nowhere (SOURCE_FILE ("atomic-class.galgas", 34)), GALGAS_typeKind::constructor_dataType (SOURCE_FILE ("atomic-class.galgas", 34))  COMMA_SOURCE_FILE ("atomic-class.galgas", 34))  COMMA_SOURCE_FILE ("atomic-class.galgas", 34)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("NSBezierPath").getter_nowhere (SOURCE_FILE ("atomic-class.galgas", 35)), GALGAS_typeKind::constructor_bezierPathType (SOURCE_FILE ("atomic-class.galgas", 35))  COMMA_SOURCE_FILE ("atomic-class.galgas", 35))  COMMA_SOURCE_FILE ("atomic-class.galgas", 35)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("BezierPathArray").getter_nowhere (SOURCE_FILE ("atomic-class.galgas", 36)), GALGAS_typeKind::constructor_bezierPathArrayType (SOURCE_FILE ("atomic-class.galgas", 36))  COMMA_SOURCE_FILE ("atomic-class.galgas", 36))  COMMA_SOURCE_FILE ("atomic-class.galgas", 36)) ;
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
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (object->mProperty_mClassName, GALGAS_classKind::constructor_atomic (object->mProperty_mKind  COMMA_SOURCE_FILE ("atomic-class.galgas", 49)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("atomic-class.galgas", 50)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("atomic-class.galgas", 51)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("atomic-class.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas", 47)) ;
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
  ioArgument_ioGraph.setter_addNode (object->mProperty_mClassName, temp_0, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 19)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mProperty_mClassName, object->mProperty_mSuperEntityName COMMA_SOURCE_FILE ("entity.galgas", 21)) ;
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
  GALGAS_actionMap var_actionMap_4538 ;
  {
  routine_buildActionMap (object->mProperty_mActionDeclarationList, var_actionMap_4538, inCompiler  COMMA_SOURCE_FILE ("entity.galgas", 140)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (object->mProperty_mClassName, GALGAS_classKind::constructor_entity (object->mProperty_mSuperEntityName.getter_string (HERE), object->mProperty_mIsGraphicEntity, object->mProperty_mIsAbstract  COMMA_SOURCE_FILE ("entity.galgas", 143)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 144)), var_actionMap_4538, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 141)) ;
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
  GALGAS_propertyMap var_propertyMap_5110 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_5173 ;
  GALGAS_classKind joker_5075 ; // Joker input parameter
  GALGAS_actionMap joker_5116 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mClassName, joker_5075, var_propertyMap_5110, joker_5116, var_propertyGenerationList_5173, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 156)) ;
  GALGAS_stringset var_overridenTransients_5311 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("entity.galgas", 164)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperEntityName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (object->mProperty_mIsAbstract.operator_not (SOURCE_FILE ("entity.galgas", 165)) COMMA_SOURCE_FILE ("entity.galgas", 165)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_classKind var_superClassKind_5480 ;
      GALGAS_propertyMap var_superPropertyMap_5521 ;
      GALGAS_actionMap joker_5529_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5529_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.getter_mClassMap (HERE).method_searchKey (object->mProperty_mSuperEntityName, var_superClassKind_5480, var_superPropertyMap_5521, joker_5529_2, joker_5529_1, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 166)) ;
      switch (var_superClassKind_5480.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mSuperEntityName.getter_location (SOURCE_FILE ("entity.galgas", 174)), GALGAS_string ("prefs cannot be a super entity"), fixItArray1  COMMA_SOURCE_FILE ("entity.galgas", 174)) ;
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mSuperEntityName.getter_location (SOURCE_FILE ("entity.galgas", 176)), GALGAS_string ("an atomic class cannot be a super entity"), fixItArray2  COMMA_SOURCE_FILE ("entity.galgas", 176)) ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mSuperEntityName.getter_location (SOURCE_FILE ("entity.galgas", 178)), GALGAS_string ("a document cannot be a super entity"), fixItArray3  COMMA_SOURCE_FILE ("entity.galgas", 178)) ;
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          const cEnumAssociatedValues_classKind_entity * extractPtr_7021 = (const cEnumAssociatedValues_classKind_entity *) (var_superClassKind_5480.unsafePointer ()) ;
          const GALGAS_bool extractedValue_isGraphic = extractPtr_7021->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_isAbstract = extractPtr_7021->mAssociatedValue2 ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = extractedValue_isGraphic.operator_and (object->mProperty_mIsGraphicEntity.operator_not (SOURCE_FILE ("entity.galgas", 180)) COMMA_SOURCE_FILE ("entity.galgas", 180)).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (object->mProperty_mClassName.getter_location (SOURCE_FILE ("entity.galgas", 181)), GALGAS_string ("this entity should be declared with 'graphic', as super entity is graphic"), fixItArray5  COMMA_SOURCE_FILE ("entity.galgas", 181)) ;
            }
          }
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = extractedValue_isAbstract.operator_and (object->mProperty_mIsAbstract.operator_not (SOURCE_FILE ("entity.galgas", 183)) COMMA_SOURCE_FILE ("entity.galgas", 183)).boolEnum () ;
            if (kBoolTrue == test_6) {
              cEnumerator_propertyMap enumerator_6181 (var_superPropertyMap_5521, kENUMERATION_UP) ;
              while (enumerator_6181.hasCurrentObject ()) {
                enumGalgasBool test_7 = kBoolTrue ;
                if (kBoolTrue == test_7) {
                  test_7 = extensionGetter_isAbstract (enumerator_6181.current (HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 185)).boolEnum () ;
                  if (kBoolTrue == test_7) {
                    enumGalgasBool test_8 = kBoolTrue ;
                    if (kBoolTrue == test_8) {
                      test_8 = var_propertyMap_5110.getter_hasKey (enumerator_6181.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("entity.galgas", 186)).boolEnum () ;
                      if (kBoolTrue == test_8) {
                        var_overridenTransients_5311.addAssign_operation (enumerator_6181.current (HERE).getter_lkey (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("entity.galgas", 187)) ;
                        GALGAS_propertyKind var_propertyKind_6450 ;
                        GALGAS_actionMap joker_6452 ; // Joker input parameter
                        var_propertyMap_5110.method_searchKey (enumerator_6181.current (HERE).getter_lkey (HERE), var_propertyKind_6450, joker_6452, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 188)) ;
                        GALGAS_string var_typeName_6481 = extensionGetter_typeName (var_propertyKind_6450, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 189)) ;
                        GALGAS_string var_superTypeName_6539 = extensionGetter_typeName (enumerator_6181.current (HERE).getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 190)) ;
                        enumGalgasBool test_9 = kBoolTrue ;
                        if (kBoolTrue == test_9) {
                          test_9 = GALGAS_bool (kIsNotEqual, var_typeName_6481.objectCompare (var_superTypeName_6539)).boolEnum () ;
                          if (kBoolTrue == test_9) {
                            TC_Array <C_FixItDescription> fixItArray10 ;
                            inCompiler->emitSemanticError (var_propertyMap_5110.getter_locationForKey (enumerator_6181.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("entity.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 192)), GALGAS_string ("type '").add_operation (var_superTypeName_6539, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 193)).add_operation (GALGAS_string ("' is required by declaration in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 193)), fixItArray10  COMMA_SOURCE_FILE ("entity.galgas", 192)) ;
                          }
                        }
                      }
                    }
                    if (kBoolFalse == test_8) {
                      TC_Array <C_FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (object->mProperty_mClassName.getter_location (SOURCE_FILE ("entity.galgas", 196)), GALGAS_string ("transient '").add_operation (enumerator_6181.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("entity.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 197)).add_operation (GALGAS_string ("' should be defined, it is declared abstract in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 197)), fixItArray11  COMMA_SOURCE_FILE ("entity.galgas", 196)) ;
                    }
                  }
                }
                enumerator_6181.gotoNextObject () ;
              }
            }
          }
        }
        break ;
      }
    }
  }
  ioArgument_ioGeneration.mProperty_mEntityListForGeneration.addAssign_operation (object->mProperty_mClassName.getter_string (HERE), object->mProperty_mObsoleteEntityNames  COMMA_SOURCE_FILE ("entity.galgas", 205)) ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_entityForGeneration::constructor_new (object->mProperty_mClassName.getter_string (HERE), object->mProperty_mSuperEntityName.getter_string (HERE), var_propertyGenerationList_5173, object->mProperty_mSignatureList, object->mProperty_mIsGraphicEntity, object->mProperty_mIsAbstract, var_overridenTransients_5311, object->mProperty_mExternSwiftDelegateList  COMMA_SOURCE_FILE ("entity.galgas", 208))  COMMA_SOURCE_FILE ("entity.galgas", 208)) ;
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
  GALGAS_atomicPropertyGenerationList var_atomicPropertyGenerationList_8530 = GALGAS_atomicPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 248)) ;
  GALGAS_transientPropertyGenerationList var_transientPropertyGenerationList_8602 = GALGAS_transientPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 249)) ;
  GALGAS_toOnePropertyGenerationList var_toOnePropertyGenerationList_8666 = GALGAS_toOnePropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 250)) ;
  GALGAS_toManyPropertyGenerationList var_toManyPropertyGenerationList_8732 = GALGAS_toManyPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 251)) ;
  cEnumerator_propertyGenerationList enumerator_8781 (object->mProperty_mPropertyGenerationList, kENUMERATION_UP) ;
  while (enumerator_8781.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_atomicPropertyGeneration var_atomicProperty_8810 (dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_8781.current_mProperty (HERE).ptr ())) ;
      if (NULL == var_atomicProperty_8810.ptr ()) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_atomicPropertyGenerationList_8530.addAssign_operation (var_atomicProperty_8810  COMMA_SOURCE_FILE ("entity.galgas", 254)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        GALGAS_transientPropertyGeneration var_transientProperty_8941 (dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_8781.current_mProperty (HERE).ptr ())) ;
        if (NULL == var_transientProperty_8941.ptr ()) {
          test_1 = kBoolFalse ;
        }
        if (kBoolTrue == test_1) {
          var_transientPropertyGenerationList_8602.addAssign_operation (var_transientProperty_8941  COMMA_SOURCE_FILE ("entity.galgas", 256)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          GALGAS_toOnePropertyGeneration var_toOneProperty_9077 (dynamic_cast <const cPtr_toOnePropertyGeneration *> (enumerator_8781.current_mProperty (HERE).ptr ())) ;
          if (NULL == var_toOneProperty_9077.ptr ()) {
            test_2 = kBoolFalse ;
          }
          if (kBoolTrue == test_2) {
            var_toOnePropertyGenerationList_8666.addAssign_operation (var_toOneProperty_9077  COMMA_SOURCE_FILE ("entity.galgas", 258)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            GALGAS_toManyPropertyGeneration var_toOneProperty_9201 (dynamic_cast <const cPtr_toManyPropertyGeneration *> (enumerator_8781.current_mProperty (HERE).ptr ())) ;
            if (NULL == var_toOneProperty_9201.ptr ()) {
              test_3 = kBoolFalse ;
            }
            if (kBoolTrue == test_3) {
              var_toManyPropertyGenerationList_8732.addAssign_operation (var_toOneProperty_9201  COMMA_SOURCE_FILE ("entity.galgas", 260)) ;
            }
          }
        }
      }
    }
    enumerator_8781.gotoNextObject () ;
  }
  GALGAS_string var_superEntityName_9335 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperEntityName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_superEntityName_9335 = object->mProperty_mSuperEntityName ;
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = object->mProperty_mIsGraphicEntity.boolEnum () ;
      if (kBoolTrue == test_5) {
        var_superEntityName_9335 = GALGAS_string ("EBGraphicManagedObject") ;
      }
    }
    if (kBoolFalse == test_5) {
      var_superEntityName_9335 = GALGAS_string ("EBManagedObject") ;
    }
  }
  GALGAS_string var_s_9550 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (inCompiler, object->mProperty_mEntityName, var_superEntityName_9335, object->mProperty_mPropertyGenerationList, var_atomicPropertyGenerationList_8530, var_transientPropertyGenerationList_8602, var_toOnePropertyGenerationList_8666, var_toManyPropertyGenerationList_8732, object->mProperty_mSignatureSet, object->mProperty_mIsGraphicEntity, object->mProperty_mIsAbstract, object->mProperty_mOverridenTransients, object->mProperty_mExternSwiftDelegateList COMMA_SOURCE_FILE ("entity.galgas", 271))) ;
  GALGAS_string var_fileName_9957 = GALGAS_string ("entity-").add_operation (object->mProperty_mEntityName, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 286)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 286)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_9957  COMMA_SOURCE_FILE ("entity.galgas", 287)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_9957, var_s_9550, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 288)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_entityForGeneration_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_entityForGeneration.mSlotID,
                                     extensionMethod_entityForGeneration_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_entityForGeneration_generateCode (defineExtensionMethod_entityForGeneration_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'generateEBManagedObjectContext'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext constinArgument_inEntityListForGeneration,
                                             const GALGAS_string constinArgument_inOutputDirectory,
                                             GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inEntityListForGeneration.getter_length (SOURCE_FILE ("entity.galgas", 302)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_fileName_10476 = GALGAS_string ("EBManagedObjectFactory.swift") ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_10476  COMMA_SOURCE_FILE ("entity.galgas", 304)) ;
      GALGAS_string var_s_10555 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (inCompiler, constinArgument_inEntityListForGeneration COMMA_SOURCE_FILE ("entity.galgas", 305))) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_10476, var_s_10555, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 308)) ;
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Filewrapper 'entityGenerationTemplate'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_4_entityGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_entityGenerationTemplate_4,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_4
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_5_entityGenerationTemplate (
  "outlet-classes",
  0,
  gWrapperAllFiles_entityGenerationTemplate_5,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_5
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_entityGenerationTemplate_1,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_1
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_3 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate (
  "swift-sources",
  0,
  gWrapperAllFiles_entityGenerationTemplate_3,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_3
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_2 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_entityGenerationTemplate_2,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_0 [6] = {
  & gWrapperDirectory_4_entityGenerationTemplate,
  & gWrapperDirectory_5_entityGenerationTemplate,
  & gWrapperDirectory_1_entityGenerationTemplate,
  & gWrapperDirectory_3_entityGenerationTemplate,
  & gWrapperDirectory_2_entityGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_entityGenerationTemplate_0,
  5,
  gWrapperAllDirectories_entityGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & in_ENTITY_5F_NAME,
                                                                                        const GALGAS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                        const GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const GALGAS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                        const GALGAS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                        const GALGAS_stringset & in_SIGNATURE_5F_SET,
                                                                                        const GALGAS_bool & /* in_IS_5F_GRAPHIC_5F_ENTITY */,
                                                                                        const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                        const GALGAS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                        const GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n" ;
  GALGAS_uint index_375_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_375 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_375.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
        "\n"
        "protocol " ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_375.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 11)).stringValue () ;
      result << " : class {\n"
        "  var " ;
      result << enumerator_375.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 12)).stringValue () ;
      result << " : " ;
      result << extensionGetter_swiftTypeName (enumerator_375.current_mProperty (HERE).getter_mType (SOURCE_FILE ("entity.swift.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)).stringValue () ;
      result << " { get }\n"
        "}\n"
        "\n" ;
      index_375_.increment () ;
      enumerator_375.gotoNextObject () ;
    }
  }
  GALGAS_uint index_699_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_699 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_699.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
        "\n"
        "protocol " ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_699.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 20)).stringValue () ;
      result << " : class {\n"
        "  var " ;
      result << enumerator_699.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 21)).stringValue () ;
      result << " : " ;
      result << extensionGetter_swiftTypeName (enumerator_699.current_mProperty (HERE).getter_mType (SOURCE_FILE ("entity.swift.galgasTemplate", 21)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 21)).stringValue () ;
      result << "\? { get }\n"
        "}\n"
        "\n" ;
      index_699_.increment () ;
      enumerator_699.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("Entity: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 27)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : " ;
  result << in_SUPER_5F_CLASS_5F_NAME.stringValue () ;
  GALGAS_uint index_1339_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_1339 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_1339.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (enumerator_1339.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_1339.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 32)).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << ",\n"
          "         " ;
        result << in_ENTITY_5F_NAME.stringValue () ;
        result << "_" ;
        result << enumerator_1339.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
      }
      index_1339_.increment () ;
      enumerator_1339.gotoNextObject () ;
    }
  }
  result << " {\n"
    "\n" ;
  GALGAS_uint index_1561_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_1561 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_1561.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_1561.current_mProperty (HERE).ptr (), in_OVERRIDEN_5F_TRANSIENTS, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 40)).stringValue () ;
      index_1561_.increment () ;
      enumerator_1561.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    init\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  required init (_ undoManager : EBUndoManager\?) {\n"
    "    super.init (undoManager)\n" ;
  GALGAS_uint index_2007_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2007 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2007.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_2007.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 50)).stringValue () ;
      index_2007_.increment () ;
      enumerator_2007.gotoNextObject () ;
    }
  }
  result << "  //--- Install undoers and opposite setter for relationships\n" ;
  GALGAS_uint index_2148_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toManyPropertyGenerationList enumerator_2148 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2148.hasCurrentObject ()) {
      switch (enumerator_2148.current_mProperty (HERE).getter_mOption (SOURCE_FILE ("entity.swift.galgasTemplate", 55)).enumValue ()) {
      case GALGAS_toManyRelationshipOptionAST::kNotBuilt :
        break ;
      case GALGAS_toManyRelationshipOptionAST::kEnum_none :
        {
        }
        break ;
      case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance :
        {
          const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_2973 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (enumerator_2148.current_mProperty (HERE).getter_mOption (SOURCE_FILE ("entity.swift.galgasTemplate", 55)).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_2973->mAssociatedValue0 ;
          result << "    self." ;
          result << extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 59)).stringValue () ;
          result << "_property.addEBObserver (self." ;
          result << enumerator_2148.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 59)).stringValue () ;
          result << "_property)\n"
            "    self." ;
          result << enumerator_2148.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 60)).stringValue () ;
          result << "_property.mReadModelFunction =  { [weak self] in\n"
            "      if let model = self\?." ;
          result << extractedValue_masterPropertyName.getter_string (HERE).stringValue () ;
          result << "_property {\n"
            "        switch model.prop {\n"
            "        case .empty :\n"
            "          return .empty\n"
            "        case .multiple :\n"
            "          return .multiple\n"
            "        case .single (let modelArray) :\n"
            "          var array = [" ;
          result << extensionGetter_swiftTypeName (enumerator_2148.current_mProperty (HERE).getter_mRelationshipType (SOURCE_FILE ("entity.swift.galgasTemplate", 68)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 68)).stringValue () ;
          result << "] ()\n"
            "          for baseObject in modelArray {\n"
            "            if let object = baseObject as\? " ;
          result << extensionGetter_swiftTypeName (enumerator_2148.current_mProperty (HERE).getter_mRelationshipType (SOURCE_FILE ("entity.swift.galgasTemplate", 70)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 70)).stringValue () ;
          result << " {\n"
            "              array.append (object)\n"
            "            }\n"
            "          }\n"
            "          return .single (array)\n"
            "        }\n"
            "      }else{\n"
            "        return .empty\n"
            "      }\n"
            "    }\n" ;
        }
        break ;
      case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite :
        {
          const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_3470 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (enumerator_2148.current_mProperty (HERE).getter_mOption (SOURCE_FILE ("entity.swift.galgasTemplate", 55)).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_oppositeName = extractPtr_3470->mAssociatedValue0 ;
          result << "    self." ;
          result << enumerator_2148.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 81)).stringValue () ;
          result << "_property.setOppositeRelationship = { [weak self] (_ inManagedObject : " ;
          result << extensionGetter_swiftTypeName (enumerator_2148.current_mProperty (HERE).getter_mRelationshipType (SOURCE_FILE ("entity.swift.galgasTemplate", 81)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 81)).stringValue () ;
          result << "\?) in\n"
            "      inManagedObject\?." ;
          result << extractedValue_oppositeName.getter_string (HERE).stringValue () ;
          result << "_property.setProp (self)\n"
            "    }\n" ;
        }
        break ;
      }
      index_2148_.increment () ;
      enumerator_2148.gotoNextObject () ;
    }
  }
  result << "  //--- register properties for handling signature\n" ;
  GALGAS_uint index_3603_ (0) ;
  if (in_SIGNATURE_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_3603 (in_SIGNATURE_5F_SET, kENUMERATION_UP) ;
    while (enumerator_3603.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_3603.current_key (HERE).stringValue () ;
      result << "_property.setSignatureObserver (observer: self)\n" ;
      index_3603_.increment () ;
      enumerator_3603.gotoNextObject () ;
    }
  }
  result << "  //--- Extern delegates\n" ;
  GALGAS_uint index_3769_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_3769 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_3769.hasCurrentObject ()) {
      result << "    self.mExternDelegate" ;
      result << index_3769_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 94)).stringValue () ;
      result << " = " ;
      result << enumerator_3769.current_mExternSwiftDelegateName (HERE).getter_string (HERE).stringValue () ;
      result << " (object: self)\n" ;
      index_3769_idx.increment () ;
      enumerator_3769.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override internal func removeAllObservers () {\n"
    "    super.removeAllObservers ()\n" ;
  GALGAS_uint index_4128_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_4128 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_4128.hasCurrentObject ()) {
      result << callExtensionGetter_terminationCode ((const cPtr_propertyGeneration *) enumerator_4128.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 104)).stringValue () ;
      index_4128_.increment () ;
      enumerator_4128.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Extern delegates\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_4504_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_4504 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_4504.hasCurrentObject ()) {
      result << "  var mExternDelegate" ;
      result << index_4504_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 114)).stringValue () ;
      result << " : " ;
      result << enumerator_4504.current_mExternSwiftDelegateName (HERE).getter_string (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_4504_idx.increment () ;
      enumerator_4504.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    populateExplorerWindow\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func populateExplorerWindow (_ y : inout CGFloat, view : NSView) {\n"
    "    super.populateExplorerWindow (&y, view:view)\n" ;
  GALGAS_uint index_5059_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_5059 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_5059.hasCurrentObject ()) {
      result << "    createEntryForPropertyNamed (\n"
        "      \"" ;
      result << enumerator_5059.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 125)).stringValue () ;
      result << "\",\n"
        "      idx:self." ;
      result << enumerator_5059.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 126)).stringValue () ;
      result << "_property.ebObjectIndex,\n"
        "      y:&y,\n"
        "      view:view,\n"
        "      observerExplorer:&self." ;
      result << enumerator_5059.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 129)).stringValue () ;
      result << "_property.mObserverExplorer,\n"
        "      valueExplorer:&self." ;
      result << enumerator_5059.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 130)).stringValue () ;
      result << "_property.mValueExplorer\n"
        "    )\n" ;
      index_5059_.increment () ;
      enumerator_5059.gotoNextObject () ;
    }
  }
  result << "    createEntryForTitle (\"Properties\", y:&y, view:view)\n" ;
  GALGAS_uint index_5558_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_5558 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_5558.hasCurrentObject ()) {
      result << "    createEntryForPropertyNamed (\n"
        "      \"" ;
      result << enumerator_5558.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 136)).stringValue () ;
      result << "\",\n"
        "      idx:self." ;
      result << enumerator_5558.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 137)).stringValue () ;
      result << "_property.ebObjectIndex,\n"
        "      y:&y,\n"
        "      view:view,\n"
        "      observerExplorer:&self." ;
      result << enumerator_5558.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 140)).stringValue () ;
      result << "_property.mObserverExplorer,\n"
        "      valueExplorer:&self." ;
      result << enumerator_5558.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 141)).stringValue () ;
      result << "_property.mValueExplorer\n"
        "    )\n" ;
      index_5558_.increment () ;
      enumerator_5558.gotoNextObject () ;
    }
  }
  result << "    createEntryForTitle (\"Transients\", y:&y, view:view)\n" ;
  GALGAS_uint index_6049_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toManyPropertyGenerationList enumerator_6049 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6049.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_6049.current_mProperty (HERE).getter_mOption (SOURCE_FILE ("entity.swift.galgasTemplate", 146)).getter_isHasDependance (SOURCE_FILE ("entity.swift.galgasTemplate", 146)).operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 146)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "    createEntryForToManyRelationshipNamed (\n"
          "      \"" ;
        result << enumerator_6049.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 148)).stringValue () ;
        result << "\",\n"
          "      idx:" ;
        result << enumerator_6049.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 149)).stringValue () ;
        result << "_property.ebObjectIndex,\n"
          "      y: &y,\n"
          "      view: view,\n"
          "      valueExplorer:&" ;
        result << enumerator_6049.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 152)).stringValue () ;
        result << "_property.mValueExplorer\n"
          "    )\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_6049_.increment () ;
      enumerator_6049.gotoNextObject () ;
    }
  }
  result << "    createEntryForTitle (\"ToMany Relationships\", y:&y, view:view)\n" ;
  GALGAS_uint index_6531_ (0) ;
  if (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toOnePropertyGenerationList enumerator_6531 (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6531.hasCurrentObject ()) {
      result << "    createEntryForToOneRelationshipNamed (\n"
        "      \"" ;
      result << enumerator_6531.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 159)).stringValue () ;
      result << "\",\n"
        "      idx:self." ;
      result << enumerator_6531.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 160)).stringValue () ;
      result << "_property.ebObjectIndex,\n"
        "      y: &y,\n"
        "      view: view,\n"
        "      valueExplorer:&self." ;
      result << enumerator_6531.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 163)).stringValue () ;
      result << "_property.mValueExplorer\n"
        "    )\n" ;
      index_6531_.increment () ;
      enumerator_6531.gotoNextObject () ;
    }
  }
  result << "    createEntryForTitle (\"ToOne Relationships\", y:&y, view:view)\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    clearObjectExplorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func clearObjectExplorer () {\n" ;
  GALGAS_uint index_7268_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_7268 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_7268.hasCurrentObject ()) {
      result << callExtensionGetter_clearObjectExplorerCode ((const cPtr_propertyGeneration *) enumerator_7268.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 175)).stringValue () ;
      index_7268_.increment () ;
      enumerator_7268.gotoNextObject () ;
    }
  }
  result << "  //---\n"
    "    super.clearObjectExplorer ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    cleanUpToManyRelationships\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override internal func cleanUpToManyRelationships () {\n" ;
  GALGAS_uint index_7734_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toManyPropertyGenerationList enumerator_7734 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7734.hasCurrentObject ()) {
      const enumGalgasBool test_2 = enumerator_7734.current_mProperty (HERE).getter_mOption (SOURCE_FILE ("entity.swift.galgasTemplate", 188)).getter_isHasDependance (SOURCE_FILE ("entity.swift.galgasTemplate", 188)).operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 188)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    self." ;
        result << enumerator_7734.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 189)).stringValue () ;
        result << "_property.setProp ([])\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_7734_.increment () ;
      enumerator_7734.gotoNextObject () ;
    }
  }
  result << "  //---\n"
    "    super.cleanUpToManyRelationships ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    cleanUpToOneRelationships\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override internal func cleanUpToOneRelationships () {\n" ;
  GALGAS_uint index_8291_ (0) ;
  if (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toOnePropertyGenerationList enumerator_8291 (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8291.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_8291.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 203)).stringValue () ;
      result << "_property.setProp (nil)\n" ;
      index_8291_.increment () ;
      enumerator_8291.gotoNextObject () ;
    }
  }
  result << "  //---\n"
    "    super.cleanUpToOneRelationships ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    saveIntoDictionary\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func saveIntoDictionary (_ ioDictionary : NSMutableDictionary) {\n"
    "    super.saveIntoDictionary (ioDictionary)\n" ;
  GALGAS_uint index_8849_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_8849 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_8849.hasCurrentObject ()) {
      result << callExtensionGetter_saveIntoDictionaryCode ((const cPtr_propertyGeneration *) enumerator_8849.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 217)).stringValue () ;
      index_8849_.increment () ;
      enumerator_8849.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    setUpWithDictionary\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func setUpWithDictionary (_ inDictionary : NSDictionary,\n"
    "                                     managedObjectArray : inout [EBManagedObject]) {\n"
    "    super.setUpWithDictionary (inDictionary, managedObjectArray:&managedObjectArray)\n" ;
  GALGAS_uint index_9450_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_9450 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_9450.hasCurrentObject ()) {
      result << callExtensionGetter_setupRelationshipFromDictionaryCode ((const cPtr_propertyGeneration *) enumerator_9450.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 230)).stringValue () ;
      index_9450_.increment () ;
      enumerator_9450.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    setUpAtomicPropertiesWithDictionary\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func setUpAtomicPropertiesWithDictionary (_ inDictionary : NSDictionary) {\n"
    "    super.setUpAtomicPropertiesWithDictionary (inDictionary)\n" ;
  GALGAS_uint index_9989_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_9989 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_9989.hasCurrentObject ()) {
      result << callExtensionGetter_setupAtomicPropertyFromDictionaryCode ((const cPtr_propertyGeneration *) enumerator_9989.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 242)).stringValue () ;
      index_9989_.increment () ;
      enumerator_9989.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   accessibleObjects\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func accessibleObjects (objects : inout [EBManagedObject]) {\n"
    "    super.accessibleObjects (objects: &objects)\n" ;
  GALGAS_uint index_10484_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_10484 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_10484.hasCurrentObject ()) {
      result << callExtensionGetter_objectAccessibilityCode ((const cPtr_propertyGeneration *) enumerator_10484.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 254)).stringValue () ;
      index_10484_.increment () ;
      enumerator_10484.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n" ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, in_SIGNATURE_5F_SET.getter_count (SOURCE_FILE ("entity.swift.galgasTemplate", 259)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "  //   computeSignature\n"
      "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  override func computeSignature () -> UInt32 {\n"
      "    var crc = super.computeSignature ()\n" ;
    GALGAS_uint index_10954_ (0) ;
    if (in_SIGNATURE_5F_SET.isValid ()) {
      cEnumerator_stringset enumerator_10954 (in_SIGNATURE_5F_SET, kENUMERATION_UP) ;
      while (enumerator_10954.hasCurrentObject ()) {
        result << "    crc.accumulateUInt32 (self." ;
        result << enumerator_10954.current_key (HERE).stringValue () ;
        result << "_property.signature ())\n" ;
        index_10954_.increment () ;
        enumerator_10954.gotoNextObject () ;
      }
    }
    result << "    return crc\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("ReadOnlyArrayOf_").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 280)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class ReadOnlyArrayOf_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : ReadOnlyAbstractArrayProperty <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "> {\n"
    "\n" ;
  GALGAS_uint index_11610_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_11610 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_11610.hasCurrentObject ()) {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //   Observers of '" ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 288)).stringValue () ;
      result << "' stored property\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  private var mObserversOf_" ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 291)).stringValue () ;
      result << " = EBWeakEventSet ()\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  final func addEBObserverOf_" ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 295)).stringValue () ;
      result << " (_ inObserver : EBEvent) {\n"
        "    self.addEBObserver (inObserver)\n"
        "    self.mObserversOf_" ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 297)).stringValue () ;
      result << ".insert (inObserver)\n"
        "    switch prop {\n"
        "    case .empty, .multiple :\n"
        "      break\n"
        "    case .single (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 303)).stringValue () ;
      result << "_property.addEBObserver (inObserver)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  final func removeEBObserverOf_" ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 310)).stringValue () ;
      result << " (_ inObserver : EBEvent) {\n"
        "    self.removeEBObserver (inObserver)\n"
        "    self.mObserversOf_" ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 312)).stringValue () ;
      result << ".remove (inObserver)\n"
        "    switch prop {\n"
        "    case .empty, .multiple :\n"
        "      break\n"
        "    case .single (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 318)).stringValue () ;
      result << "_property.removeEBObserver (inObserver)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  final func addEBObserversOf_" ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 325)).stringValue () ;
      result << "_toElementsOfSet (_ inSet : Set<" ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << ">) {\n"
        "    for managedObject in inSet {\n"
        "      self.mObserversOf_" ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 327)).stringValue () ;
      result << ".apply ( {(_ observer : EBEvent) in\n"
        "        managedObject." ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 328)).stringValue () ;
      result << "_property.addEBObserver (observer)\n"
        "      })\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  final func removeEBObserversOf_" ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 335)).stringValue () ;
      result << "_fromElementsOfSet (_ inSet : Set<" ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << ">) {\n"
        "    self.mObserversOf_" ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 336)).stringValue () ;
      result << ".apply ( {(_ observer : EBEvent) in\n"
        "      observer.postEvent ()\n"
        "      for managedObject in inSet {\n"
        "        managedObject." ;
      result << enumerator_11610.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 339)).stringValue () ;
      result << "_property.removeEBObserver (observer)\n"
        "      }\n"
        "    })\n"
        "  }\n"
        "\n" ;
      index_11610_.increment () ;
      enumerator_11610.gotoNextObject () ;
    }
  }
  GALGAS_uint index_14084_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_14084 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_14084.hasCurrentObject ()) {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //   Observers of '" ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 348)).stringValue () ;
      result << "' transient property\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  private var mObserversOf_" ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 351)).stringValue () ;
      result << " = EBWeakEventSet ()\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  final func addEBObserverOf_" ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 355)).stringValue () ;
      result << " (_ inObserver : EBEvent) {\n"
        "    self.addEBObserver (inObserver)\n"
        "    self.mObserversOf_" ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 357)).stringValue () ;
      result << ".insert (inObserver)\n"
        "    switch prop {\n"
        "    case .empty, .multiple :\n"
        "      break\n"
        "    case .single (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 363)).stringValue () ;
      result << "_property.addEBObserver (inObserver)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  final func removeEBObserverOf_" ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 370)).stringValue () ;
      result << " (_ inObserver : EBEvent) {\n"
        "    self.removeEBObserver (inObserver)\n"
        "    self.mObserversOf_" ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 372)).stringValue () ;
      result << ".remove (inObserver)\n"
        "    switch prop {\n"
        "    case .empty, .multiple :\n"
        "      break\n"
        "    case .single (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 378)).stringValue () ;
      result << "_property.removeEBObserver (inObserver)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  final func addEBObserversOf_" ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 385)).stringValue () ;
      result << "_toElementsOfSet (_ inSet : Set<" ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << ">) {\n"
        "    for managedObject in inSet {\n"
        "      self.mObserversOf_" ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 387)).stringValue () ;
      result << ".apply ( {(_ observer : EBEvent) in\n"
        "        managedObject." ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 388)).stringValue () ;
      result << "_property.addEBObserver (observer)\n"
        "      })\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  final func removeEBObserversOf_" ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 395)).stringValue () ;
      result << "_fromElementsOfSet (_ inSet : Set<" ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << ">) {\n"
        "    for managedObject in inSet {\n"
        "      self.mObserversOf_" ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 397)).stringValue () ;
      result << ".apply ( {(_ observer : EBEvent) in\n"
        "        managedObject." ;
      result << enumerator_14084.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 398)).stringValue () ;
      result << "_property.removeEBObserver (observer)\n"
        "      })\n"
        "    }\n"
        "  }\n"
        "\n" ;
      index_14084_.increment () ;
      enumerator_14084.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("TransientArrayOf_").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 410)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class TransientArrayOf_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : ReadOnlyArrayOf_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var mReadModelFunction : Optional < () -> EBSelection < [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "] > > = nil\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var propset : Set <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "> {\n"
    "    self.computeArrayAndSet ()\n"
    "    return self.mSet\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var prop : EBSelection < [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "] > {\n"
    "    self.computeArrayAndSet ()\n"
    "    return self.mCachedValue!  \n"
    "  }\n"
    " \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var propval : [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "] {\n"
    "    self.computeArrayAndSet ()\n"
    "    if let value = self.mCachedValue {\n"
    "      switch value {\n"
    "      case .empty, .multiple :\n"
    "        return []\n"
    "      case .single (let v) :\n"
    "        return v\n"
    "      }\n"
    "    }else{\n"
    "      return []\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    super.init ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mSet = Set <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "> ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mCachedValue : EBSelection < [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "] >\? = nil\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private func computeArrayAndSet () {\n"
    "    if let unwrappedComputeFunction = self.mReadModelFunction, self.mCachedValue == nil {\n"
    "      self.mCachedValue = unwrappedComputeFunction ()\n"
    "      let newSet : Set <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << ">\n"
    "      switch self.mCachedValue! {\n"
    "      case .multiple, .empty :\n"
    "        newSet = Set <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "> ()\n"
    "      case .single (let array) :\n"
    "       newSet = Set (array)\n"
    "      }\n" ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_length (SOURCE_FILE ("entity.swift.galgasTemplate", 476)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "    //--- Removed object set\n"
      "      let removedSet = self.mSet.subtracting (newSet)\n"
      "    //--- Remove observers of stored properties\n" ;
    GALGAS_uint index_19354_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_19354 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_19354.hasCurrentObject ()) {
        result << "      self.removeEBObserversOf_" ;
        result << enumerator_19354.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 481)).stringValue () ;
        result << "_fromElementsOfSet (removedSet)\n" ;
        index_19354_.increment () ;
        enumerator_19354.gotoNextObject () ;
      }
    }
    result << "    //--- Remove observers of transient properties\n" ;
    GALGAS_uint index_19555_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_transientPropertyGenerationList enumerator_19555 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_19555.hasCurrentObject ()) {
        result << "      self.removeEBObserversOf_" ;
        result << enumerator_19555.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 485)).stringValue () ;
        result << "_fromElementsOfSet (removedSet)\n" ;
        index_19555_.increment () ;
        enumerator_19555.gotoNextObject () ;
      }
    }
    result << "    //--- Added object set\n"
      "      let addedSet = newSet.subtracting (self.mSet)\n"
      "     //--- Add observers of stored properties\n" ;
    GALGAS_uint index_19839_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_19839 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_19839.hasCurrentObject ()) {
        result << "      self.addEBObserversOf_" ;
        result << enumerator_19839.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 491)).stringValue () ;
        result << "_toElementsOfSet (addedSet)\n" ;
        index_19839_.increment () ;
        enumerator_19839.gotoNextObject () ;
      }
    }
    result << "     //--- Add observers of transient properties\n" ;
    GALGAS_uint index_20031_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_transientPropertyGenerationList enumerator_20031 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_20031.hasCurrentObject ()) {
        result << "      self.addEBObserversOf_" ;
        result << enumerator_20031.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 495)).stringValue () ;
        result << "_toElementsOfSet (addedSet)\n" ;
        index_20031_.increment () ;
        enumerator_20031.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_4) {
  }
  result << "    //--- Update object set\n"
    "      self.mSet = newSet\n"
    "    }\n"
    "    if self.mCachedValue == nil {\n"
    "      self.mCachedValue = .empty\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func postEvent () {\n"
    "    if self.mCachedValue != nil {\n"
    "      self.mCachedValue = nil\n"
    "      if logEvents () {\n"
    "        appendMessageString (\"  \\(explorerIndexString (self.ebObjectIndex)) propagation\\n\")\n"
    "      }\n"
    "      super.postEvent ()\n"
    "    }else if logEvents () {\n"
    "      appendMessageString (\"  \\(explorerIndexString (self.ebObjectIndex)) nil\\n\")\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("To many relationship read write: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 525)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class ReadWriteArrayOf_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : ReadOnlyArrayOf_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    " \n"
    "  func setProp (_ value :  [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "]) { } // Abstract method\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("To many relationship: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 539)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "final class StoredArrayOf_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : ReadWriteArrayOf_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << ", EBSignatureObserverProtocol {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var setOppositeRelationship : Optional < (_ inManagedObject : " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\?) -> Void > = nil\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mPrefKey : String\? = nil\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var mValueExplorer : NSPopUpButton\? {\n"
    "    didSet {\n"
    "      if let unwrappedExplorer = self.mValueExplorer {\n"
    "        switch prop {\n"
    "        case .empty, .multiple :\n"
    "          break ;\n"
    "        case .single (let v) :\n"
    "          updateManagedObjectToManyRelationshipDisplay (objectArray: v, popUpButton: unwrappedExplorer)\n"
    "        }\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    super.init ()\n"
    "    self.count_property.mReadModelFunction = { [weak self] in\n"
    "      if let unwSelf = self {\n"
    "        switch unwSelf.prop {\n"
    "        case .empty :\n"
    "          return .empty\n"
    "        case .multiple :\n"
    "          return .multiple\n"
    "        case .single (let v) :\n"
    "          return .single (v.count)\n"
    "        }\n"
    "      }else{\n"
    "        return .empty\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  convenience init (prefKey : String) {\n"
    "    self.init ()\n"
    "    self.mPrefKey = prefKey\n"
    "    if let array = UserDefaults.standard.array (forKey: prefKey) as\? [NSDictionary] {\n"
    "      var objectArray = [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "] ()\n"
    "      for dictionary in array {\n"
    "        if let object = newInstanceOfEntityNamed (self.undoManager, \"" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\") as\? " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " {\n"
    "          object.setUpAtomicPropertiesWithDictionary (dictionary)\n"
    "          objectArray.append (object)\n"
    "        }\n"
    "      }\n"
    "      self.setProp (objectArray)\n"
    "    }\n"
    "  }\n"
    "\n"
    " //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mSet = Set <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "> ()\n"
    "  private var mValue = [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "] () {\n"
    "    didSet {\n"
    "     // self.postEvent ()\n"
    "      if oldValue != self.mValue {\n"
    "        let oldSet = self.mSet\n"
    "        self.mSet = Set (self.mValue)\n"
    "      //--- Register old value in undo manager\n"
    "        self.undoManager\?.registerUndo (withTarget: self, selector:#selector(performUndo(_:)), object:oldValue)\n"
    "      //--- Update explorer\n"
    "        if let valueExplorer = self.mValueExplorer {\n"
    "          updateManagedObjectToManyRelationshipDisplay (objectArray: self.mValue, popUpButton: valueExplorer)\n"
    "        }\n"
    "      //--- Removed object set\n"
    "        let removedObjectSet = oldSet.subtracting (self.mSet)\n"
    "        if removedObjectSet.count > 0 {\n"
    "          for managedObject in removedObjectSet {\n"
    "            managedObject.setSignatureObserver (observer: nil)\n"
    "            self.setOppositeRelationship\? (nil)\n" ;
  GALGAS_uint index_25041_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_25041 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_25041.hasCurrentObject ()) {
      result << "            managedObject." ;
      result << enumerator_25041.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 626)).stringValue () ;
      result << "_property.mSetterDelegate = nil\n" ;
      index_25041_.increment () ;
      enumerator_25041.gotoNextObject () ;
    }
  }
  result << "          }\n" ;
  GALGAS_uint index_25195_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_25195 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_25195.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (enumerator_25195.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_25195.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 630)).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "          self.removeEBObserversOf_" ;
        result << enumerator_25195.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 631)).stringValue () ;
        result << "_fromElementsOfSet (removedObjectSet)\n" ;
      }else if (kBoolFalse == test_5) {
      }
      index_25195_.increment () ;
      enumerator_25195.gotoNextObject () ;
    }
  }
  result << "        }\n"
    "       //--- Added object set\n"
    "        let addedObjectSet = self.mSet.subtracting (oldSet)\n"
    "        if addedObjectSet.count > 0 {\n"
    "          for managedObject : " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " in addedObjectSet {\n"
    "            managedObject.setSignatureObserver (observer: self)\n"
    "            self.setOppositeRelationship\? (managedObject)\n" ;
  GALGAS_uint index_25800_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_25800 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_25800.hasCurrentObject ()) {
      result << "            managedObject." ;
      result << enumerator_25800.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 642)).stringValue () ;
      result << "_property.mSetterDelegate = { [weak self] inValue in self\?.writeInPreferences () }\n" ;
      index_25800_.increment () ;
      enumerator_25800.gotoNextObject () ;
    }
  }
  result << "          }\n" ;
  GALGAS_uint index_26005_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_26005 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_26005.hasCurrentObject ()) {
      const enumGalgasBool test_6 = GALGAS_bool (enumerator_26005.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_26005.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 646)).boolEnum () ;
      if (kBoolTrue == test_6) {
        result << "          self.addEBObserversOf_" ;
        result << enumerator_26005.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 647)).stringValue () ;
        result << "_toElementsOfSet (addedObjectSet)\n" ;
      }else if (kBoolFalse == test_6) {
      }
      index_26005_.increment () ;
      enumerator_26005.gotoNextObject () ;
    }
  }
  result << "        }\n"
    "      //--- Notify observers\n"
    "        self.postEvent ()\n"
    "        self.clearSignatureCache ()\n"
    "      //--- Write in preferences \?\n"
    "        self.writeInPreferences ()\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private func writeInPreferences () {\n"
    "    if let prefKey = self.mPrefKey {\n"
    "      var dictionaryArray = [NSDictionary] ()\n"
    "      for object in self.mValue {\n"
    "        let d = NSMutableDictionary ()\n"
    "        object.saveIntoDictionary (d)\n"
    "        d [kEntityKey] = nil // Remove entity key, not used in preferences\n"
    "        dictionaryArray.append (d)\n"
    "      }\n"
    "      UserDefaults.standard.set (dictionaryArray, forKey: prefKey)\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var prop : EBSelection < [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "] > { return .single (self.mValue) }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func setProp (_ inValue : [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "]) { self.mValue = inValue }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var propval : [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "] { return self.mValue }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var propset : Set <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "> { return self.mSet }\n"
    "\n"
    " //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  @objc func performUndo (_ oldValue : [" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "]) {\n"
    "    self.mValue = oldValue\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func remove (_ object : " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << ") {\n"
    "    if self.mSet.contains (object) {\n"
    "      var array = self.mValue\n"
    "      let idx = array.firstIndex (of: object)\n"
    "      array.remove (at: idx!)\n"
    "      self.mValue = array\n"
    "    }\n"
    "  }\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func add (_ object : " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << ") {\n"
    "    if !self.mSet.contains (object) {\n"
    "      var array = self.mValue\n"
    "      array.append (object)\n"
    "      self.mValue = array\n"
    "    }\n"
    "  }\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //   signature\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private weak var mSignatureObserver : EBSignatureObserverProtocol\? // SOULD BE WEAK\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mSignatureCache : UInt32\? = nil\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func setSignatureObserver (observer : EBSignatureObserverProtocol\?) {\n"
    "    self.mSignatureObserver = observer\n"
    "    for object in self.mValue {\n"
    "      object.setSignatureObserver (observer: self)\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func signature () -> UInt32 {\n"
    "    let computedSignature : UInt32\n"
    "    if let s = self.mSignatureCache {\n"
    "      computedSignature = s\n"
    "    }else{\n"
    "      computedSignature = computeSignature ()\n"
    "      self.mSignatureCache = computedSignature\n"
    "    }\n"
    "    return computedSignature\n"
    "  }\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func computeSignature () -> UInt32 {\n"
    "    var crc : UInt32 = 0\n"
    "    for object in self.mValue {\n"
    "      crc.accumulateUInt32 (object.signature ())\n"
    "    }\n"
    "    return crc\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func clearSignatureCache () {\n"
    "    if self.mSignatureCache != nil {\n"
    "      self.mSignatureCache = nil\n"
    "      self.mSignatureObserver\?.clearSignatureCache ()\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    " \n"
    "}\n" ;
  GALGAS_uint index_30628_ (0) ;
  if (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toOnePropertyGenerationList enumerator_30628 (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_30628.hasCurrentObject ()) {
      result << "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
        "//    " ;
      result << GALGAS_string ("To one relationship: ").add_operation (enumerator_30628.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 776)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 776)).stringValue () ;
      result << "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
        "\n"
        "final class ToOneRelationship_" ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_30628.current_mProperty (HERE).getter_mPropertyName (SOURCE_FILE ("entity.swift.galgasTemplate", 779)).stringValue () ;
      result << " : EBAbstractProperty {\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //   Value explorer\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  var mValueExplorer : NSButton\? {\n"
        "    didSet {\n"
        "      if let unwrappedExplorer = self.mValueExplorer {\n"
        "        switch prop {\n"
        "        case .empty, .multiple :\n"
        "          break ;\n"
        "        case .single (let v) :\n"
        "          updateManagedObjectToOneRelationshipDisplay (object: v, button:unwrappedExplorer)\n"
        "        }\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  weak var owner : " ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << "\? { // SOULD BE WEAK\n"
        "    didSet {\n"
        "      if let unwrappedExplorer = self.mValueExplorer {\n"
        "        updateManagedObjectToOneRelationshipDisplay (object: propval, button:unwrappedExplorer)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        " \n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  private var mValue : " ;
      result << extensionGetter_swiftTypeName (enumerator_30628.current_mProperty (HERE).getter_mRelationshipType (SOURCE_FILE ("entity.swift.galgasTemplate", 810)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 810)).stringValue () ;
      result << "\? {\n"
        "    didSet {\n"
        "      if let unwrappedOwner = self.owner, oldValue !== self.mValue {\n"
        "      //--- Register old value in undo manager\n"
        "        unwrappedOwner.undoManager\?.registerUndo (withTarget:self, selector:#selector(performUndo(_:)), object:oldValue)\n"
        "      //--- Update explorer\n"
        "        if let unwrappedExplorer = self.mValueExplorer {\n"
        "          updateManagedObjectToOneRelationshipDisplay (object: self.mValue, button:unwrappedExplorer)\n"
        "        }\n" ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_30628.current_mProperty (HERE).getter_mOppositeRelationshipName (SOURCE_FILE ("entity.swift.galgasTemplate", 819)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        const enumGalgasBool test_8 = enumerator_30628.current_mProperty (HERE).getter_mInverseRelationMultiplicity (SOURCE_FILE ("entity.swift.galgasTemplate", 820)).getter_isCollection (SOURCE_FILE ("entity.swift.galgasTemplate", 820)).boolEnum () ;
        if (kBoolTrue == test_8) {
          result << "      //--- Reset old opposite relation ship\n"
            "        oldValue\?." ;
          result << enumerator_30628.current_mProperty (HERE).getter_mOppositeRelationshipName (SOURCE_FILE ("entity.swift.galgasTemplate", 822)).stringValue () ;
          result << "_property.remove (unwrappedOwner)\n"
            "      //--- Set new opposite relation ship\n"
            "        self.mValue\?." ;
          result << enumerator_30628.current_mProperty (HERE).getter_mOppositeRelationshipName (SOURCE_FILE ("entity.swift.galgasTemplate", 824)).stringValue () ;
          result << "_property.add (unwrappedOwner)\n" ;
        }else if (kBoolFalse == test_8) {
          result << "     //--- Reset old opposite relation ship\n"
            "        oldValue\?." ;
          result << enumerator_30628.current_mProperty (HERE).getter_mOppositeRelationshipName (SOURCE_FILE ("entity.swift.galgasTemplate", 827)).stringValue () ;
          result << "_property.setProp (nil)\n"
            "      //--- Set new opposite relation ship\n"
            "        self.mValue\?." ;
          result << enumerator_30628.current_mProperty (HERE).getter_mOppositeRelationshipName (SOURCE_FILE ("entity.swift.galgasTemplate", 829)).stringValue () ;
          result << "_property.setProp (unwrappedOwner)\n" ;
        }
      }else if (kBoolFalse == test_7) {
      }
      result << "      //--- Remove property observers of old object\n" ;
      GALGAS_uint index_33449_ (0) ;
      if (enumerator_30628.current_mProperty (HERE).getter_mDestinationEntityObservablePropertyMap (SOURCE_FILE ("entity.swift.galgasTemplate", 833)).isValid ()) {
        cEnumerator_propertyMap enumerator_33449 (enumerator_30628.current_mProperty (HERE).getter_mDestinationEntityObservablePropertyMap (SOURCE_FILE ("entity.swift.galgasTemplate", 833)), kENUMERATION_UP) ;
        while (enumerator_33449.hasCurrentObject ()) {
          const enumGalgasBool test_9 = enumerator_33449.current_mKind (HERE).getter_isProperty (SOURCE_FILE ("entity.swift.galgasTemplate", 834)).boolEnum () ;
          if (kBoolTrue == test_9) {
            result << "        oldValue\?." ;
            result << enumerator_33449.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property.removeEBObserversFrom (&self.mObserversOf_" ;
            result << enumerator_33449.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << ")\n" ;
          }else if (kBoolFalse == test_9) {
          }
          index_33449_.increment () ;
          enumerator_33449.gotoNextObject () ;
        }
      }
      result << "      //--- Add property observers to new object\n" ;
      GALGAS_uint index_33734_ (0) ;
      if (enumerator_30628.current_mProperty (HERE).getter_mDestinationEntityObservablePropertyMap (SOURCE_FILE ("entity.swift.galgasTemplate", 839)).isValid ()) {
        cEnumerator_propertyMap enumerator_33734 (enumerator_30628.current_mProperty (HERE).getter_mDestinationEntityObservablePropertyMap (SOURCE_FILE ("entity.swift.galgasTemplate", 839)), kENUMERATION_UP) ;
        while (enumerator_33734.hasCurrentObject ()) {
          const enumGalgasBool test_10 = enumerator_33734.current_mKind (HERE).getter_isProperty (SOURCE_FILE ("entity.swift.galgasTemplate", 840)).boolEnum () ;
          if (kBoolTrue == test_10) {
            result << "        self.mValue\?." ;
            result << enumerator_33734.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property.addEBObserversFrom (&self.mObserversOf_" ;
            result << enumerator_33734.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << ")\n" ;
          }else if (kBoolFalse == test_10) {
          }
          index_33734_.increment () ;
          enumerator_33734.gotoNextObject () ;
        }
      }
      result << "       //--- Notify observers\n"
        "        self.postEvent ()\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  var propval : " ;
      result << extensionGetter_swiftTypeName (enumerator_30628.current_mProperty (HERE).getter_mRelationshipType (SOURCE_FILE ("entity.swift.galgasTemplate", 852)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 852)).stringValue () ;
      result << "\? { return self.mValue }\n"
        "\n"
        "  var prop : EBSelection <" ;
      result << extensionGetter_swiftTypeName (enumerator_30628.current_mProperty (HERE).getter_mRelationshipType (SOURCE_FILE ("entity.swift.galgasTemplate", 854)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 854)).stringValue () ;
      result << "\?> { return .single (self.mValue) }\n"
        "\n"
        "  func setProp (_ value : " ;
      result << extensionGetter_swiftTypeName (enumerator_30628.current_mProperty (HERE).getter_mRelationshipType (SOURCE_FILE ("entity.swift.galgasTemplate", 856)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 856)).stringValue () ;
      result << "\?) { self.mValue = value }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  @objc func performUndo (_ oldValue : " ;
      result << extensionGetter_swiftTypeName (enumerator_30628.current_mProperty (HERE).getter_mRelationshipType (SOURCE_FILE ("entity.swift.galgasTemplate", 860)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 860)).stringValue () ;
      result << "\?) {\n"
        "    self.mValue = oldValue\n"
        "  }\n"
        "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  func remove (_ object : " ;
      result << extensionGetter_swiftTypeName (enumerator_30628.current_mProperty (HERE).getter_mRelationshipType (SOURCE_FILE ("entity.swift.galgasTemplate", 866)), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 866)).stringValue () ;
      result << ") {\n"
        "    if self.mValue === object {\n"
        "      self.mValue = nil\n"
        "    }\n"
        "  }\n"
        "\n" ;
      GALGAS_uint index_34980_ (0) ;
      if (enumerator_30628.current_mProperty (HERE).getter_mDestinationEntityObservablePropertyMap (SOURCE_FILE ("entity.swift.galgasTemplate", 873)).isValid ()) {
        cEnumerator_propertyMap enumerator_34980 (enumerator_30628.current_mProperty (HERE).getter_mDestinationEntityObservablePropertyMap (SOURCE_FILE ("entity.swift.galgasTemplate", 873)), kENUMERATION_UP) ;
        while (enumerator_34980.hasCurrentObject ()) {
          const enumGalgasBool test_11 = enumerator_34980.current_mKind (HERE).getter_isProperty (SOURCE_FILE ("entity.swift.galgasTemplate", 874)).boolEnum () ;
          if (kBoolTrue == test_11) {
            result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
              "  //   Observable property: " ;
            result << enumerator_34980.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "\n"
              "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
              "\n"
              "  private var mObserversOf_" ;
            result << enumerator_34980.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " = EBWeakEventSet ()\n"
              "\n"
              "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
              "\n"
              "  var " ;
            result << enumerator_34980.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property_selection : EBSelection <" ;
            result << extensionGetter_swiftTypeName (enumerator_34980.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 880)).stringValue () ;
            result << "\?> {\n"
              "    if let model = self.propval {\n"
              "      switch (model." ;
            result << enumerator_34980.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property_selection) {\n"
              "      case .empty :\n"
              "        return .empty\n"
              "      case .multiple :\n"
              "        return .multiple\n"
              "      case .single (let v) :\n"
              "        return .single (v)\n"
              "      }\n"
              "    }else{\n"
              "      return .single (nil)\n"
              "    }\n"
              "  }\n"
              "\n"
              "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
              "\n"
              "  final func addEBObserverOf_" ;
            result << enumerator_34980.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " (_ inObserver : EBEvent) {\n"
              "    self.mObserversOf_" ;
            result << enumerator_34980.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << ".insert (inObserver)\n"
              "    if let object = self.propval {\n"
              "      object." ;
            result << enumerator_34980.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property.addEBObserver (inObserver)\n"
              "    }\n"
              "  }\n"
              "\n"
              "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
              "\n"
              "  final func removeEBObserverOf_" ;
            result << enumerator_34980.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " (_ inObserver : EBEvent) {\n"
              "    self.mObserversOf_" ;
            result << enumerator_34980.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << ".remove (inObserver)\n"
              "    if let object = self.propval {\n"
              "      object." ;
            result << enumerator_34980.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "_property.removeEBObserver (inObserver)\n"
              "    }\n"
              "  }\n"
              "\n" ;
          }else if (kBoolFalse == test_11) {
          }
          index_34980_.increment () ;
          enumerator_34980.gotoNextObject () ;
        }
      }
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "}\n" ;
      index_30628_.increment () ;
      enumerator_30628.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Filewrapper template 'entityGenerationTemplate managedObjectFactory'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_entityListForGeneratingEBManagedObjectContext & in_ENTITY_5F_LIST
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
    "fileprivate let kEntityDictionary : [String : EBManagedObject.Type] = [\n" ;
  GALGAS_uint index_538_ (0) ;
  if (in_ENTITY_5F_LIST.isValid ()) {
    cEnumerator_entityListForGeneratingEBManagedObjectContext enumerator_538 (in_ENTITY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_538.hasCurrentObject ()) {
      result << "  \"" ;
      result << enumerator_538.current_mEntityName (HERE).stringValue () ;
      result << "\" : " ;
      result << enumerator_538.current_mEntityName (HERE).stringValue () ;
      result << ".self" ;
      GALGAS_uint index_619_ (0) ;
      if (enumerator_538.current_mObsoleteEntityNames (HERE).isValid ()) {
        cEnumerator_lstringlist enumerator_619 (enumerator_538.current_mObsoleteEntityNames (HERE), kENUMERATION_UP) ;
        while (enumerator_619.hasCurrentObject ()) {
          result << ",\n"
            "  \"" ;
          result << enumerator_619.current_mValue (HERE).getter_string (SOURCE_FILE ("EBManagedObjectFactory.swift.galgasTemplate", 15)).stringValue () ;
          result << "\" : " ;
          result << enumerator_538.current_mEntityName (HERE).stringValue () ;
          result << ".self" ;
          index_619_.increment () ;
          enumerator_619.gotoNextObject () ;
        }
      }
      if (enumerator_538.hasNextObject ()) {
        result << ",\n" ;
      }
      index_538_.increment () ;
      enumerator_538.gotoNextObject () ;
    }
  }
  result << "\n"
    "]\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  newInstanceOfEntityNamed\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "func newInstanceOfEntityNamed (_ undoManager : EBUndoManager\?, _ inEntityTypeName : String) -> EBManagedObject\? {\n"
    "  if let T = kEntityDictionary [inEntityTypeName] {\n"
    "    return T.init (undoManager)\n"
    "  }else{\n"
    "    return nil\n"
    "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//   makeManagedObjectFromDictionary\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "func makeManagedObjectFromDictionary (_ inUndoManager : EBUndoManager\?, _ inDictionary : NSDictionary) -> EBManagedObject\? {\n"
    "  let entityName = inDictionary.value (forKey: kEntityKey) as! String\n"
    "  if let object = newInstanceOfEntityNamed (inUndoManager, entityName) {\n"
    "    object.setUpAtomicPropertiesWithDictionary (inDictionary) \n"
    "    return object\n"
    "  }else{\n"
    "    return nil\n"
    "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//     loadEasyBindingFile\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "func loadEasyBindingFile (_ inUndoManager : EBUndoManager\?, from data: Data) throws -> (UInt8, [String : Any], EBManagedObject\?) {\n"
    "//---- Define input data scanner\n"
    "  var dataScanner = EBDataScanner (data:data)\n"
    "//--- Check Signature\n"
    "  for c in kFormatSignature.utf8 {\n"
    "    dataScanner.acceptRequired (byte: c)\n"
    "  }\n"
    "//--- Read Status\n"
    "  let metadataStatus = dataScanner.parseByte ()\n"
    "//--- if ok, check byte is 1\n"
    "  dataScanner.acceptRequired (byte: 1)\n"
    "//--- Read metadata dictionary\n"
    "  let dictionaryData = dataScanner.parseAutosizedData ()\n"
    "  let metadataDictionary = try PropertyListSerialization.propertyList (from: dictionaryData as Data,\n"
    "    options:[],\n"
    "    format:nil\n"
    "  ) as! [String : Any]\n"
    "//--- Read data\n"
    "  let dataFormat = dataScanner.parseByte ()\n"
    "  let fileData = dataScanner.parseAutosizedData ()\n"
    "//--- if ok, check final byte (0)\n"
    "  dataScanner.acceptRequired (byte: 0)\n"
    "//--- Scanner error \?\n"
    "  if !dataScanner.ok () {\n"
    "    let dictionary = [\n"
    "      \"Cannot Open Document\" :  NSLocalizedDescriptionKey,\n"
    "      \"The file has an invalid format\" :  NSLocalizedRecoverySuggestionErrorKey\n"
    "    ]\n"
    "    throw NSError (\n"
    "      domain:Bundle.main.bundleIdentifier!,\n"
    "      code:1,\n"
    "      userInfo:dictionary\n"
    "    )\n"
    "  }\n"
    "//--- Analyze read data\n"
    "  var rootObject : EBManagedObject\? = nil\n"
    "  if dataFormat == 0x06 {\n"
    "    rootObject = try readManagedObjectsFromData (inUndoManager, inData: fileData)\n"
    "  }else{\n"
    "    try raiseInvalidDataFormatArror (dataFormat: dataFormat)\n"
    "  }\n"
    "//---\n"
    "  if rootObject == nil {\n"
    "    let dictionary = [\n"
    "      \"Cannot Open Document\" :  NSLocalizedDescriptionKey,\n"
    "      \"Root object cannot be read\" :  NSLocalizedRecoverySuggestionErrorKey\n"
    "    ]\n"
    "    throw NSError (\n"
    "      domain:Bundle.main.bundleIdentifier!,\n"
    "      code:1,\n"
    "      userInfo:dictionary\n"
    "    )\n"
    "  }\n"
    "//---\n"
    "  return (metadataStatus, metadataDictionary, rootObject)\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "fileprivate func readManagedObjectsFromData (_ inUndoManager : EBUndoManager\?, inData : Data) throws -> EBManagedObject\? {\n"
    "  var resultRootObject : EBManagedObject\? = nil\n"
    "  let v : Any = try PropertyListSerialization.propertyList (from: inData as Data,\n"
    "    options:[],\n"
    "    format:nil\n"
    "  )\n"
    "  let dictionaryArray : [NSDictionary] = v as! [NSDictionary]\n"
    "  let semaphore : DispatchSemaphore = DispatchSemaphore (value: 0)\n"
    "  let queue = DispatchQueue (label: \"readObjectFromData\")\n"
    "  var possibleError : NSError\? = nil\n"
    "  queue.asyncAfter (deadline: .now (), execute: {\n"
    "    do{\n"
    "      var objectArray = [EBManagedObject] ()\n"
    "      for d in dictionaryArray {\n"
    "        let className = d.object (forKey: kEntityKey) as! String\n"
    "        if let object = newInstanceOfEntityNamed (inUndoManager, className) {\n"
    "          objectArray.append (object)\n"
    "        }else{\n"
    "          let dictionary = [\n"
    "            \"Cannot Open Document\" :  NSLocalizedDescriptionKey,\n"
    "            \"Root object cannot be read\" :  NSLocalizedRecoverySuggestionErrorKey\n"
    "          ]\n"
    "          throw NSError (\n"
    "            domain:Bundle.main.bundleIdentifier!,\n"
    "            code:1,\n"
    "            userInfo:dictionary\n"
    "          )     \n"
    "        }\n"
    "      }\n"
    "      var idx = 0\n"
    "      for d in dictionaryArray {\n"
    "        let object : EBManagedObject = objectArray [idx]\n"
    "        object.setUpWithDictionary (d, managedObjectArray: &objectArray)\n"
    "        idx += 1\n"
    "      }\n"
    "    //--- Set root object\n"
    "      resultRootObject = objectArray [0]\n"
    "      semaphore.signal()\n"
    "    }catch let error as NSError {\n"
    "      possibleError = error\n"
    "      semaphore.signal()\n"
    "   }\n"
    "  })\n"
    "  semaphore.wait()\n"
    "  if let error = possibleError {\n"
    "    throw error\n"
    "  }\n"
    "  return resultRootObject\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "fileprivate func raiseInvalidDataFormatArror (dataFormat : UInt8) throws {\n"
    "  let dictionary = [\n"
    "    \"Cannot Open Document\" :  NSLocalizedDescriptionKey,\n"
    "    \"Unkown data format: \\(dataFormat)\" :  NSLocalizedRecoverySuggestionErrorKey\n"
    "  ]\n"
    "  throw NSError (\n"
    "    domain:Bundle.main.bundleIdentifier!,\n"
    "    code:1,\n"
    "    userInfo:dictionary\n"
    "  )\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  return GALGAS_string (result) ;
}

