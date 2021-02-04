#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractViewInstructionGeneration::objectCompare (const GALGAS_abstractViewInstructionGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration::GALGAS_abstractViewInstructionGeneration (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration::GALGAS_abstractViewInstructionGeneration (const cPtr_abstractViewInstructionGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractViewInstructionGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractViewInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractViewInstructionGeneration::cPtr_abstractViewInstructionGeneration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractViewInstructionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractViewInstructionGeneration ("abstractViewInstructionGeneration",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration GALGAS_abstractViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractViewInstructionGeneration result ;
  const GALGAS_abstractViewInstructionGeneration * p = (const GALGAS_abstractViewInstructionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_hStackViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_hStackViewInstructionGeneration * p = (const cPtr_hStackViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mMargin.objectCompare (p->mProperty_mMargin) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_hStackViewInstructionGeneration::objectCompare (const GALGAS_hStackViewInstructionGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration::GALGAS_hStackViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_hStackViewInstructionGeneration::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                  GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration::GALGAS_hStackViewInstructionGeneration (const cPtr_hStackViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_hStackViewInstructionGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration::constructor_new (const GALGAS_uint & inAttribute_mMargin,
                                                                                                const GALGAS_autoLayoutViewInstructionGenerationList & inAttribute_mInstructionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_hStackViewInstructionGeneration result ;
  if (inAttribute_mMargin.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_hStackViewInstructionGeneration (inAttribute_mMargin, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_hStackViewInstructionGeneration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_hStackViewInstructionGeneration * p = (const cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    result = p->mProperty_mMargin ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_hStackViewInstructionGeneration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMargin ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_hStackViewInstructionGeneration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_hStackViewInstructionGeneration * p = (const cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList cPtr_hStackViewInstructionGeneration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_hStackViewInstructionGeneration::setter_setMMargin (GALGAS_uint inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    p->mProperty_mMargin = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_hStackViewInstructionGeneration::setter_setMMargin (GALGAS_uint inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMargin = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_hStackViewInstructionGeneration::setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_hStackViewInstructionGeneration::setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @hStackViewInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_hStackViewInstructionGeneration::cPtr_hStackViewInstructionGeneration (const GALGAS_uint & in_mMargin,
                                                                            const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mMargin (in_mMargin),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_hStackViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;
}

void cPtr_hStackViewInstructionGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@hStackViewInstructionGeneration:" ;
  mProperty_mMargin.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_hStackViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_hStackViewInstructionGeneration (mProperty_mMargin, mProperty_mInstructionList COMMA_THERE)) ;
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
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_vStackViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_vStackViewInstructionGeneration * p = (const cPtr_vStackViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mMargin.objectCompare (p->mProperty_mMargin) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_vStackViewInstructionGeneration::objectCompare (const GALGAS_vStackViewInstructionGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration::GALGAS_vStackViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration GALGAS_vStackViewInstructionGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_vStackViewInstructionGeneration::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                  GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration::GALGAS_vStackViewInstructionGeneration (const cPtr_vStackViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_vStackViewInstructionGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration GALGAS_vStackViewInstructionGeneration::constructor_new (const GALGAS_uint & inAttribute_mMargin,
                                                                                                const GALGAS_autoLayoutViewInstructionGenerationList & inAttribute_mInstructionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_vStackViewInstructionGeneration result ;
  if (inAttribute_mMargin.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_vStackViewInstructionGeneration (inAttribute_mMargin, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_vStackViewInstructionGeneration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_vStackViewInstructionGeneration * p = (const cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    result = p->mProperty_mMargin ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_vStackViewInstructionGeneration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMargin ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_vStackViewInstructionGeneration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_vStackViewInstructionGeneration * p = (const cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList cPtr_vStackViewInstructionGeneration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_vStackViewInstructionGeneration::setter_setMMargin (GALGAS_uint inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    p->mProperty_mMargin = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_vStackViewInstructionGeneration::setter_setMMargin (GALGAS_uint inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMargin = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_vStackViewInstructionGeneration::setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_vStackViewInstructionGeneration::setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @vStackViewInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_vStackViewInstructionGeneration::cPtr_vStackViewInstructionGeneration (const GALGAS_uint & in_mMargin,
                                                                            const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mMargin (in_mMargin),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_vStackViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;
}

void cPtr_vStackViewInstructionGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@vStackViewInstructionGeneration:" ;
  mProperty_mMargin.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_vStackViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_vStackViewInstructionGeneration (mProperty_mMargin, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@vStackViewInstructionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ("vStackViewInstructionGeneration",
                                                        & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_vStackViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_vStackViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_vStackViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration GALGAS_vStackViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_vStackViewInstructionGeneration result ;
  const GALGAS_vStackViewInstructionGeneration * p = (const GALGAS_vStackViewInstructionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_vStackViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("vStackViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutSpaceViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutSpaceViewInstructionGeneration::objectCompare (const GALGAS_autoLayoutSpaceViewInstructionGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration::GALGAS_autoLayoutSpaceViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration GALGAS_autoLayoutSpaceViewInstructionGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutSpaceViewInstructionGeneration::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration::GALGAS_autoLayoutSpaceViewInstructionGeneration (const cPtr_autoLayoutSpaceViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutSpaceViewInstructionGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration GALGAS_autoLayoutSpaceViewInstructionGeneration::constructor_new (LOCATION_ARGS) {
  GALGAS_autoLayoutSpaceViewInstructionGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutSpaceViewInstructionGeneration (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutSpaceViewInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutSpaceViewInstructionGeneration::cPtr_autoLayoutSpaceViewInstructionGeneration (LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutSpaceViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;
}

void cPtr_autoLayoutSpaceViewInstructionGeneration::description (C_String & ioString,
                                                                 const int32_t /* inIndentation */) const {
  ioString << "[@autoLayoutSpaceViewInstructionGeneration]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutSpaceViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutSpaceViewInstructionGeneration (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutSpaceViewInstructionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ("autoLayoutSpaceViewInstructionGeneration",
                                                                 & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutSpaceViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutSpaceViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutSpaceViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration GALGAS_autoLayoutSpaceViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutSpaceViewInstructionGeneration result ;
  const GALGAS_autoLayoutSpaceViewInstructionGeneration * p = (const GALGAS_autoLayoutSpaceViewInstructionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutSpaceViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSpaceViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutLocalViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutLocalViewInstructionGeneration * p = (const cPtr_autoLayoutLocalViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutLocalViewInstructionGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocalView.objectCompare (p->mProperty_mLocalView) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutLocalViewInstructionGeneration::objectCompare (const GALGAS_autoLayoutLocalViewInstructionGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration::GALGAS_autoLayoutLocalViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration GALGAS_autoLayoutLocalViewInstructionGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutLocalViewInstructionGeneration::constructor_new (GALGAS_string::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration::GALGAS_autoLayoutLocalViewInstructionGeneration (const cPtr_autoLayoutLocalViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutLocalViewInstructionGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration GALGAS_autoLayoutLocalViewInstructionGeneration::constructor_new (const GALGAS_string & inAttribute_mLocalView
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutLocalViewInstructionGeneration result ;
  if (inAttribute_mLocalView.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutLocalViewInstructionGeneration (inAttribute_mLocalView COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutLocalViewInstructionGeneration::getter_mLocalView (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutLocalViewInstructionGeneration * p = (const cPtr_autoLayoutLocalViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutLocalViewInstructionGeneration) ;
    result = p->mProperty_mLocalView ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_mLocalView (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocalView ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutLocalViewInstructionGeneration::setter_setMLocalView (GALGAS_string inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutLocalViewInstructionGeneration * p = (cPtr_autoLayoutLocalViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutLocalViewInstructionGeneration) ;
    p->mProperty_mLocalView = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutLocalViewInstructionGeneration::setter_setMLocalView (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocalView = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutLocalViewInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutLocalViewInstructionGeneration::cPtr_autoLayoutLocalViewInstructionGeneration (const GALGAS_string & in_mLocalView
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mLocalView (in_mLocalView) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutLocalViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;
}

void cPtr_autoLayoutLocalViewInstructionGeneration::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@autoLayoutLocalViewInstructionGeneration:" ;
  mProperty_mLocalView.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutLocalViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutLocalViewInstructionGeneration (mProperty_mLocalView COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutLocalViewInstructionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ("autoLayoutLocalViewInstructionGeneration",
                                                                 & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutLocalViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutLocalViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutLocalViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration GALGAS_autoLayoutLocalViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutLocalViewInstructionGeneration result ;
  const GALGAS_autoLayoutLocalViewInstructionGeneration * p = (const GALGAS_autoLayoutLocalViewInstructionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutLocalViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutLocalViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutRegularBindingsGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutRegularBindingsGenerationList : public cCollectionElement {
  public : GALGAS_autoLayoutRegularBindingsGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_autoLayoutRegularBindingsGenerationList (const GALGAS_string & in_mBindingName,
                                                                       const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                       const GALGAS_string & in_mBindingOptionsString
                                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_autoLayoutRegularBindingsGenerationList (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutRegularBindingsGenerationList::cCollectionElement_autoLayoutRegularBindingsGenerationList (const GALGAS_string & in_mBindingName,
                                                                                                                        const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                                                        const GALGAS_string & in_mBindingOptionsString
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutRegularBindingsGenerationList::cCollectionElement_autoLayoutRegularBindingsGenerationList (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectList, inElement.mProperty_mBindingOptionsString) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutRegularBindingsGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutRegularBindingsGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutRegularBindingsGenerationList (mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectList, mObject.mProperty_mBindingOptionsString COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutRegularBindingsGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundObjectList" ":" ;
  mObject.mProperty_mBoundObjectList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingOptionsString" ":" ;
  mObject.mProperty_mBindingOptionsString.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutRegularBindingsGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutRegularBindingsGenerationList * operand = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList::GALGAS_autoLayoutRegularBindingsGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList::GALGAS_autoLayoutRegularBindingsGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutRegularBindingsGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutRegularBindingsGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutRegularBindingsGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                          const GALGAS_boundObjectList & inOperand1,
                                                                                                                          const GALGAS_string & inOperand2
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutRegularBindingsGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_autoLayoutRegularBindingsGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutRegularBindingsGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_string & in_mBindingName,
                                                                                const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                const GALGAS_string & in_mBindingOptionsString
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutRegularBindingsGenerationList (in_mBindingName,
                                                                             in_mBoundObjectList,
                                                                             in_mBindingOptionsString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                          const GALGAS_boundObjectList & inOperand1,
                                                                          const GALGAS_string & inOperand2
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutRegularBindingsGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_append (GALGAS_autoLayoutRegularBindingsGenerationList_2D_element inElement,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutRegularBindingsGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                           const GALGAS_boundObjectList inOperand1,
                                                                           const GALGAS_string inOperand2,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutRegularBindingsGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                           GALGAS_boundObjectList & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
      outOperand0 = p->mObject.mProperty_mBindingName ;
      outOperand1 = p->mObject.mProperty_mBoundObjectList ;
      outOperand2 = p->mObject.mProperty_mBindingOptionsString ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                                      GALGAS_boundObjectList & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mBoundObjectList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                                     GALGAS_boundObjectList & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mBoundObjectList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::method_first (GALGAS_string & outOperand0,
                                                                   GALGAS_boundObjectList & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mBoundObjectList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::method_last (GALGAS_string & outOperand0,
                                                                  GALGAS_boundObjectList & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mBoundObjectList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutRegularBindingsGenerationList::add_operation (const GALGAS_autoLayoutRegularBindingsGenerationList & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutRegularBindingsGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutRegularBindingsGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutRegularBindingsGenerationList result = GALGAS_autoLayoutRegularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutRegularBindingsGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutRegularBindingsGenerationList result = GALGAS_autoLayoutRegularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutRegularBindingsGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutRegularBindingsGenerationList result = GALGAS_autoLayoutRegularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::plusAssign_operation (const GALGAS_autoLayoutRegularBindingsGenerationList inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_setMBindingNameAtIndex (GALGAS_string inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutRegularBindingsGenerationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_setMBoundObjectListAtIndex (GALGAS_boundObjectList inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundObjectList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_autoLayoutRegularBindingsGenerationList::getter_mBoundObjectListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_boundObjectList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBoundObjectList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_setMBindingOptionsStringAtIndex (GALGAS_string inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingOptionsString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutRegularBindingsGenerationList::getter_mBindingOptionsStringAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBindingOptionsString ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutRegularBindingsGenerationList::cEnumerator_autoLayoutRegularBindingsGenerationList (const GALGAS_autoLayoutRegularBindingsGenerationList & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element cEnumerator_autoLayoutRegularBindingsGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (const cCollectionElement_autoLayoutRegularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutRegularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (const cCollectionElement_autoLayoutRegularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList cEnumerator_autoLayoutRegularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (const cCollectionElement_autoLayoutRegularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
  return p->mObject.mProperty_mBoundObjectList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutRegularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (const cCollectionElement_autoLayoutRegularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingOptionsString ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutRegularBindingsGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList ("autoLayoutRegularBindingsGenerationList",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutRegularBindingsGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutRegularBindingsGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutRegularBindingsGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutRegularBindingsGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutRegularBindingsGenerationList result ;
  const GALGAS_autoLayoutRegularBindingsGenerationList * p = (const GALGAS_autoLayoutRegularBindingsGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutRegularBindingsGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutRegularBindingsGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@boundObjectList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_boundObjectList : public cCollectionElement {
  public : GALGAS_boundObjectList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_boundObjectList (const GALGAS_string & in_mBoundObjectString,
                                               const GALGAS_propertyKind & in_mKind
                                               COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_boundObjectList (const GALGAS_boundObjectList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_boundObjectList::cCollectionElement_boundObjectList (const GALGAS_string & in_mBoundObjectString,
                                                                        const GALGAS_propertyKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBoundObjectString, in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_boundObjectList::cCollectionElement_boundObjectList (const GALGAS_boundObjectList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBoundObjectString, inElement.mProperty_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_boundObjectList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_boundObjectList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_boundObjectList (mObject.mProperty_mBoundObjectString, mObject.mProperty_mKind COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_boundObjectList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundObjectString" ":" ;
  mObject.mProperty_mBoundObjectString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mObject.mProperty_mKind.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_boundObjectList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_boundObjectList * operand = (cCollectionElement_boundObjectList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_boundObjectList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList::GALGAS_boundObjectList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList::GALGAS_boundObjectList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_boundObjectList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_boundObjectList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_boundObjectList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                          const GALGAS_propertyKind & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boundObjectList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_boundObjectList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_boundObjectList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_string & in_mBoundObjectString,
                                                        const GALGAS_propertyKind & in_mKind
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_boundObjectList * p = NULL ;
  macroMyNew (p, cCollectionElement_boundObjectList (in_mBoundObjectString,
                                                     in_mKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::addAssign_operation (const GALGAS_string & inOperand0,
                                                  const GALGAS_propertyKind & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_boundObjectList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::setter_append (GALGAS_boundObjectList_2D_element inElement,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_boundObjectList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                   const GALGAS_propertyKind inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_boundObjectList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                   GALGAS_propertyKind & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
      outOperand0 = p->mObject.mProperty_mBoundObjectString ;
      outOperand1 = p->mObject.mProperty_mKind ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::setter_popFirst (GALGAS_string & outOperand0,
                                              GALGAS_propertyKind & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
    outOperand0 = p->mObject.mProperty_mBoundObjectString ;
    outOperand1 = p->mObject.mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::setter_popLast (GALGAS_string & outOperand0,
                                             GALGAS_propertyKind & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
    outOperand0 = p->mObject.mProperty_mBoundObjectString ;
    outOperand1 = p->mObject.mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::method_first (GALGAS_string & outOperand0,
                                           GALGAS_propertyKind & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
    outOperand0 = p->mObject.mProperty_mBoundObjectString ;
    outOperand1 = p->mObject.mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::method_last (GALGAS_string & outOperand0,
                                          GALGAS_propertyKind & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
    outOperand0 = p->mObject.mProperty_mBoundObjectString ;
    outOperand1 = p->mObject.mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_boundObjectList::add_operation (const GALGAS_boundObjectList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_boundObjectList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_boundObjectList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_boundObjectList result = GALGAS_boundObjectList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_boundObjectList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_boundObjectList result = GALGAS_boundObjectList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_boundObjectList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_boundObjectList result = GALGAS_boundObjectList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::plusAssign_operation (const GALGAS_boundObjectList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::setter_setMBoundObjectStringAtIndex (GALGAS_string inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundObjectString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_boundObjectList::getter_mBoundObjectStringAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
    result = p->mObject.mProperty_mBoundObjectString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList::setter_setMKindAtIndex (GALGAS_propertyKind inOperand,
                                                     GALGAS_uint inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_boundObjectList::getter_mKindAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) attributes.ptr () ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
    result = p->mObject.mProperty_mKind ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_boundObjectList::cEnumerator_boundObjectList (const GALGAS_boundObjectList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element cEnumerator_boundObjectList::current (LOCATION_ARGS) const {
  const cCollectionElement_boundObjectList * p = (const cCollectionElement_boundObjectList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_boundObjectList::current_mBoundObjectString (LOCATION_ARGS) const {
  const cCollectionElement_boundObjectList * p = (const cCollectionElement_boundObjectList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
  return p->mObject.mProperty_mBoundObjectString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind cEnumerator_boundObjectList::current_mKind (LOCATION_ARGS) const {
  const cCollectionElement_boundObjectList * p = (const cCollectionElement_boundObjectList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
  return p->mObject.mProperty_mKind ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@boundObjectList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boundObjectList ("boundObjectList",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boundObjectList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boundObjectList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boundObjectList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_boundObjectList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_boundObjectList result ;
  const GALGAS_boundObjectList * p = (const GALGAS_boundObjectList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boundObjectList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boundObjectList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutViewInstructionGenerationParameterList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutViewInstructionGenerationParameterList : public cCollectionElement {
  public : GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GALGAS_lstring & in_mParameterName,
                                                                                const GALGAS_string & in_mParameterValue
                                                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationParameterList::cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GALGAS_lstring & in_mParameterName,
                                                                                                                                          const GALGAS_string & in_mParameterValue
                                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mParameterValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationParameterList::cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutViewInstructionGenerationParameterList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutViewInstructionGenerationParameterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutViewInstructionGenerationParameterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterName" ":" ;
  mObject.mProperty_mParameterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterValue" ":" ;
  mObject.mProperty_mParameterValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutViewInstructionGenerationParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * operand = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList::GALGAS_autoLayoutViewInstructionGenerationParameterList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList::GALGAS_autoLayoutViewInstructionGenerationParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutViewInstructionGenerationParameterList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                            const GALGAS_string & inOperand1
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutViewInstructionGenerationParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutViewInstructionGenerationParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                         const GALGAS_lstring & in_mParameterName,
                                                                                         const GALGAS_string & in_mParameterValue
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (in_mParameterName,
                                                                                      in_mParameterValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                                   const GALGAS_string & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_append (GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element inElement,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                                    const GALGAS_string inOperand1,
                                                                                    const GALGAS_uint inInsertionIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                                    GALGAS_string & outOperand1,
                                                                                    const GALGAS_uint inRemoveIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
      outOperand0 = p->mObject.mProperty_mParameterName ;
      outOperand1 = p->mObject.mProperty_mParameterValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                               GALGAS_string & outOperand1,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                              GALGAS_string & outOperand1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::method_first (GALGAS_lstring & outOperand0,
                                                                            GALGAS_string & outOperand1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::method_last (GALGAS_lstring & outOperand0,
                                                                           GALGAS_string & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutViewInstructionGenerationParameterList::add_operation (const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutViewInstructionGenerationParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationParameterList result = GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutViewInstructionGenerationParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationParameterList result = GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutViewInstructionGenerationParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationParameterList result = GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterNameAtIndex (GALGAS_lstring inOperand,
                                                                                               GALGAS_uint inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    result = p->mObject.mProperty_mParameterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterValueAtIndex (GALGAS_string inOperand,
                                                                                                GALGAS_uint inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    result = p->mObject.mProperty_mParameterValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutViewInstructionGenerationParameterList::cEnumerator_autoLayoutViewInstructionGenerationParameterList (const GALGAS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject,
                                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element cEnumerator_autoLayoutViewInstructionGenerationParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
  return p->mObject.mProperty_mParameterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterValue (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
  return p->mObject.mProperty_mParameterValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewInstructionGenerationParameterList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ("autoLayoutViewInstructionGenerationParameterList",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationParameterList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutViewInstructionGenerationParameterList::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationParameterList result ;
  const GALGAS_autoLayoutViewInstructionGenerationParameterList * p = (const GALGAS_autoLayoutViewInstructionGenerationParameterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractViewGeneration_generate> gExtensionGetterTable_abstractViewGeneration_generate ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generate (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractViewGeneration_generate inGetter) {
  gExtensionGetterTable_abstractViewGeneration_generate.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractViewGeneration_generate (void) {
  gExtensionGetterTable_abstractViewGeneration_generate.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractViewGeneration_generate (NULL,
                                                            freeExtensionGetter_abstractViewGeneration_generate) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generate (const cPtr_abstractViewGeneration * inObject,
                                            const GALGAS_string in_inViewName,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractViewGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractViewGeneration_generate f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractViewGeneration_generate.count ()) {
      f = gExtensionGetterTable_abstractViewGeneration_generate (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractViewGeneration_generate.count ()) {
           f = gExtensionGetterTable_abstractViewGeneration_generate (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractViewGeneration_generate.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inViewName, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractViewInstructionGeneration_generate> gExtensionGetterTable_abstractViewInstructionGeneration_generate ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generate (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractViewInstructionGeneration_generate inGetter) {
  gExtensionGetterTable_abstractViewInstructionGeneration_generate.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractViewInstructionGeneration_generate (void) {
  gExtensionGetterTable_abstractViewInstructionGeneration_generate.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractViewInstructionGeneration_generate (NULL,
                                                                       freeExtensionGetter_abstractViewInstructionGeneration_generate) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generate (const cPtr_abstractViewInstructionGeneration * inObject,
                                            const GALGAS_string in_inIndentation,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractViewInstructionGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractViewInstructionGeneration_generate f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractViewInstructionGeneration_generate.count ()) {
      f = gExtensionGetterTable_abstractViewInstructionGeneration_generate (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractViewInstructionGeneration_generate.count ()) {
           f = gExtensionGetterTable_abstractViewInstructionGeneration_generate (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractViewInstructionGeneration_generate.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inIndentation, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_outletBindingSpecificationMap::cMapElement_outletBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                                                      const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                      const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletBindingSpecificationModelList (in_mOutletBindingSpecificationModelList),
mProperty_mControllerBindingOptionList (in_mControllerBindingOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_outletBindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletBindingSpecificationModelList.isValid () && mProperty_mControllerBindingOptionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_outletBindingSpecificationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_outletBindingSpecificationMap (mProperty_lkey, mProperty_mOutletBindingSpecificationModelList, mProperty_mControllerBindingOptionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_outletBindingSpecificationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletBindingSpecificationModelList" ":" ;
  mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControllerBindingOptionList" ":" ;
  mProperty_mControllerBindingOptionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_outletBindingSpecificationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_outletBindingSpecificationMap * operand = (cMapElement_outletBindingSpecificationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOutletBindingSpecificationModelList.objectCompare (operand->mProperty_mOutletBindingSpecificationModelList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerBindingOptionList.objectCompare (operand->mProperty_mControllerBindingOptionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationMap::GALGAS_outletBindingSpecificationMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationMap::GALGAS_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationMap & GALGAS_outletBindingSpecificationMap::operator = (const GALGAS_outletBindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::constructor_mapWithMapToOverride (const GALGAS_outletBindingSpecificationMap & inMapToOverride
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                const GALGAS_outletBindingSpecificationModelList & inArgument0,
                                                                const GALGAS_controllerBindingOptionDecoratedList & inArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_outletBindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_outletBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@outletBindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationMap::setter_insertKey (GALGAS_lstring inKey,
                                                             GALGAS_outletBindingSpecificationModelList inArgument0,
                                                             GALGAS_controllerBindingOptionDecoratedList inArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_outletBindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_outletBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_outletBindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationMap::method_searchKey (GALGAS_lstring inKey,
                                                             GALGAS_outletBindingSpecificationModelList & outArgument0,
                                                             GALGAS_controllerBindingOptionDecoratedList & outArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_outletBindingSpecificationMap_searchKey
                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = p->mProperty_mControllerBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationMap::getter_mOutletBindingSpecificationModelListForKey (const GALGAS_string & inKey,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) attributes ;
  GALGAS_outletBindingSpecificationModelList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    result = p->mProperty_mOutletBindingSpecificationModelList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_outletBindingSpecificationMap::getter_mControllerBindingOptionListForKey (const GALGAS_string & inKey,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) attributes ;
  GALGAS_controllerBindingOptionDecoratedList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    result = p->mProperty_mControllerBindingOptionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationMap::setter_setMOutletBindingSpecificationModelListForKey (GALGAS_outletBindingSpecificationModelList inAttributeValue,
                                                                                                 GALGAS_string inKey,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletBindingSpecificationMap * p = (cMapElement_outletBindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    p->mProperty_mOutletBindingSpecificationModelList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationMap::setter_setMControllerBindingOptionListForKey (GALGAS_controllerBindingOptionDecoratedList inAttributeValue,
                                                                                         GALGAS_string inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletBindingSpecificationMap * p = (cMapElement_outletBindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    p->mProperty_mControllerBindingOptionList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_outletBindingSpecificationMap * GALGAS_outletBindingSpecificationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                     const GALGAS_string & inKey
                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_outletBindingSpecificationMap * result = (cMapElement_outletBindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_outletBindingSpecificationMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_outletBindingSpecificationMap::cEnumerator_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationMap_2D_element cEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return GALGAS_outletBindingSpecificationMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletBindingSpecificationModelList, p->mProperty_mControllerBindingOptionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList cEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return p->mProperty_mOutletBindingSpecificationModelList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList cEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return p->mProperty_mControllerBindingOptionList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_outletBindingSpecificationMap::optional_searchKey (const GALGAS_string & inKey,
                                                               GALGAS_outletBindingSpecificationModelList & outArgument0,
                                                               GALGAS_controllerBindingOptionDecoratedList & outArgument1) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = p->mProperty_mControllerBindingOptionList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@outletBindingSpecificationMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationMap ("outletBindingSpecificationMap",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap result ;
  const GALGAS_outletBindingSpecificationMap * p = (const GALGAS_outletBindingSpecificationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@bindingOptionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_bindingOptionList : public cCollectionElement {
  public : GALGAS_bindingOptionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_bindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                 const GALGAS_abstractDefaultValue & in_mOptionValue
                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_bindingOptionList (const GALGAS_bindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_bindingOptionList::cCollectionElement_bindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                                            const GALGAS_abstractDefaultValue & in_mOptionValue
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionName, in_mOptionValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_bindingOptionList::cCollectionElement_bindingOptionList (const GALGAS_bindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionName, inElement.mProperty_mOptionValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_bindingOptionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_bindingOptionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_bindingOptionList (mObject.mProperty_mOptionName, mObject.mProperty_mOptionValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_bindingOptionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionName" ":" ;
  mObject.mProperty_mOptionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionValue" ":" ;
  mObject.mProperty_mOptionValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_bindingOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_bindingOptionList * operand = (cCollectionElement_bindingOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_bindingOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList::GALGAS_bindingOptionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList::GALGAS_bindingOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList GALGAS_bindingOptionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingOptionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList GALGAS_bindingOptionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_abstractDefaultValue & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bindingOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingOptionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_bindingOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mOptionName,
                                                          const GALGAS_abstractDefaultValue & in_mOptionValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_bindingOptionList * p = NULL ;
  macroMyNew (p, cCollectionElement_bindingOptionList (in_mOptionName,
                                                       in_mOptionValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_abstractDefaultValue & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::setter_append (GALGAS_bindingOptionList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bindingOptionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_abstractDefaultValue inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_abstractDefaultValue & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
      outOperand0 = p->mObject.mProperty_mOptionName ;
      outOperand1 = p->mObject.mProperty_mOptionValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_abstractDefaultValue & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_abstractDefaultValue & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_abstractDefaultValue & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_abstractDefaultValue & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList GALGAS_bindingOptionList::add_operation (const GALGAS_bindingOptionList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList GALGAS_bindingOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result = GALGAS_bindingOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList GALGAS_bindingOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result = GALGAS_bindingOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList GALGAS_bindingOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result = GALGAS_bindingOptionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::plusAssign_operation (const GALGAS_bindingOptionList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::setter_setMOptionNameAtIndex (GALGAS_lstring inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_bindingOptionList::getter_mOptionNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    result = p->mObject.mProperty_mOptionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingOptionList::setter_setMOptionValueAtIndex (GALGAS_abstractDefaultValue inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_bindingOptionList::getter_mOptionValueAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    result = p->mObject.mProperty_mOptionValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_bindingOptionList::cEnumerator_bindingOptionList (const GALGAS_bindingOptionList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList_2D_element cEnumerator_bindingOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_bindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject.mProperty_mOptionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue cEnumerator_bindingOptionList::current_mOptionValue (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject.mProperty_mOptionValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@bindingOptionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingOptionList ("bindingOptionList",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bindingOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bindingOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingOptionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList GALGAS_bindingOptionList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bindingOptionList result ;
  const GALGAS_bindingOptionList * p = (const GALGAS_bindingOptionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractDefaultValue::objectCompare (const GALGAS_abstractDefaultValue & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue::GALGAS_abstractDefaultValue (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue::GALGAS_abstractDefaultValue (const cPtr_abstractDefaultValue * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDefaultValue) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractDefaultValue::cPtr_abstractDefaultValue (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDefaultValue ("abstractDefaultValue",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_abstractDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractDefaultValue result ;
  const GALGAS_abstractDefaultValue * p = (const GALGAS_abstractDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@outletBindingModelList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_outletBindingModelList : public cCollectionElement {
  public : GALGAS_outletBindingModelList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletBindingModelList (const GALGAS_propertyKind & in_mKind,
                                                      const GALGAS_location & in_mErrorLocation
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletBindingModelList (const GALGAS_outletBindingModelList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_outletBindingModelList::cCollectionElement_outletBindingModelList (const GALGAS_propertyKind & in_mKind,
                                                                                      const GALGAS_location & in_mErrorLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKind, in_mErrorLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_outletBindingModelList::cCollectionElement_outletBindingModelList (const GALGAS_outletBindingModelList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mKind, inElement.mProperty_mErrorLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_outletBindingModelList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletBindingModelList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletBindingModelList (mObject.mProperty_mKind, mObject.mProperty_mErrorLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_outletBindingModelList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mObject.mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorLocation" ":" ;
  mObject.mProperty_mErrorLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_outletBindingModelList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletBindingModelList * operand = (cCollectionElement_outletBindingModelList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletBindingModelList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList::GALGAS_outletBindingModelList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList::GALGAS_outletBindingModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingModelList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::constructor_listWithValue (const GALGAS_propertyKind & inOperand0,
                                                                                        const GALGAS_location & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingModelList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingModelList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletBindingModelList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_propertyKind & in_mKind,
                                                               const GALGAS_location & in_mErrorLocation
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingModelList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletBindingModelList (in_mKind,
                                                            in_mErrorLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::addAssign_operation (const GALGAS_propertyKind & inOperand0,
                                                         const GALGAS_location & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletBindingModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::setter_append (GALGAS_outletBindingModelList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletBindingModelList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::setter_insertAtIndex (const GALGAS_propertyKind inOperand0,
                                                          const GALGAS_location inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletBindingModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::setter_removeAtIndex (GALGAS_propertyKind & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
      outOperand0 = p->mObject.mProperty_mKind ;
      outOperand1 = p->mObject.mProperty_mErrorLocation ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::setter_popFirst (GALGAS_propertyKind & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    outOperand0 = p->mObject.mProperty_mKind ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::setter_popLast (GALGAS_propertyKind & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    outOperand0 = p->mObject.mProperty_mKind ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::method_first (GALGAS_propertyKind & outOperand0,
                                                  GALGAS_location & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    outOperand0 = p->mObject.mProperty_mKind ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::method_last (GALGAS_propertyKind & outOperand0,
                                                 GALGAS_location & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    outOperand0 = p->mObject.mProperty_mKind ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::add_operation (const GALGAS_outletBindingModelList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletBindingModelList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingModelList result = GALGAS_outletBindingModelList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingModelList result = GALGAS_outletBindingModelList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingModelList result = GALGAS_outletBindingModelList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::plusAssign_operation (const GALGAS_outletBindingModelList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::setter_setMKindAtIndex (GALGAS_propertyKind inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_outletBindingModelList::getter_mKindAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    result = p->mObject.mProperty_mKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList::setter_setMErrorLocationAtIndex (GALGAS_location inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_outletBindingModelList::getter_mErrorLocationAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    result = p->mObject.mProperty_mErrorLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_outletBindingModelList::cEnumerator_outletBindingModelList (const GALGAS_outletBindingModelList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element cEnumerator_outletBindingModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind cEnumerator_outletBindingModelList::current_mKind (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject.mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_outletBindingModelList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject.mProperty_mErrorLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@outletBindingModelList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingModelList ("outletBindingModelList",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletBindingModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletBindingModelList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingModelList result ;
  const GALGAS_outletBindingModelList * p = (const GALGAS_outletBindingModelList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyKind_property::cEnumAssociatedValues_propertyKind_property (const GALGAS_typeKind & inAssociatedValue0,
                                                                                          const GALGAS_propertyAccessibility & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyKind_property::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyKind_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyKind_property * ptr = dynamic_cast<const cEnumAssociatedValues_propertyKind_property *> (inOperand) ;
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

cEnumAssociatedValues_propertyKind_toMany::cEnumAssociatedValues_propertyKind_toMany (const GALGAS_lstring & inAssociatedValue0,
                                                                                      const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                                                      const GALGAS_bool & inAssociatedValue2,
                                                                                      const GALGAS_toManyRelationshipOptionAST & inAssociatedValue3
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyKind_toMany::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyKind_toMany::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyKind_toMany * ptr = dynamic_cast<const cEnumAssociatedValues_propertyKind_toMany *> (inOperand) ;
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

cEnumAssociatedValues_propertyKind_toOne::cEnumAssociatedValues_propertyKind_toOne (const GALGAS_lstring & inAssociatedValue0,
                                                                                    const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                                                    const GALGAS_bool & inAssociatedValue2,
                                                                                    const GALGAS_toOneOppositeRelationship & inAssociatedValue3
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyKind_toOne::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyKind_toOne::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyKind_toOne * ptr = dynamic_cast<const cEnumAssociatedValues_propertyKind_toOne *> (inOperand) ;
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

cEnumAssociatedValues_propertyKind_arrayController::cEnumAssociatedValues_propertyKind_arrayController (const GALGAS_lstring & inAssociatedValue0,
                                                                                                        const GALGAS_bool & inAssociatedValue1
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyKind_arrayController::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyKind_arrayController::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyKind_arrayController * ptr = dynamic_cast<const cEnumAssociatedValues_propertyKind_arrayController *> (inOperand) ;
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

cEnumAssociatedValues_propertyKind_selectionController::cEnumAssociatedValues_propertyKind_selectionController (const GALGAS_string & inAssociatedValue0
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyKind_selectionController::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyKind_selectionController::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyKind_selectionController * ptr = dynamic_cast<const cEnumAssociatedValues_propertyKind_selectionController *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind::GALGAS_propertyKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_propertyKind::constructor_property (const GALGAS_typeKind & inAssociatedValue0,
                                                               const GALGAS_propertyAccessibility & inAssociatedValue1
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_propertyKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKind_property (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_propertyKind::constructor_toMany (const GALGAS_lstring & inAssociatedValue0,
                                                             const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                             const GALGAS_bool & inAssociatedValue2,
                                                             const GALGAS_toManyRelationshipOptionAST & inAssociatedValue3
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_propertyKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_toMany ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKind_toMany (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_propertyKind::constructor_toOne (const GALGAS_lstring & inAssociatedValue0,
                                                            const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                            const GALGAS_bool & inAssociatedValue2,
                                                            const GALGAS_toOneOppositeRelationship & inAssociatedValue3
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_toOne ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKind_toOne (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_propertyKind::constructor_arrayController (const GALGAS_lstring & inAssociatedValue0,
                                                                      const GALGAS_bool & inAssociatedValue1
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayController ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKind_arrayController (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_propertyKind::constructor_selectionController (const GALGAS_string & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_propertyKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selectionController ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKind_selectionController (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKind::method_property (GALGAS_typeKind & outAssociatedValue0,
                                           GALGAS_propertyAccessibility & outAssociatedValue1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @propertyKind property invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKind_property * ptr = (const cEnumAssociatedValues_propertyKind_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKind::method_toMany (GALGAS_lstring & outAssociatedValue0,
                                         GALGAS_propertyAccessibility & outAssociatedValue1,
                                         GALGAS_bool & outAssociatedValue2,
                                         GALGAS_toManyRelationshipOptionAST & outAssociatedValue3,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_toMany) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @propertyKind toMany invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKind_toMany * ptr = (const cEnumAssociatedValues_propertyKind_toMany *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKind::method_toOne (GALGAS_lstring & outAssociatedValue0,
                                        GALGAS_propertyAccessibility & outAssociatedValue1,
                                        GALGAS_bool & outAssociatedValue2,
                                        GALGAS_toOneOppositeRelationship & outAssociatedValue3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_toOne) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @propertyKind toOne invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKind_toOne * ptr = (const cEnumAssociatedValues_propertyKind_toOne *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKind::method_arrayController (GALGAS_lstring & outAssociatedValue0,
                                                  GALGAS_bool & outAssociatedValue1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayController) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @propertyKind arrayController invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKind_arrayController * ptr = (const cEnumAssociatedValues_propertyKind_arrayController *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKind::method_selectionController (GALGAS_string & outAssociatedValue0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selectionController) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @propertyKind selectionController invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKind_selectionController * ptr = (const cEnumAssociatedValues_propertyKind_selectionController *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyKind [6] = {
  "(not built)",
  "property",
  "toMany",
  "toOne",
  "arrayController",
  "selectionController"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKind::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKind::getter_isToMany (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_toMany == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKind::getter_isToOne (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_toOne == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKind::getter_isArrayController (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayController == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyKind::getter_isSelectionController (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selectionController == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyKind::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "<enum @propertyKind: " << gEnumNameArrayFor_propertyKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyKind::objectCompare (const GALGAS_propertyKind & inOperand) const {
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
//@propertyKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyKind ("propertyKind",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_propertyKind::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyKind result ;
  const GALGAS_propertyKind * p = (const GALGAS_propertyKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_rootProperty::cEnumAssociatedValues_observablePropertyAST_rootProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_rootProperty::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_rootProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_rootProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_rootProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *> (inOperand) ;
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

cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                            const GALGAS_lstring & inAssociatedValue1
                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::description (C_String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *> (inOperand) ;
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

cEnumAssociatedValues_observablePropertyAST_rootPropertyNone::cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (const GALGAS_lstring & inAssociatedValue0
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_rootPropertyNone::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_rootPropertyNone::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty::cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_selfProperty::cEnumAssociatedValues_observablePropertyAST_selfProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_selfProperty::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *> (inOperand) ;
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

cEnumAssociatedValues_observablePropertyAST_selfPropertyArray::cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                              const GALGAS_lstring & inAssociatedValue1
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_selfPropertyArray::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfPropertyArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *> (inOperand) ;
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

cEnumAssociatedValues_observablePropertyAST_selfPropertyObject::cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                const GALGAS_lstring & inAssociatedValue1
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_selfPropertyObject::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfPropertyObject::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *> (inOperand) ;
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

cEnumAssociatedValues_observablePropertyAST_selfPropertyNone::cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (const GALGAS_lstring & inAssociatedValue0
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_selfPropertyNone::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfPropertyNone::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_prefsProperty::cEnumAssociatedValues_observablePropertyAST_prefsProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_prefsProperty::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_prefsProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_prefsProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_prefsProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *> (inOperand) ;
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

cEnumAssociatedValues_observablePropertyAST_selfControllerProperty::cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_selfControllerProperty::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfControllerProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *> (inOperand) ;
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

cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty::cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                                          const GALGAS_lstring & inAssociatedValue1,
                                                                                                                                                          const GALGAS_lstring & inAssociatedValue2
                                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty::description (C_String & ioString,
                                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *> (inOperand) ;
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
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties::cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                                  const GALGAS_lstring & inAssociatedValue1,
                                                                                                                                                  const GALGAS_lstring & inAssociatedValue2
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties::description (C_String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *> (inOperand) ;
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
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty::cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                              const GALGAS_lstring & inAssociatedValue1
                                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty::description (C_String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *> (inOperand) ;
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

cEnumAssociatedValues_observablePropertyAST_signatureProperty::cEnumAssociatedValues_observablePropertyAST_signatureProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_signatureProperty::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_signatureProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_signatureProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_signatureProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_versionProperty::cEnumAssociatedValues_observablePropertyAST_versionProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_versionProperty::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_versionProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_versionProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_versionProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::description (C_String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_observablePropertyAST_superProperty::cEnumAssociatedValues_observablePropertyAST_superProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                      const GALGAS_lstring & inAssociatedValue1
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_superProperty::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_superProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_superProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_superProperty *> (inOperand) ;
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

GALGAS_observablePropertyAST::GALGAS_observablePropertyAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_rootProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_rootProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_rootProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_rootPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_rootPropertyWithOption ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_rootPropertyRelationship (const GALGAS_lstring & inAssociatedValue0,
                                                                                                 const GALGAS_lstring & inAssociatedValue1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_rootPropertyRelationship ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_rootPropertyNone (const GALGAS_lstring & inAssociatedValue0
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_rootPropertyNone ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfWithoutProperty (const GALGAS_location & inAssociatedValue0
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selfWithoutProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selfProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_selfPropertyWithOption ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfPropertyArray (const GALGAS_lstring & inAssociatedValue0,
                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_selfPropertyArray ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfPropertyObject (const GALGAS_lstring & inAssociatedValue0,
                                                                                           const GALGAS_lstring & inAssociatedValue1
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_selfPropertyObject ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfPropertyNone (const GALGAS_lstring & inAssociatedValue0
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selfPropertyNone ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_prefsProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_prefsProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_prefsProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_prefsPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                const GALGAS_lstring & inAssociatedValue1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_prefsPropertyWithOption ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfControllerProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_selfControllerProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfControllerSecondaryProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                        const GALGAS_lstring & inAssociatedValue1,
                                                                                                        const GALGAS_lstring & inAssociatedValue2
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_selfControllerSecondaryProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfControllerAllProperties (const GALGAS_lstring & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                                                    const GALGAS_lstring & inAssociatedValue2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_selfControllerAllProperties ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfControllerOneProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                  const GALGAS_lstring & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_selfControllerOneProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_signatureProperty (const GALGAS_location & inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_signatureProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_signatureProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_versionProperty (const GALGAS_location & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_versionProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_versionProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_versionShouldChangeProperty (const GALGAS_location & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_versionShouldChangeProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_superProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                      const GALGAS_lstring & inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_superProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_superProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_rootProperty (GALGAS_lstring & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST rootProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_rootProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_rootPropertyWithOption (GALGAS_lstring & outAssociatedValue0,
                                                                  GALGAS_lstring & outAssociatedValue1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootPropertyWithOption) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST rootPropertyWithOption invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_rootPropertyRelationship (GALGAS_lstring & outAssociatedValue0,
                                                                    GALGAS_lstring & outAssociatedValue1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootPropertyRelationship) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST rootPropertyRelationship invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_rootPropertyNone (GALGAS_lstring & outAssociatedValue0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootPropertyNone) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST rootPropertyNone invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_selfWithoutProperty (GALGAS_location & outAssociatedValue0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfWithoutProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfWithoutProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_selfProperty (GALGAS_lstring & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_selfPropertyWithOption (GALGAS_lstring & outAssociatedValue0,
                                                                  GALGAS_lstring & outAssociatedValue1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfPropertyWithOption) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfPropertyWithOption invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_selfPropertyArray (GALGAS_lstring & outAssociatedValue0,
                                                             GALGAS_lstring & outAssociatedValue1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfPropertyArray) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfPropertyArray invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_selfPropertyObject (GALGAS_lstring & outAssociatedValue0,
                                                              GALGAS_lstring & outAssociatedValue1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfPropertyObject) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfPropertyObject invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_selfPropertyNone (GALGAS_lstring & outAssociatedValue0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfPropertyNone) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfPropertyNone invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_prefsProperty (GALGAS_lstring & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_prefsProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST prefsProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_prefsProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_prefsPropertyWithOption (GALGAS_lstring & outAssociatedValue0,
                                                                   GALGAS_lstring & outAssociatedValue1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_prefsPropertyWithOption) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST prefsPropertyWithOption invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * ptr = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_selfControllerProperty (GALGAS_lstring & outAssociatedValue0,
                                                                  GALGAS_lstring & outAssociatedValue1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfControllerProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfControllerProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_selfControllerSecondaryProperty (GALGAS_lstring & outAssociatedValue0,
                                                                           GALGAS_lstring & outAssociatedValue1,
                                                                           GALGAS_lstring & outAssociatedValue2,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfControllerSecondaryProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfControllerSecondaryProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_selfControllerAllProperties (GALGAS_lstring & outAssociatedValue0,
                                                                       GALGAS_lstring & outAssociatedValue1,
                                                                       GALGAS_lstring & outAssociatedValue2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfControllerAllProperties) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfControllerAllProperties invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_selfControllerOneProperty (GALGAS_lstring & outAssociatedValue0,
                                                                     GALGAS_lstring & outAssociatedValue1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfControllerOneProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfControllerOneProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_signatureProperty (GALGAS_location & outAssociatedValue0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_signatureProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST signatureProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_signatureProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_signatureProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_versionProperty (GALGAS_location & outAssociatedValue0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_versionProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST versionProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_versionProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_versionProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_versionShouldChangeProperty (GALGAS_location & outAssociatedValue0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_versionShouldChangeProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST versionShouldChangeProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::method_superProperty (GALGAS_lstring & outAssociatedValue0,
                                                         GALGAS_lstring & outAssociatedValue1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_superProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST superProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_superProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_observablePropertyAST [21] = {
  "(not built)",
  "rootProperty",
  "rootPropertyWithOption",
  "rootPropertyRelationship",
  "rootPropertyNone",
  "selfWithoutProperty",
  "selfProperty",
  "selfPropertyWithOption",
  "selfPropertyArray",
  "selfPropertyObject",
  "selfPropertyNone",
  "prefsProperty",
  "prefsPropertyWithOption",
  "selfControllerProperty",
  "selfControllerSecondaryProperty",
  "selfControllerAllProperties",
  "selfControllerOneProperty",
  "signatureProperty",
  "versionProperty",
  "versionShouldChangeProperty",
  "superProperty"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootPropertyWithOption == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootPropertyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootPropertyRelationship == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootPropertyNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootPropertyNone == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfWithoutProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfWithoutProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfPropertyWithOption == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfPropertyArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfPropertyArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfPropertyObject (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfPropertyObject == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfPropertyNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfPropertyNone == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isPrefsProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefsProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isPrefsPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefsPropertyWithOption == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfControllerProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfControllerProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfControllerSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfControllerSecondaryProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfControllerAllProperties (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfControllerAllProperties == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfControllerOneProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfControllerOneProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSignatureProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_signatureProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isVersionProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_versionProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isVersionShouldChangeProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_versionShouldChangeProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_observablePropertyAST::getter_isSuperProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_superProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @observablePropertyAST: " << gEnumNameArrayFor_observablePropertyAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_observablePropertyAST::objectCompare (const GALGAS_observablePropertyAST & inOperand) const {
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
//@observablePropertyAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyAST ("observablePropertyAST",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  const GALGAS_observablePropertyAST * p = (const GALGAS_observablePropertyAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@observablePropertyList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_observablePropertyList : public cCollectionElement {
  public : GALGAS_observablePropertyList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_observablePropertyList (const GALGAS_observablePropertyAST & in_mObservableProperty
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_observablePropertyList (const GALGAS_observablePropertyList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_observablePropertyList::cCollectionElement_observablePropertyList (const GALGAS_observablePropertyAST & in_mObservableProperty
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mObservableProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_observablePropertyList::cCollectionElement_observablePropertyList (const GALGAS_observablePropertyList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mObservableProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_observablePropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_observablePropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_observablePropertyList (mObject.mProperty_mObservableProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_observablePropertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservableProperty" ":" ;
  mObject.mProperty_mObservableProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_observablePropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_observablePropertyList * operand = (cCollectionElement_observablePropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_observablePropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList::GALGAS_observablePropertyList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList::GALGAS_observablePropertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_observablePropertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_observablePropertyList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_observablePropertyList::constructor_listWithValue (const GALGAS_observablePropertyAST & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_observablePropertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_observablePropertyList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_observablePropertyAST & in_mObservableProperty
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_observablePropertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_observablePropertyList (in_mObservableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::addAssign_operation (const GALGAS_observablePropertyAST & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_observablePropertyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::setter_append (GALGAS_observablePropertyList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_observablePropertyList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::setter_insertAtIndex (const GALGAS_observablePropertyAST inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_observablePropertyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::setter_removeAtIndex (GALGAS_observablePropertyAST & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
      outOperand0 = p->mObject.mProperty_mObservableProperty ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::setter_popFirst (GALGAS_observablePropertyAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    outOperand0 = p->mObject.mProperty_mObservableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::setter_popLast (GALGAS_observablePropertyAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    outOperand0 = p->mObject.mProperty_mObservableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::method_first (GALGAS_observablePropertyAST & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    outOperand0 = p->mObject.mProperty_mObservableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::method_last (GALGAS_observablePropertyAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    outOperand0 = p->mObject.mProperty_mObservableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_observablePropertyList::add_operation (const GALGAS_observablePropertyList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_observablePropertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result = GALGAS_observablePropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_observablePropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result = GALGAS_observablePropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_observablePropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result = GALGAS_observablePropertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::plusAssign_operation (const GALGAS_observablePropertyList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList::setter_setMObservablePropertyAtIndex (GALGAS_observablePropertyAST inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObservableProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyList::getter_mObservablePropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
  GALGAS_observablePropertyAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    result = p->mObject.mProperty_mObservableProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_observablePropertyList::cEnumerator_observablePropertyList (const GALGAS_observablePropertyList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element cEnumerator_observablePropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_observablePropertyList * p = (const cCollectionElement_observablePropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST cEnumerator_observablePropertyList::current_mObservableProperty (LOCATION_ARGS) const {
  const cCollectionElement_observablePropertyList * p = (const cCollectionElement_observablePropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
  return p->mObject.mProperty_mObservableProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@observablePropertyList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyList ("observablePropertyList",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_observablePropertyList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyList result ;
  const GALGAS_observablePropertyList * p = (const GALGAS_observablePropertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@observablePropertyAST modelStringForSelf'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_modelStringForSelf (const GALGAS_observablePropertyAST & inObject,
                                                  const GALGAS_string & constinArgument_inSelf,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_6750 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6750->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 178)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 178)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 178)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_6864 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6864->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 180)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 180)).add_operation (GALGAS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 180)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_7041 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7041->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_7041->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 182)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 182)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 182)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 182)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 182)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 182)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_7177 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_7177->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 184)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("observable-property.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 184)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 184)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("ebObjectIndex"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 186)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_7349 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7349->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 188)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 188)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_7510 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7510->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_7510->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 190)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 190)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 190)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 190)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 190)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_7649 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7649->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_7649->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 192)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 192)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_7819 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7819->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_7819->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 194)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 194)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 194)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 194)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_7917 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7917->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 196)).add_operation (GALGAS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 196)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_8018 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8018->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 198)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 198)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_8182 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8182->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_8182->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 200)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 200)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 200)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 200)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 200)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_8337 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_8337->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8337->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 202)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 202)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 202)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 202)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_8576 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_8576->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8576->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_8576->mAssociatedValue2 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 204)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 204)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 204)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 204)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 204)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 204)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 204)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_8738 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_8738->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8738->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 206)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 206)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 206)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 206)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_8896 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_8896->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8896->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 208)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 208)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 208)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 208)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("self.signatureObserver_property") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("self.versionObserver_property") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("self.versionShouldChangeObserver_property") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_9256 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9256->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 216)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 216)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@observablePropertyAST modelStringFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_modelStringFunctionArgument (const GALGAS_observablePropertyAST & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_9569 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9569->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 225)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_9669 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9669->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 227)).add_operation (GALGAS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 227)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_9803 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9803->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_9803->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 229)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 229)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 229)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_9965 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_9965->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_9965->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("observable-property.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 231)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 231)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 231)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = GALGAS_string ("self_ebObjectIndex") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_10120 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10120->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 235)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_10254 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10254->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_10254->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 237)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 237)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 237)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_10401 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10401->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_10401->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 239)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 239)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 239)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_10549 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10549->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_10549->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 241)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 241)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 241)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_10648 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10648->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 243)).add_operation (GALGAS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 243)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_10735 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10735->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 245)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_10871 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10871->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_10871->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 247)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 247)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 247)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_11013 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_11013->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11013->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 249)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 249)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 249)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_11225 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_11225->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11225->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_11225->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 251)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 251)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 251)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 251)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 251)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_11437 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_11437->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11437->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_11437->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 253)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 253)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 253)).add_operation (GALGAS_string ("_all_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 253)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 253)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_11597 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_11597->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11597->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 255)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 255)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 255)).add_operation (GALGAS_string ("_all_<<2>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 255)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("self_signatureObserver") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("self_versionObserver") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("self_versionShouldChangeObserver") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_11964 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_superEntityName = extractPtr_11964->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11964->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_superEntityName.getter_string (SOURCE_FILE ("observable-property.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 263)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 263)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 263)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@observablePropertyAST needs_unwSelf'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_needs_5F_unwSelf (const GALGAS_observablePropertyAST & inObject,
                                              const GALGAS_bool & constinArgument_inPreferences,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas", 282)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas", 284)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas", 286)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas", 288)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas", 290)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@observablePropertyAST location'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location extensionGetter_location (const GALGAS_observablePropertyAST & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_13678 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13678->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_13766 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13766->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_13858 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_13858->mAssociatedValue1 ;
      result_outResult = extractedValue_optionName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_13956 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13956->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty * extractPtr_14031 = (const cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_issueLocation = extractPtr_14031->mAssociatedValue0 ;
      result_outResult = extractedValue_issueLocation ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_14115 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14115->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_14211 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14211->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_14302 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14302->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_14394 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14394->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_14482 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14482->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_14567 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14567->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_14664 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14664->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_14760 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14760->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_14885 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_14885->mAssociatedValue2 ;
      result_outResult = extractedValue_secondaryPropertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_15006 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_15006->mAssociatedValue2 ;
      result_outResult = extractedValue_secondaryPropertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_15105 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_15105->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_signatureProperty * extractPtr_15178 = (const cEnumAssociatedValues_observablePropertyAST_signatureProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_15178->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_versionProperty * extractPtr_15249 = (const cEnumAssociatedValues_observablePropertyAST_versionProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_15249->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * extractPtr_15332 = (const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_15332->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_15419 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_15419->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@observablePropertyAST analyzeObservableProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeObservableProperty (const GALGAS_observablePropertyAST inObject,
                                                const GALGAS_propertyMap constinArgument_inRootPropertyMap,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                GALGAS_propertyKind & outArgument_outKind,
                                                GALGAS_string & outArgument_outSwiftTypeStringForTransientFunctionArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outKind.drop () ; // Release 'out' argument
  outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release 'out' argument
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      GALGAS_typeKind var_type_15885 = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 372)) ;
      outArgument_outKind = GALGAS_propertyKind::constructor_property (var_type_15885, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 373))  COMMA_SOURCE_FILE ("observable-property.galgas", 373)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_15885, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 374)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      GALGAS_typeKind var_type_16108 = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 376)) ;
      outArgument_outKind = GALGAS_propertyKind::constructor_property (var_type_16108, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 377))  COMMA_SOURCE_FILE ("observable-property.galgas", 377)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_16108, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 378)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      GALGAS_typeKind var_type_16336 = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 380)) ;
      outArgument_outKind = GALGAS_propertyKind::constructor_property (var_type_16336, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 381))  COMMA_SOURCE_FILE ("observable-property.galgas", 381)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_16336, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 382)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_16727 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_16727->mAssociatedValue0 ;
      GALGAS_actionMap joker_16642_2 ; // Joker input parameter
      GALGAS_bool joker_16642_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_16642_2, joker_16642_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 384)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 389)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_17537 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_17537->mAssociatedValue0 ;
      GALGAS_propertyKind var_kind_16854 ;
      GALGAS_actionMap joker_16862_2 ; // Joker input parameter
      GALGAS_bool joker_16862_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_relationshipName, var_kind_16854, joker_16862_2, joker_16862_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 391)) ;
      switch (var_kind_16854.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 398)), GALGAS_string ("a property does not accept 'none'"), fixItArray1  COMMA_SOURCE_FILE ("observable-property.galgas", 398)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 400)), GALGAS_string ("an array property does not accept 'none'"), fixItArray2  COMMA_SOURCE_FILE ("observable-property.galgas", 400)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 402)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 402))  COMMA_SOURCE_FILE ("observable-property.galgas", 402)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 404)), GALGAS_string ("an array controller does not accept 'none'"), fixItArray3  COMMA_SOURCE_FILE ("observable-property.galgas", 404)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 406)), GALGAS_string ("a selection controller does not accept 'none'"), fixItArray4  COMMA_SOURCE_FILE ("observable-property.galgas", 406)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 408)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_18809 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_18809->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_18809->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_17682 ;
      GALGAS_actionMap joker_17690_2 ; // Joker input parameter
      GALGAS_bool joker_17690_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_17682, joker_17690_2, joker_17690_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 410)) ;
      switch (var_kind_17682.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 417)), GALGAS_string ("a property does not accept any option"), fixItArray5  COMMA_SOURCE_FILE ("observable-property.galgas", 417)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_6) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 420)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 420))  COMMA_SOURCE_FILE ("observable-property.galgas", 420)) ;
            }
          }
          if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 422)), GALGAS_string ("unknown option (accepted : 'count')"), fixItArray7  COMMA_SOURCE_FILE ("observable-property.galgas", 422)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 425)), GALGAS_string ("a toOne property does not accept any option"), fixItArray8  COMMA_SOURCE_FILE ("observable-property.galgas", 425)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_9) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 428)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 428))  COMMA_SOURCE_FILE ("observable-property.galgas", 428)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 430)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 430))  COMMA_SOURCE_FILE ("observable-property.galgas", 430)) ;
              }
            }
            if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 432)), GALGAS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray11  COMMA_SOURCE_FILE ("observable-property.galgas", 432)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 435)), GALGAS_string ("a selection controller does not accept any option"), fixItArray12  COMMA_SOURCE_FILE ("observable-property.galgas", 435)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 437)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_19834 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_19834->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_19834->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_18985 ;
      GALGAS_actionMap joker_18993_2 ; // Joker input parameter
      GALGAS_bool joker_18993_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_relationshipName, var_kind_18985, joker_18993_2, joker_18993_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 439)) ;
      switch (var_kind_18985.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 446)), GALGAS_string ("a property does not accept 'all'"), fixItArray13  COMMA_SOURCE_FILE ("observable-property.galgas", 446)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_19378 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_18985.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_19378->mAssociatedValue0 ;
          GALGAS_propertyMap var_observablePropertyMap_19275 ;
          GALGAS_classKind joker_19247 ; // Joker input parameter
          GALGAS_actionMap joker_19277_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_19277_1 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (extractedValue_typeName.getter_string (SOURCE_FILE ("observable-property.galgas", 448)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("observable-property.galgas", 448)), joker_19247, var_observablePropertyMap_19275, joker_19277_2, joker_19277_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 448)) ;
          GALGAS_actionMap joker_19368_2 ; // Joker input parameter
          GALGAS_bool joker_19368_1 ; // Joker input parameter
          var_observablePropertyMap_19275.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_19368_2, joker_19368_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 449)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 455)), GALGAS_string ("a toOne property does not accept 'all'"), fixItArray14  COMMA_SOURCE_FILE ("observable-property.galgas", 455)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 457)), GALGAS_string ("an array controller does not accept 'all'"), fixItArray15  COMMA_SOURCE_FILE ("observable-property.galgas", 457)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 459)), GALGAS_string ("an array controller does not accept 'all'"), fixItArray16  COMMA_SOURCE_FILE ("observable-property.galgas", 459)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_kind_18985, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 461)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 461)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 461)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 461)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_20641 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_20641->mAssociatedValue0 ;
      GALGAS_actionMap joker_19962_2 ; // Joker input parameter
      GALGAS_bool joker_19962_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_19962_2, joker_19962_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 463)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 470)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[EBManagedObject_alloc_index_protocol]") ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("EBManagedObject_alloc_index_protocol\?") ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 476)), GALGAS_string ("an array controller cannot be observed"), fixItArray17  COMMA_SOURCE_FILE ("observable-property.galgas", 476)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 478)), GALGAS_string ("a selection controller cannot be observed"), fixItArray18  COMMA_SOURCE_FILE ("observable-property.galgas", 478)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("Int") ;
      outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 482)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 482))  COMMA_SOURCE_FILE ("observable-property.galgas", 482)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_22086 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_22086->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_22086->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_20978 ;
      GALGAS_actionMap joker_20986_2 ; // Joker input parameter
      GALGAS_bool joker_20986_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_20978, joker_20986_2, joker_20986_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 484)) ;
      switch (var_kind_20978.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 491)), GALGAS_string ("an atomic property accepts no option"), fixItArray19  COMMA_SOURCE_FILE ("observable-property.galgas", 491)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 494)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 494))  COMMA_SOURCE_FILE ("observable-property.galgas", 494)) ;
            }
          }
          if (kBoolFalse == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 496)), GALGAS_string ("unknown option (accepted : 'count')"), fixItArray21  COMMA_SOURCE_FILE ("observable-property.galgas", 496)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 499)), GALGAS_string ("a toOne property accepts no option"), fixItArray22  COMMA_SOURCE_FILE ("observable-property.galgas", 499)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          enumGalgasBool test_23 = kBoolTrue ;
          if (kBoolTrue == test_23) {
            test_23 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_23) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 502)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 502))  COMMA_SOURCE_FILE ("observable-property.galgas", 502)) ;
            }
          }
          if (kBoolFalse == test_23) {
            enumGalgasBool test_24 = kBoolTrue ;
            if (kBoolTrue == test_24) {
              test_24 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
              if (kBoolTrue == test_24) {
                outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 504)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 504))  COMMA_SOURCE_FILE ("observable-property.galgas", 504)) ;
              }
            }
            if (kBoolFalse == test_24) {
              TC_Array <C_FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 506)), GALGAS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray25  COMMA_SOURCE_FILE ("observable-property.galgas", 506)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 509)), GALGAS_string ("a selection controller accepts no option"), fixItArray26  COMMA_SOURCE_FILE ("observable-property.galgas", 509)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 511)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_23069 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_23069->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_23069->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_22260 ;
      GALGAS_actionMap joker_22268_2 ; // Joker input parameter
      GALGAS_bool joker_22268_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_22260, joker_22268_2, joker_22268_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 513)) ;
      switch (var_kind_22260.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 520)), GALGAS_string ("an atomic property accepts no option"), fixItArray27  COMMA_SOURCE_FILE ("observable-property.galgas", 520)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_22620 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_22260.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_22620->mAssociatedValue0 ;
          GALGAS_propertyMap var_observablePropertyMap_22510 ;
          GALGAS_classKind joker_22482 ; // Joker input parameter
          GALGAS_actionMap joker_22512_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_22512_1 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_22482, var_observablePropertyMap_22510, joker_22512_2, joker_22512_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 522)) ;
          GALGAS_actionMap joker_22610_2 ; // Joker input parameter
          GALGAS_bool joker_22610_1 ; // Joker input parameter
          var_observablePropertyMap_22510.method_searchKey (extractedValue_elementPropertyName, outArgument_outKind, joker_22610_2, joker_22610_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 523)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 529)), GALGAS_string ("a toOne property accepts no option"), fixItArray28  COMMA_SOURCE_FILE ("observable-property.galgas", 529)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 531)), GALGAS_string ("an array controller accepts no option"), fixItArray29  COMMA_SOURCE_FILE ("observable-property.galgas", 531)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 533)), GALGAS_string ("a selection controller accepts no option"), fixItArray30  COMMA_SOURCE_FILE ("observable-property.galgas", 533)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_kind_22260, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 535)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 535)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 536)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 536)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_24031 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_24031->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_24031->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_23244 ;
      GALGAS_actionMap joker_23252_2 ; // Joker input parameter
      GALGAS_bool joker_23252_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_23244, joker_23252_2, joker_23252_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 538)) ;
      switch (var_kind_23244.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 545)), GALGAS_string ("an atomic property does not accept 'one'"), fixItArray31  COMMA_SOURCE_FILE ("observable-property.galgas", 545)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray32 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 547)), GALGAS_string ("a toOne property does not accept 'one'"), fixItArray32  COMMA_SOURCE_FILE ("observable-property.galgas", 547)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          const cEnumAssociatedValues_propertyKind_toOne * extractPtr_23708 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_kind_23244.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_23708->mAssociatedValue0 ;
          GALGAS_propertyMap var_observablePropertyMap_23598 ;
          GALGAS_classKind joker_23570 ; // Joker input parameter
          GALGAS_actionMap joker_23600_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_23600_1 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_23570, var_observablePropertyMap_23598, joker_23600_2, joker_23600_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 549)) ;
          GALGAS_actionMap joker_23698_2 ; // Joker input parameter
          GALGAS_bool joker_23698_1 ; // Joker input parameter
          var_observablePropertyMap_23598.method_searchKey (extractedValue_elementPropertyName, outArgument_outKind, joker_23698_2, joker_23698_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 550)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 556)), GALGAS_string ("an array controller does not accept 'one'"), fixItArray33  COMMA_SOURCE_FILE ("observable-property.galgas", 556)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 558)), GALGAS_string ("a selection controller does not accept 'one'"), fixItArray34  COMMA_SOURCE_FILE ("observable-property.galgas", 558)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 560)).add_operation (GALGAS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 560)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_24846 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_24846->mAssociatedValue0 ;
      GALGAS_propertyKind var_kind_24172 ;
      GALGAS_actionMap joker_24180_2 ; // Joker input parameter
      GALGAS_bool joker_24180_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_24172, joker_24180_2, joker_24180_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 562)) ;
      switch (var_kind_24172.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray35 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 569)), GALGAS_string ("an atomic property does not accept 'none'"), fixItArray35  COMMA_SOURCE_FILE ("observable-property.galgas", 569)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 571)), GALGAS_string ("a toOne property does not accept 'none'"), fixItArray36  COMMA_SOURCE_FILE ("observable-property.galgas", 571)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 573)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 573))  COMMA_SOURCE_FILE ("observable-property.galgas", 573)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray37 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 575)), GALGAS_string ("an array controller does not accept 'none'"), fixItArray37  COMMA_SOURCE_FILE ("observable-property.galgas", 575)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 577)), GALGAS_string ("a selection controller does not accept 'none'"), fixItArray38  COMMA_SOURCE_FILE ("observable-property.galgas", 577)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 579)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_25174 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_25174->mAssociatedValue0 ;
      GALGAS_propertyMap var_observablePropertyMap_25004 ;
      GALGAS_classKind joker_24976 ; // Joker input parameter
      GALGAS_actionMap joker_25006_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_25006_1 ; // Joker input parameter
      constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 581)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("observable-property.galgas", 581))  COMMA_SOURCE_FILE ("observable-property.galgas", 581)), joker_24976, var_observablePropertyMap_25004, joker_25006_2, joker_25006_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 581)) ;
      GALGAS_actionMap joker_25089_2 ; // Joker input parameter
      GALGAS_bool joker_25089_1 ; // Joker input parameter
      var_observablePropertyMap_25004.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_25089_2, joker_25089_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 582)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 587)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_26414 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_26414->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_26414->mAssociatedValue1 ;
      GALGAS_propertyMap var_observablePropertyMap_25362 ;
      GALGAS_classKind joker_25334 ; // Joker input parameter
      GALGAS_actionMap joker_25364_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_25364_1 ; // Joker input parameter
      constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 589)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("observable-property.galgas", 589))  COMMA_SOURCE_FILE ("observable-property.galgas", 589)), joker_25334, var_observablePropertyMap_25362, joker_25364_2, joker_25364_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 589)) ;
      GALGAS_propertyKind var_kind_25440 ;
      GALGAS_actionMap joker_25448_2 ; // Joker input parameter
      GALGAS_bool joker_25448_1 ; // Joker input parameter
      var_observablePropertyMap_25362.method_searchKey (extractedValue_propertyName, var_kind_25440, joker_25448_2, joker_25448_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 590)) ;
      switch (var_kind_25440.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 597)), GALGAS_string ("a property does not accept any option"), fixItArray39  COMMA_SOURCE_FILE ("observable-property.galgas", 597)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 599)), GALGAS_string ("a toMany property does not accept any option"), fixItArray40  COMMA_SOURCE_FILE ("observable-property.galgas", 599)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 601)), GALGAS_string ("a toOne property does not accept any option"), fixItArray41  COMMA_SOURCE_FILE ("observable-property.galgas", 601)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          enumGalgasBool test_42 = kBoolTrue ;
          if (kBoolTrue == test_42) {
            test_42 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_42) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 604)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 604))  COMMA_SOURCE_FILE ("observable-property.galgas", 604)) ;
            }
          }
          if (kBoolFalse == test_42) {
            enumGalgasBool test_43 = kBoolTrue ;
            if (kBoolTrue == test_43) {
              test_43 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
              if (kBoolTrue == test_43) {
                outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 606)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 606))  COMMA_SOURCE_FILE ("observable-property.galgas", 606)) ;
              }
            }
            if (kBoolFalse == test_43) {
              TC_Array <C_FixItDescription> fixItArray44 ;
              inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 608)), GALGAS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray44  COMMA_SOURCE_FILE ("observable-property.galgas", 608)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray45 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 611)), GALGAS_string ("a selection controller does not accept any option"), fixItArray45  COMMA_SOURCE_FILE ("observable-property.galgas", 611)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 613)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_27843 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_27843->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_27843->mAssociatedValue1 ;
      GALGAS_propertyKind var_propertyKind_26593 ;
      GALGAS_actionMap joker_26601_2 ; // Joker input parameter
      GALGAS_bool joker_26601_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_controllerName, var_propertyKind_26593, joker_26601_2, joker_26601_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 615)) ;
      switch (var_propertyKind_26593.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 622)), GALGAS_string ("a property does not accept any option"), fixItArray46  COMMA_SOURCE_FILE ("observable-property.galgas", 622)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray47 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 624)), GALGAS_string ("a toMany property does not accept any option"), fixItArray47  COMMA_SOURCE_FILE ("observable-property.galgas", 624)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray48 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 626)), GALGAS_string ("a toOne property does not accept any option"), fixItArray48  COMMA_SOURCE_FILE ("observable-property.galgas", 626)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_27482 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_propertyKind_26593.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_27482->mAssociatedValue0 ;
          const GALGAS_bool extractedValue_graphic = extractPtr_27482->mAssociatedValue1 ;
          enumGalgasBool test_49 = kBoolTrue ;
          if (kBoolTrue == test_49) {
            GALGAS_bool test_50 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("sortedArray"))) ;
            if (kBoolTrue != test_50.boolEnum ()) {
              test_50 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))) ;
            }
            test_49 = test_50.boolEnum () ;
            if (kBoolTrue == test_49) {
              outArgument_outKind = GALGAS_propertyKind::constructor_toMany (extractedValue_typeName, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 631)), extractedValue_graphic, GALGAS_toManyRelationshipOptionAST::constructor_none (SOURCE_FILE ("observable-property.galgas", 633))  COMMA_SOURCE_FILE ("observable-property.galgas", 629)) ;
            }
          }
          if (kBoolFalse == test_49) {
            TC_Array <C_FixItDescription> fixItArray51 ;
            appendFixItActions (fixItArray51, kFixItReplace, GALGAS_string ("sortedArray")) ;
            appendFixItActions (fixItArray51, kFixItReplace, GALGAS_string ("selectedArray")) ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 636)), GALGAS_string ("unknown option (accepted : 'sortedArray' or 'selectedArray')"), fixItArray51  COMMA_SOURCE_FILE ("observable-property.galgas", 636)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_27758 = (const cEnumAssociatedValues_propertyKind_selectionController *) (var_propertyKind_26593.unsafePointer ()) ;
          const GALGAS_string extractedValue_entityName = extractPtr_27758->mAssociatedValue0 ;
          GALGAS_propertyMap var_observablePropertyMap_27671 ;
          GALGAS_classKind joker_27635 ; // Joker input parameter
          GALGAS_actionMap joker_27681_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_27681_1 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (extractedValue_entityName, extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("observable-property.galgas", 643)), joker_27635, var_observablePropertyMap_27671, joker_27681_2, joker_27681_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 642)) ;
          GALGAS_actionMap joker_27755_2 ; // Joker input parameter
          GALGAS_bool joker_27755_1 ; // Joker input parameter
          var_observablePropertyMap_27671.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_27755_2, joker_27755_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 648)) ;
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 650)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_28616 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_28616->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_28616->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_28616->mAssociatedValue2 ;
      GALGAS_propertyKind joker_28020_3 ; // Joker input parameter
      GALGAS_actionMap joker_28020_2 ; // Joker input parameter
      GALGAS_bool joker_28020_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_controllerName, joker_28020_3, joker_28020_2, joker_28020_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 652)) ;
      enumGalgasBool test_52 = kBoolTrue ;
      if (kBoolTrue == test_52) {
        GALGAS_bool test_53 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("sortedArray"))) ;
        if (kBoolTrue == test_53.boolEnum ()) {
          test_53 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("count"))) ;
        }
        test_52 = test_53.boolEnum () ;
        if (kBoolTrue == test_52) {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 654)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 654))  COMMA_SOURCE_FILE ("observable-property.galgas", 654)) ;
        }
      }
      if (kBoolFalse == test_52) {
        enumGalgasBool test_54 = kBoolTrue ;
        if (kBoolTrue == test_54) {
          GALGAS_bool test_55 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))) ;
          if (kBoolTrue == test_55.boolEnum ()) {
            test_55 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("count"))) ;
          }
          test_54 = test_55.boolEnum () ;
          if (kBoolTrue == test_54) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 656)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 656))  COMMA_SOURCE_FILE ("observable-property.galgas", 656)) ;
          }
        }
        if (kBoolFalse == test_54) {
          TC_Array <C_FixItDescription> fixItArray56 ;
          appendFixItActions (fixItArray56, kFixItReplace, GALGAS_string ("sortedArray")) ;
          appendFixItActions (fixItArray56, kFixItReplace, GALGAS_string ("selectedArray")) ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 658)), GALGAS_string ("unknown option"), fixItArray56  COMMA_SOURCE_FILE ("observable-property.galgas", 658)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 660)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_29671 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_29671->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_29671->mAssociatedValue1 ;
      GALGAS_propertyKind var_propertyKind_28786 ;
      GALGAS_actionMap joker_28788_2 ; // Joker input parameter
      GALGAS_bool joker_28788_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_controllerName, var_propertyKind_28786, joker_28788_2, joker_28788_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 662)) ;
      GALGAS_string var_controllerTypeName_28822 = GALGAS_string::makeEmptyString () ;
      switch (var_propertyKind_28786.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 666)), GALGAS_string ("an array controller does not support 'one'"), fixItArray57  COMMA_SOURCE_FILE ("observable-property.galgas", 666)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray58 ;
          inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 668)), GALGAS_string ("a selection controller does not support 'one'"), fixItArray58  COMMA_SOURCE_FILE ("observable-property.galgas", 668)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray59 ;
          inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 670)), GALGAS_string ("a property does not support 'one'"), fixItArray59  COMMA_SOURCE_FILE ("observable-property.galgas", 670)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray60 ;
          inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 672)), GALGAS_string ("a toMany relationship does not support 'one'"), fixItArray60  COMMA_SOURCE_FILE ("observable-property.galgas", 672)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray61 ;
          inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 674)), GALGAS_string ("a toOne relationship does not support 'one'"), fixItArray61  COMMA_SOURCE_FILE ("observable-property.galgas", 674)) ;
        }
        break ;
      }
      GALGAS_propertyMap var_observablePropertyMap_29508 ;
      GALGAS_classKind joker_29474 ; // Joker input parameter
      GALGAS_actionMap joker_29516_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_29516_1 ; // Joker input parameter
      constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (var_controllerTypeName_28822, extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("observable-property.galgas", 677)), joker_29474, var_observablePropertyMap_29508, joker_29516_2, joker_29516_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 676)) ;
      GALGAS_actionMap joker_29585_2 ; // Joker input parameter
      GALGAS_bool joker_29585_1 ; // Joker input parameter
      var_observablePropertyMap_29508.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_29585_2, joker_29585_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 682)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = var_controllerTypeName_28822.add_operation (GALGAS_string ("\?<<8>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 683)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_31577 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_31577->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_31577->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_31577->mAssociatedValue2 ;
      GALGAS_propertyKind var_propertyKind_29874 ;
      GALGAS_actionMap joker_29876_2 ; // Joker input parameter
      GALGAS_bool joker_29876_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_controllerName, var_propertyKind_29874, joker_29876_2, joker_29876_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 685)) ;
      enumGalgasBool test_62 = kBoolTrue ;
      if (kBoolTrue == test_62) {
        test_62 = GALGAS_bool (kIsNotEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))).boolEnum () ;
        if (kBoolTrue == test_62) {
          TC_Array <C_FixItDescription> fixItArray63 ;
          appendFixItActions (fixItArray63, kFixItReplace, GALGAS_string ("selectedArray")) ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 687)), GALGAS_string ("unknown property"), fixItArray63  COMMA_SOURCE_FILE ("observable-property.galgas", 687)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_62) {
        outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 691)), GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas", 691))  COMMA_SOURCE_FILE ("observable-property.galgas", 691)) ;
        switch (var_propertyKind_29874.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray64 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 694)), GALGAS_string ("a property does not accept any option"), fixItArray64  COMMA_SOURCE_FILE ("observable-property.galgas", 694)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            TC_Array <C_FixItDescription> fixItArray65 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 698)), GALGAS_string ("a toMany property does not accept any option"), fixItArray65  COMMA_SOURCE_FILE ("observable-property.galgas", 698)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray66 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 702)), GALGAS_string ("a toOne property does not accept any option"), fixItArray66  COMMA_SOURCE_FILE ("observable-property.galgas", 702)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_31148 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_propertyKind_29874.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_typeName = extractPtr_31148->mAssociatedValue0 ;
            GALGAS_propertyMap var_observablePropertyMap_30938 ;
            GALGAS_classKind joker_30900 ; // Joker input parameter
            GALGAS_actionMap joker_30950_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_30950_1 ; // Joker input parameter
            constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (extractedValue_typeName.getter_string (SOURCE_FILE ("observable-property.galgas", 707)), extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("observable-property.galgas", 707)), joker_30900, var_observablePropertyMap_30938, joker_30950_2, joker_30950_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 706)) ;
            GALGAS_actionMap joker_31037_2 ; // Joker input parameter
            GALGAS_bool joker_31037_1 ; // Joker input parameter
            var_observablePropertyMap_30938.method_searchKey (extractedValue_secondaryPropertyName, outArgument_outKind, joker_31037_2, joker_31037_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 712)) ;
            outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("observable-property.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 713)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 713)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 713)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 713)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_31560 = (const cEnumAssociatedValues_propertyKind_selectionController *) (var_propertyKind_29874.unsafePointer ()) ;
            const GALGAS_string extractedValue_entityName = extractPtr_31560->mAssociatedValue0 ;
            GALGAS_propertyMap var_observablePropertyMap_31347 ;
            GALGAS_classKind joker_31309 ; // Joker input parameter
            GALGAS_actionMap joker_31359_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_31359_1 ; // Joker input parameter
            constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (extractedValue_entityName, extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("observable-property.galgas", 716)), joker_31309, var_observablePropertyMap_31347, joker_31359_2, joker_31359_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 715)) ;
            GALGAS_actionMap joker_31446_2 ; // Joker input parameter
            GALGAS_bool joker_31446_1 ; // Joker input parameter
            var_observablePropertyMap_31347.method_searchKey (extractedValue_secondaryPropertyName, outArgument_outKind, joker_31446_2, joker_31446_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 721)) ;
            outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extractedValue_entityName, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 722)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 722)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 722)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 722)) ;
          }
          break ;
        }
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_32387 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_32387->mAssociatedValue1 ;
      GALGAS_actionMap joker_31708_2 ; // Joker input parameter
      GALGAS_bool joker_31708_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_31708_2, joker_31708_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 726)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 733)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[EBManagedObject_alloc_index_protocol]") ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("EBManagedObject_alloc_index_protocol\?") ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray67 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 739)), GALGAS_string ("an array controller cannot be observed"), fixItArray67  COMMA_SOURCE_FILE ("observable-property.galgas", 739)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray68 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 741)), GALGAS_string ("a selection controller cannot be observed"), fixItArray68  COMMA_SOURCE_FILE ("observable-property.galgas", 741)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_propertyGeneration::objectCompare (const GALGAS_propertyGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGeneration::GALGAS_propertyGeneration (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGeneration::GALGAS_propertyGeneration (const cPtr_propertyGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_propertyGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_propertyGeneration::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_propertyGeneration * p = (const cPtr_propertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyGeneration) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_propertyGeneration::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGeneration::setter_setMPropertyName (GALGAS_string inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_propertyGeneration * p = (cPtr_propertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyGeneration) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_propertyGeneration::setter_setMPropertyName (GALGAS_string inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @propertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_propertyGeneration::cPtr_propertyGeneration (const GALGAS_string & in_mPropertyName
                                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mPropertyName (in_mPropertyName) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@propertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGeneration ("propertyGeneration",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGeneration GALGAS_propertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyGeneration result ;
  const GALGAS_propertyGeneration * p = (const GALGAS_propertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@transientDependencyListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_transientDependencyListForGeneration : public cCollectionElement {
  public : GALGAS_transientDependencyListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_transientDependencyListForGeneration (const GALGAS_observablePropertyAST & in_mDependency,
                                                                    const GALGAS_string & in_mFunctionArgumentName,
                                                                    const GALGAS_string & in_mFunctionArgumentTypeString
                                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_transientDependencyListForGeneration (const GALGAS_transientDependencyListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_transientDependencyListForGeneration::cCollectionElement_transientDependencyListForGeneration (const GALGAS_observablePropertyAST & in_mDependency,
                                                                                                                  const GALGAS_string & in_mFunctionArgumentName,
                                                                                                                  const GALGAS_string & in_mFunctionArgumentTypeString
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDependency, in_mFunctionArgumentName, in_mFunctionArgumentTypeString) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_transientDependencyListForGeneration::cCollectionElement_transientDependencyListForGeneration (const GALGAS_transientDependencyListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDependency, inElement.mProperty_mFunctionArgumentName, inElement.mProperty_mFunctionArgumentTypeString) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_transientDependencyListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientDependencyListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_transientDependencyListForGeneration (mObject.mProperty_mDependency, mObject.mProperty_mFunctionArgumentName, mObject.mProperty_mFunctionArgumentTypeString COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_transientDependencyListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependency" ":" ;
  mObject.mProperty_mDependency.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionArgumentName" ":" ;
  mObject.mProperty_mFunctionArgumentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionArgumentTypeString" ":" ;
  mObject.mProperty_mFunctionArgumentTypeString.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_transientDependencyListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_transientDependencyListForGeneration * operand = (cCollectionElement_transientDependencyListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_transientDependencyListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration::GALGAS_transientDependencyListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration::GALGAS_transientDependencyListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientDependencyListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::constructor_listWithValue (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_transientDependencyListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_transientDependencyListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_observablePropertyAST & in_mDependency,
                                                                             const GALGAS_string & in_mFunctionArgumentName,
                                                                             const GALGAS_string & in_mFunctionArgumentTypeString
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDependencyListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_transientDependencyListForGeneration (in_mDependency,
                                                                          in_mFunctionArgumentName,
                                                                          in_mFunctionArgumentTypeString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::addAssign_operation (const GALGAS_observablePropertyAST & inOperand0,
                                                                       const GALGAS_string & inOperand1,
                                                                       const GALGAS_string & inOperand2
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientDependencyListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::setter_append (GALGAS_transientDependencyListForGeneration_2D_element inElement,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientDependencyListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::setter_insertAtIndex (const GALGAS_observablePropertyAST inOperand0,
                                                                        const GALGAS_string inOperand1,
                                                                        const GALGAS_string inOperand2,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientDependencyListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::setter_removeAtIndex (GALGAS_observablePropertyAST & outOperand0,
                                                                        GALGAS_string & outOperand1,
                                                                        GALGAS_string & outOperand2,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mDependency ;
      outOperand1 = p->mObject.mProperty_mFunctionArgumentName ;
      outOperand2 = p->mObject.mProperty_mFunctionArgumentTypeString ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::setter_popFirst (GALGAS_observablePropertyAST & outOperand0,
                                                                   GALGAS_string & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDependency ;
    outOperand1 = p->mObject.mProperty_mFunctionArgumentName ;
    outOperand2 = p->mObject.mProperty_mFunctionArgumentTypeString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::setter_popLast (GALGAS_observablePropertyAST & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDependency ;
    outOperand1 = p->mObject.mProperty_mFunctionArgumentName ;
    outOperand2 = p->mObject.mProperty_mFunctionArgumentTypeString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::method_first (GALGAS_observablePropertyAST & outOperand0,
                                                                GALGAS_string & outOperand1,
                                                                GALGAS_string & outOperand2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDependency ;
    outOperand1 = p->mObject.mProperty_mFunctionArgumentName ;
    outOperand2 = p->mObject.mProperty_mFunctionArgumentTypeString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::method_last (GALGAS_observablePropertyAST & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDependency ;
    outOperand1 = p->mObject.mProperty_mFunctionArgumentName ;
    outOperand2 = p->mObject.mProperty_mFunctionArgumentTypeString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::add_operation (const GALGAS_transientDependencyListForGeneration & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result = GALGAS_transientDependencyListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result = GALGAS_transientDependencyListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result = GALGAS_transientDependencyListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::plusAssign_operation (const GALGAS_transientDependencyListForGeneration inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::setter_setMDependencyAtIndex (GALGAS_observablePropertyAST inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependency = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_transientDependencyListForGeneration::getter_mDependencyAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    result = p->mObject.mProperty_mDependency ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::setter_setMFunctionArgumentNameAtIndex (GALGAS_string inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientDependencyListForGeneration::getter_mFunctionArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    result = p->mObject.mProperty_mFunctionArgumentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration::setter_setMFunctionArgumentTypeStringAtIndex (GALGAS_string inOperand,
                                                                                                GALGAS_uint inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionArgumentTypeString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientDependencyListForGeneration::getter_mFunctionArgumentTypeStringAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    result = p->mObject.mProperty_mFunctionArgumentTypeString ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_transientDependencyListForGeneration::cEnumerator_transientDependencyListForGeneration (const GALGAS_transientDependencyListForGeneration & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration_2D_element cEnumerator_transientDependencyListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST cEnumerator_transientDependencyListForGeneration::current_mDependency (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mDependency ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mFunctionArgumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentTypeString (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mFunctionArgumentTypeString ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@transientDependencyListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDependencyListForGeneration ("transientDependencyListForGeneration",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientDependencyListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientDependencyListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDependencyListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration result ;
  const GALGAS_transientDependencyListForGeneration * p = (const GALGAS_transientDependencyListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDependencyListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDependencyListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@computedPropertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_computedPropertyGenerationList : public cCollectionElement {
  public : GALGAS_computedPropertyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_computedPropertyGenerationList (const GALGAS_computedPropertyGeneration & in_mProperty
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_computedPropertyGenerationList (const GALGAS_computedPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_computedPropertyGenerationList::cCollectionElement_computedPropertyGenerationList (const GALGAS_computedPropertyGeneration & in_mProperty
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_computedPropertyGenerationList::cCollectionElement_computedPropertyGenerationList (const GALGAS_computedPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_computedPropertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_computedPropertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_computedPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_computedPropertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_computedPropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_computedPropertyGenerationList * operand = (cCollectionElement_computedPropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_computedPropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGenerationList::GALGAS_computedPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGenerationList::GALGAS_computedPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGenerationList GALGAS_computedPropertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_computedPropertyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGenerationList GALGAS_computedPropertyGenerationList::constructor_listWithValue (const GALGAS_computedPropertyGeneration & inOperand0
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_computedPropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_computedPropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_computedPropertyGeneration & in_mProperty
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_computedPropertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_computedPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::addAssign_operation (const GALGAS_computedPropertyGeneration & inOperand0
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_computedPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::setter_append (GALGAS_computedPropertyGenerationList_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_computedPropertyGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::setter_insertAtIndex (const GALGAS_computedPropertyGeneration inOperand0,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_computedPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::setter_removeAtIndex (GALGAS_computedPropertyGeneration & outOperand0,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::setter_popFirst (GALGAS_computedPropertyGeneration & outOperand0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::setter_popLast (GALGAS_computedPropertyGeneration & outOperand0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::method_first (GALGAS_computedPropertyGeneration & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::method_last (GALGAS_computedPropertyGeneration & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGenerationList GALGAS_computedPropertyGenerationList::add_operation (const GALGAS_computedPropertyGenerationList & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_computedPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGenerationList GALGAS_computedPropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_computedPropertyGenerationList result = GALGAS_computedPropertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGenerationList GALGAS_computedPropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_computedPropertyGenerationList result = GALGAS_computedPropertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGenerationList GALGAS_computedPropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_computedPropertyGenerationList result = GALGAS_computedPropertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::plusAssign_operation (const GALGAS_computedPropertyGenerationList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_computedPropertyGeneration inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
  GALGAS_computedPropertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_computedPropertyGenerationList::cEnumerator_computedPropertyGenerationList (const GALGAS_computedPropertyGenerationList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGenerationList_2D_element cEnumerator_computedPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_computedPropertyGenerationList * p = (const cCollectionElement_computedPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration cEnumerator_computedPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_computedPropertyGenerationList * p = (const cCollectionElement_computedPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@computedPropertyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedPropertyGenerationList ("computedPropertyGenerationList",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGenerationList GALGAS_computedPropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGenerationList result ;
  const GALGAS_computedPropertyGenerationList * p = (const GALGAS_computedPropertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_string GALGAS_computeRoutineGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_computeRoutineGeneration * p = (const cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computeRoutineGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computeRoutineGeneration::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_computeRoutineGeneration * p = (const cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    result = p->mProperty_mTransientName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computeRoutineGeneration::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_computeRoutineGeneration::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_computeRoutineGeneration * p = (const cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    result = p->mProperty_mTransientType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cPtr_computeRoutineGeneration::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_computeRoutineGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_computeRoutineGeneration * p = (const cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration cPtr_computeRoutineGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeRoutineGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOwnerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeRoutineGeneration::setter_setMTransientName (GALGAS_string inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::setter_setMTransientName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTransientName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeRoutineGeneration::setter_setMTransientType (GALGAS_typeKind inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mTransientType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::setter_setMTransientType (GALGAS_typeKind inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTransientType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeRoutineGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDependencyList = inValue ;
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
//   Object comparison                                                                           
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

GALGAS_string GALGAS_transientPropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_transientPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cPtr_transientPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientPropertyGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration cPtr_transientPropertyGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientPropertyGeneration::getter_mGenerate (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mGenerate ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_transientPropertyGeneration::getter_mGenerate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerate ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientPropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mClassName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientPropertyGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDependencyList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGeneration::setter_setMGenerate (GALGAS_bool inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientPropertyGeneration::setter_setMGenerate (GALGAS_bool inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGenerate = inValue ;
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
//
//Class for element of '@transientPropertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_transientPropertyGenerationList : public cCollectionElement {
  public : GALGAS_transientPropertyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_transientPropertyGenerationList (const GALGAS_transientPropertyGeneration & in_mProperty
                                                               COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_transientPropertyGenerationList (const GALGAS_transientPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_append (GALGAS_transientPropertyGenerationList_2D_element inElement,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_insertAtIndex (const GALGAS_transientPropertyGeneration inOperand0,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList::setter_removeAtIndex (GALGAS_transientPropertyGeneration & outOperand0,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
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
    temp_0 = GALGAS_string ("prefs_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("unwSelf.") ;
  }
  GALGAS_string var_uwself_19390 = temp_0 ;
  result_outResult = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_ident_19472 = GALGAS_string ("        ") ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_transientDependencyListForGeneration temp_3 = inObject ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.getter_length (SOURCE_FILE ("transient-property.galgas", 451)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_observablePropertyAST var_first_19564 ;
      const GALGAS_transientDependencyListForGeneration temp_4 = inObject ;
      GALGAS_string joker_19566_2 ; // Joker input parameter
      GALGAS_string joker_19566_1 ; // Joker input parameter
      temp_4.method_first (var_first_19564, joker_19566_2, joker_19566_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 452)) ;
      result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("let kind = "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 453)).add_operation (extensionGetter_modelStringForSelf (var_first_19564, var_uwself_19390, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 453)).add_operation (GALGAS_string ("_selection.kind ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 453)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_transientDependencyListForGeneration temp_5 = inObject ;
    GALGAS_transientDependencyListForGeneration var_dependencies_19698 = temp_5 ;
    GALGAS_observablePropertyAST var_first_19768 ;
    {
    GALGAS_string joker_19770 ; // Joker input parameter
    GALGAS_string joker_19773 ; // Joker input parameter
    var_dependencies_19698.setter_popFirst (var_first_19768, joker_19770, joker_19773, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 456)) ;
    }
    result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("var kind = "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 457)).add_operation (extensionGetter_modelStringForSelf (var_first_19768, var_uwself_19390, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 457)).add_operation (GALGAS_string ("_selection.kind ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 457)) ;
    cEnumerator_transientDependencyListForGeneration enumerator_19903 (var_dependencies_19698, kENUMERATION_UP) ;
    while (enumerator_19903.hasCurrentObject ()) {
      result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("kind &= "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 459)).add_operation (extensionGetter_modelStringForSelf (enumerator_19903.current_mDependency (HERE), var_uwself_19390, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 459)).add_operation (GALGAS_string ("_selection.kind ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 459)) ;
      enumerator_19903.gotoNextObject () ;
    }
  }
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("switch kind {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 462)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("case .empty :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 463)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 464)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("case .multiple :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 465)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("  return .multiple\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 466)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("case .single :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 467)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("  switch ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 468)) ;
  const GALGAS_transientDependencyListForGeneration temp_6 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_20336 (temp_6, kENUMERATION_UP) ;
  while (enumerator_20336.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(extensionGetter_modelStringForSelf (enumerator_20336.current_mDependency (HERE), var_uwself_19390, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 471)).add_operation (GALGAS_string ("_selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 471)) ;
    if (enumerator_20336.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 473)) ;
    }
    enumerator_20336.gotoNextObject () ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 475)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("  case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 476)) ;
  const GALGAS_transientDependencyListForGeneration temp_7 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_20526 (temp_7, kENUMERATION_UP) ;
  GALGAS_uint index_20515 ((uint32_t) 0) ;
  while (enumerator_20526.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (".single (let v").add_operation (index_20515.getter_string (SOURCE_FILE ("transient-property.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 479)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 479)) ;
    if (enumerator_20526.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 481)) ;
    }
    enumerator_20526.gotoNextObject () ;
    index_20515.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 477)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 483)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("    return .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 484)) ;
  result_outResult.plusAssign_operation(constinArgument_inFunctionNamePrefix.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 485)).add_operation (constinArgument_inOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 485)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 485)).add_operation (constinArgument_inTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 485)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 486)) ;
  const GALGAS_transientDependencyListForGeneration temp_8 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_20807 (temp_8, kENUMERATION_UP) ;
  GALGAS_uint index_20796 ((uint32_t) 0) ;
  while (enumerator_20807.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("v").add_operation (index_20796.getter_string (SOURCE_FILE ("transient-property.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 489)) ;
    if (enumerator_20807.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 491)) ;
    }
    enumerator_20807.gotoNextObject () ;
    index_20796.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 487)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string ("))\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 493)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("  default :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 494)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("    return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 495)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("  }\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 496)) ;
  result_outResult.plusAssign_operation(var_ident_19472.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 497)) ;
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
  cEnumerator_transientDependencyListForGeneration enumerator_21322 (temp_0, kENUMERATION_UP) ;
  bool bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.galgas", 504)).isValidAndTrue () ;
  if (enumerator_21322.hasCurrentObject () && bool_1) {
    while (enumerator_21322.hasCurrentObject () && bool_1) {
      result_outResult = extensionGetter_needs_5F_unwSelf (enumerator_21322.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 505)) ;
      enumerator_21322.gotoNextObject () ;
      if (enumerator_21322.hasCurrentObject ()) {
        bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.galgas", 504)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@observablePropertyAST generateGetProperty'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_generateGetProperty (const GALGAS_observablePropertyAST & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_21944 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_21944->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_21944->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 516)).add_operation (GALGAS_string (".addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 516)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 516)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_22180 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_22180->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_22180->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_22180->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 518)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 518)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 518)).add_operation (GALGAS_string (".addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 518)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 518)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_22411 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_22411->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_22411->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_22411->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 520)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 520)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 520)).add_operation (GALGAS_string ("addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 520)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 520)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_22584 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_22584->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_22584->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 522)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 522)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 522)).add_operation (GALGAS_string ("_property <<4>>"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 522)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_22770 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_22770->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 526)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 526)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_22884 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_22884->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 528)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 528)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_23050 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_23050->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_23050->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 530)).add_operation (GALGAS_string (".addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 530)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 530)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_23217 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_23217->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_23217->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 532)).add_operation (GALGAS_string (".addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 532)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 532)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_23324 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_23324->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 534)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 534)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_23426 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_23426->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 536)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 536)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_23540 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_23540->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 538)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 538)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_23646 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_23646->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 540)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 540)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_23756 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_23756->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 542)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 542)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_23920 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_23920->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_23920->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 544)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 544)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 544)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 544)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_24102 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_24102->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_24102->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 546)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 546)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 546)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 546)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 530 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 532 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 534 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_24414 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_24414->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_propertyName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 554)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 554)) ;
    }
    break ;
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
    temp_0 = GALGAS_string ("prefs_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_24660 = temp_0 ;
  const GALGAS_observablePropertyAST temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_24889 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_24889->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_24889->mAssociatedValue1 ;
      result_outResult = var_prefix_24660.add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 564)).add_operation (GALGAS_string (".addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 564)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 564)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_25145 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_25145->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_25145->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_25145->mAssociatedValue2 ;
      result_outResult = var_prefix_24660.add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 566)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 566)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 566)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 566)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 566)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 566)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_25385 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_25385->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_25385->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_25385->mAssociatedValue2 ;
      result_outResult = var_prefix_24660.add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 568)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 568)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 568)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 568)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 568)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_25558 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_25558->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_25558->mAssociatedValue1 ;
      result_outResult = var_prefix_24660.add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 570)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 570)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 570)).add_operation (GALGAS_string ("_property.<<4>>"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 570)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_25757 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_25757->mAssociatedValue0 ;
      result_outResult = var_prefix_24660.add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 574)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 574)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_25884 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_25884->mAssociatedValue0 ;
      result_outResult = var_prefix_24660.add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 576)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 576)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_26058 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_26058->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_26058->mAssociatedValue1 ;
      result_outResult = var_prefix_24660.add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 578)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 578)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 578)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_26233 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_26233->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_26233->mAssociatedValue1 ;
      result_outResult = var_prefix_24660.add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 580)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 580)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 580)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_26352 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_26352->mAssociatedValue0 ;
      result_outResult = var_prefix_24660.add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 582)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 582)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_26468 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_26468->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 584)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 584)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_26596 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_26596->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 586)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 586)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_26716 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_26716->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 588)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 588)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_26840 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_26840->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 590)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 590)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_27018 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_27018->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_27018->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 592)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 592)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 592)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 592)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_27202 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_27202->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_27202->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 594)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 594)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 594)) ;
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
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_27527 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_2.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_27527->mAssociatedValue1 ;
      result_outResult = var_prefix_24660.add_operation (extractedValue_propertyName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 602)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 602)) ;
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
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_27933 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_27933->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_27933->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 611)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 611)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 611)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 611)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_28193 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_28193->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_28193->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_28193->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 613)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 613)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 613)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 613)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 613)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 613)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_28437 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_28437->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_28437->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_28437->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 615)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 615)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 615)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 615)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 615)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_28629 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_28629->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_28629->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 617)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)).add_operation (GALGAS_string ("_property.removeEBObserverOf_<<5>>"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 617)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_28831 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_28831->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 621)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 621)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_28962 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_28962->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 623)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 623)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_29140 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_29140->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_29140->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 625)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 625)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 625)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_29331 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_29331->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_29331->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 627)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 627)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 627)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 627)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_29454 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_29454->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 629)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 629)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_29573 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_29573->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 631)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 631)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_29704 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_29704->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 633)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 633)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_29827 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_29827->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 635)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 635)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_30008 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_30008->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_30008->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 637)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 637)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 637)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 637)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_30135 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_30135->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 639)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 639)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_30322 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_30322->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_30322->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 641)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 641)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 641)) ;
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
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_30651 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_30651->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_propertyName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 649)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 649)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_string GALGAS_transientRoutineGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientRoutineGeneration * p = (const cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientRoutineGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientRoutineGeneration::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientRoutineGeneration * p = (const cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    result = p->mProperty_mTransientName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientRoutineGeneration::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_transientRoutineGeneration::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientRoutineGeneration * p = (const cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    result = p->mProperty_mTransientType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cPtr_transientRoutineGeneration::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientRoutineGeneration::getter_mGeneratedFunctionNamePrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientRoutineGeneration * p = (const cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    result = p->mProperty_mGeneratedFunctionNamePrefix ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientRoutineGeneration::getter_mGeneratedFunctionNamePrefix (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGeneratedFunctionNamePrefix ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_transientRoutineGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientRoutineGeneration * p = (const cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration cPtr_transientRoutineGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOwnerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMTransientName (GALGAS_string inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::setter_setMTransientName (GALGAS_string inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTransientName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMTransientType (GALGAS_typeKind inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mTransientType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::setter_setMTransientType (GALGAS_typeKind inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTransientType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMGeneratedFunctionNamePrefix (GALGAS_string inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mGeneratedFunctionNamePrefix = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::setter_setMGeneratedFunctionNamePrefix (GALGAS_string inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGeneratedFunctionNamePrefix = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientRoutineGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDependencyList = inValue ;
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
//   Object comparison                                                                           
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

GALGAS_proxyKind GALGAS_toManyProxyGeneration::getter_mProxyKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_proxyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyProxyGeneration * p = (const cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    result = p->mProperty_mProxyKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind cPtr_toManyProxyGeneration::getter_mProxyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProxyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::getter_mToManyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyProxyGeneration * p = (const cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    result = p->mProperty_mToManyTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_mToManyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::getter_mObservedRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyProxyGeneration * p = (const cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    result = p->mProperty_mObservedRelationshipName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_mObservedRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedRelationshipName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::getter_mObservedPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyProxyGeneration * p = (const cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    result = p->mProperty_mObservedPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_mObservedPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mProxyKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMToManyTypeName (GALGAS_string inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mToManyTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyProxyGeneration::setter_setMToManyTypeName (GALGAS_string inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mToManyTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mObservedRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObservedRelationshipName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mObservedPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObservedPropertyName = inValue ;
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
//
//Class for element of '@toManyProxyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_toManyProxyGenerationList : public cCollectionElement {
  public : GALGAS_toManyProxyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGeneration & in_mProperty
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_append (GALGAS_toManyProxyGenerationList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_insertAtIndex (const GALGAS_toManyProxyGeneration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_removeAtIndex (GALGAS_toManyProxyGeneration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
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
//   Object comparison                                                                           
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

GALGAS_proxyKind GALGAS_atomicProxyGeneration::getter_mProxyKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_proxyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicProxyGeneration * p = (const cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    result = p->mProperty_mProxyKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind cPtr_atomicProxyGeneration::getter_mProxyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProxyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicProxyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicProxyGeneration * p = (const cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cPtr_atomicProxyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicProxyGeneration::getter_mObservedRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicProxyGeneration * p = (const cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    result = p->mProperty_mObservedRelationshipName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_mObservedRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedRelationshipName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicProxyGeneration::getter_mObservedPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicProxyGeneration * p = (const cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    result = p->mProperty_mObservedPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_mObservedPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mProxyKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicProxyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mObservedRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObservedRelationshipName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mObservedPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObservedPropertyName = inValue ;
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
//
//Class for element of '@atomicProxyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_atomicProxyGenerationList : public cCollectionElement {
  public : GALGAS_atomicProxyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGeneration & in_mProperty
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_append (GALGAS_atomicProxyGenerationList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_insertAtIndex (const GALGAS_atomicProxyGeneration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_removeAtIndex (GALGAS_atomicProxyGeneration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
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
//   Object comparison                                                                           
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

GALGAS_bool GALGAS_atomicPropertyGeneration::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mNeedsValidation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_atomicPropertyGeneration::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cPtr_atomicPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::getter_mIsProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mIsProxy ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_atomicPropertyGeneration::getter_mIsProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsProxy ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicPropertyGeneration::getter_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mDefaultValueInSwift ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValueInSwift ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::getter_mInPreferences (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mInPreferences ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_atomicPropertyGeneration::getter_mInPreferences (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInPreferences ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMNeedsValidation (GALGAS_bool inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mNeedsValidation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::setter_setMNeedsValidation (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNeedsValidation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMIsProxy (GALGAS_bool inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mIsProxy = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::setter_setMIsProxy (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsProxy = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMDefaultValueInSwift (GALGAS_string inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mDefaultValueInSwift = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::setter_setMDefaultValueInSwift (GALGAS_string inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDefaultValueInSwift = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMInPreferences (GALGAS_bool inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mInPreferences = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::setter_setMInPreferences (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInPreferences = inValue ;
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
//
//Class for element of '@atomicPropertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_atomicPropertyGenerationList : public cCollectionElement {
  public : GALGAS_atomicPropertyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGeneration & in_mProperty
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_append (GALGAS_atomicPropertyGenerationList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_insertAtIndex (const GALGAS_atomicPropertyGeneration inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_removeAtIndex (GALGAS_atomicPropertyGeneration & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
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

