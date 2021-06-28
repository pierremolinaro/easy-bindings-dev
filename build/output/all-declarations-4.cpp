#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_string GALGAS_selectionControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerPropertyGeneration * p = (const cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_selectionControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerPropertyGeneration::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerPropertyGeneration * p = (const cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    result = p->mProperty_mModelControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_selectionControllerPropertyGeneration::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerPropertyGeneration::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerPropertyGeneration * p = (const cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    result = p->mProperty_mModelControllerPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_selectionControllerPropertyGeneration::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectionControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOwnerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerPropertyGeneration::setter_setMModelControllerName (GALGAS_string inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    p->mProperty_mModelControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectionControllerPropertyGeneration::setter_setMModelControllerName (GALGAS_string inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModelControllerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerPropertyGeneration::setter_setMModelControllerPropertyName (GALGAS_string inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    p->mProperty_mModelControllerPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectionControllerPropertyGeneration::setter_setMModelControllerPropertyName (GALGAS_string inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModelControllerPropertyName = inValue ;
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
//
//Class for element of '@selectionControllerForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_selectionControllerForGeneration : public cCollectionElement {
  public : GALGAS_selectionControllerForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_selectionControllerForGeneration (const GALGAS_string & in_mOwnerName,
                                                                const GALGAS_string & in_mSelectionControllerName,
                                                                const GALGAS_string & in_mBoundControllerName,
                                                                const GALGAS_string & in_mBoundControllerPropertyName,
                                                                const GALGAS_string & in_mBaseTypeName,
                                                                const GALGAS_string & in_mSelectionTypeName,
                                                                const GALGAS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                const GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
//   Object comparison                                                                           
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

GALGAS_luint GALGAS_integerAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cPtr_integerAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_integerAsDefaultValue::getter_mNegative (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    result = p->mProperty_mNegative ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_integerAsDefaultValue::getter_mNegative (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNegative ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerAsDefaultValue::setter_setMValue (GALGAS_luint inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_integerAsDefaultValue::setter_setMValue (GALGAS_luint inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerAsDefaultValue::setter_setMNegative (GALGAS_bool inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    p->mProperty_mNegative = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_integerAsDefaultValue::setter_setMNegative (GALGAS_bool inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNegative = inValue ;
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
//
//Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType> gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeDefaultValueType (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType inMethod) {
  gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractDefaultValue_analyzeDefaultValueType (void) {
  gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractDefaultValue_analyzeDefaultValueType (NULL,
                                                                         freeExtensionMethod_abstractDefaultValue_analyzeDefaultValueType) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                  const GALGAS_typeKindList constin_inAttributeActualTypeList,
                                                  const GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                                  GALGAS_string & out_outSwiftDefaultValueAsString,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outSwiftDefaultValueAsString.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDefaultValue) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.count ()) {
      f = gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.count ()) {
          f = gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAttributeActualTypeList, constin_inPreferencesPropertyMap, out_outSwiftDefaultValueAsString, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDefaultValue enterDefaultValuePrecedence'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractDefaultValue_enterDefaultValuePrecedence> gExtensionMethodTable_abstractDefaultValue_enterDefaultValuePrecedence ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterDefaultValuePrecedence (const int32_t inClassIndex,
                                                       extensionMethodSignature_abstractDefaultValue_enterDefaultValuePrecedence inMethod) {
  gExtensionMethodTable_abstractDefaultValue_enterDefaultValuePrecedence.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDefaultValuePrecedence (const cPtr_abstractDefaultValue * inObject,
                                                      const GALGAS_lstring constin_inNode,
                                                      GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDefaultValue) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDefaultValue_enterDefaultValuePrecedence f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDefaultValue_enterDefaultValuePrecedence.count ()) {
      f = gExtensionMethodTable_abstractDefaultValue_enterDefaultValuePrecedence (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDefaultValue_enterDefaultValuePrecedence.count ()) {
           f = gExtensionMethodTable_abstractDefaultValue_enterDefaultValuePrecedence (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDefaultValue_enterDefaultValuePrecedence.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inNode, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractDefaultValue_enterDefaultValuePrecedence (const cPtr_abstractDefaultValue * /* inObject */,
                                                                              const GALGAS_lstring /* constinArgument_inNode */,
                                                                              GALGAS_declarationPrecedenceGraph & /* ioArgument_ioGraph */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractDefaultValue_enterDefaultValuePrecedence (void) {
  enterExtensionMethod_enterDefaultValuePrecedence (kTypeDescriptor_GALGAS_abstractDefaultValue.mSlotID,
                                                    extensionMethod_abstractDefaultValue_enterDefaultValuePrecedence) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractDefaultValue_enterDefaultValuePrecedence (void) {
  gExtensionMethodTable_abstractDefaultValue_enterDefaultValuePrecedence.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractDefaultValue_enterDefaultValuePrecedence (defineExtensionMethod_abstractDefaultValue_enterDefaultValuePrecedence,
                                                                             freeExtensionMethod_abstractDefaultValue_enterDefaultValuePrecedence) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKind typeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_typeName (const GALGAS_typeKind & inObject,
                                        C_Compiler * /* inCompiler */
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
      const GALGAS_string extractedValue_typeName = extractPtr_833->mAssociatedValue0 ;
      result_result = extractedValue_typeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_888 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_typeName = extractPtr_888->mAssociatedValue0 ;
      result_result = extractedValue_typeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      const cEnumAssociatedValues_typeKind_classType * extractPtr_940 = (const cEnumAssociatedValues_typeKind_classType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_typeName = extractPtr_940->mAssociatedValue0 ;
      result_result = extractedValue_typeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      const cEnumAssociatedValues_typeKind_transientPropertyExternType * extractPtr_1010 = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_typeName = extractPtr_1010->mAssociatedValue0 ;
      result_result = extractedValue_typeName ;
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
                                          C_Compiler * /* inCompiler */
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
                                       C_Compiler * /* inCompiler */
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
      const GALGAS_bool extractedValue_isGraphic = extractPtr_2104->mAssociatedValue1 ;
      result_outResult = extractedValue_isGraphic ;
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
  public : GALGAS_typeKindList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_typeKindList (const GALGAS_typeKind & in_mType
                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_typeKindList (const GALGAS_typeKindList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
      const cEnumAssociatedValues_propertyKind_property * extractPtr_2620 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_2620->mAssociatedValue0 ;
      result_result = extensionGetter_typeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("unified-type.galgas", 90)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_2672 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_2672->mAssociatedValue0 ;
      result_result = extractedValue_typeName.getter_string (SOURCE_FILE ("unified-type.galgas", 92)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_2723 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_2723->mAssociatedValue0 ;
      result_result = extractedValue_typeName.getter_string (SOURCE_FILE ("unified-type.galgas", 94)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_2783 = (const cEnumAssociatedValues_propertyKind_arrayController *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_2783->mAssociatedValue0 ;
      result_result = extractedValue_typeName.getter_string (SOURCE_FILE ("unified-type.galgas", 96)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_2845 = (const cEnumAssociatedValues_propertyKind_selectionController *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_typeName = extractPtr_2845->mAssociatedValue0 ;
      result_result = extractedValue_typeName ;
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
      const cEnumAssociatedValues_propertyKind_property * extractPtr_3099 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_3099->mAssociatedValue0 ;
      result_result = extensionGetter_swiftTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("unified-type.galgas", 107)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_3151 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_3151->mAssociatedValue0 ;
      result_result = extractedValue_typeName.getter_string (SOURCE_FILE ("unified-type.galgas", 109)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_3202 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_3202->mAssociatedValue0 ;
      result_result = extractedValue_typeName.getter_string (SOURCE_FILE ("unified-type.galgas", 111)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_3262 = (const cEnumAssociatedValues_propertyKind_arrayController *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_3262->mAssociatedValue0 ;
      result_result = extractedValue_typeName.getter_string (SOURCE_FILE ("unified-type.galgas", 113)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_3324 = (const cEnumAssociatedValues_propertyKind_selectionController *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_typeName = extractPtr_3324->mAssociatedValue0 ;
      result_result = extractedValue_typeName ;
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
                                             C_Compiler * /* inCompiler */
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
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_4052 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_entityName = extractPtr_4052->mAssociatedValue0 ;
      result_outResult = extractedValue_entityName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      const cEnumAssociatedValues_typeKind_enumType * extractPtr_4121 = (const cEnumAssociatedValues_typeKind_enumType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_enumTypeName = extractPtr_4121->mAssociatedValue0 ;
      result_outResult = extractedValue_enumTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      const cEnumAssociatedValues_typeKind_classType * extractPtr_4190 = (const cEnumAssociatedValues_typeKind_classType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_classTypeName = extractPtr_4190->mAssociatedValue0 ;
      result_outResult = extractedValue_classTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      const cEnumAssociatedValues_typeKind_transientPropertyExternType * extractPtr_4277 = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_classTypeName = extractPtr_4277->mAssociatedValue0 ;
      result_outResult = extractedValue_classTypeName ;
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
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_4539 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_4539->mAssociatedValue1 ;
      result_result = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.galgas", 145)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_4613 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_4613->mAssociatedValue1 ;
      result_result = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.galgas", 146)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_4686 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_4686->mAssociatedValue1 ;
      result_result = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.galgas", 147)) ;
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
      const cEnumAssociatedValues_propertyKind_property * extractPtr_5025 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_5025->mAssociatedValue0 ;
      result_result = extensionGetter_isComparable (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("unified-type.galgas", 157)) ;
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
                                          C_Compiler * /* inCompiler */
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
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_5821 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_5821->mAssociatedValue0 ;
      result_result = extractedValue_type.getter_isEnumType (SOURCE_FILE ("unified-type.galgas", 181)) ;
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

cEnumAssociatedValues_classKind_atomic::cEnumAssociatedValues_classKind_atomic (const GALGAS_typeKind & inAssociatedValue0
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

cEnumAssociatedValues_classKind_document::cEnumAssociatedValues_classKind_document (const GALGAS_lstring & inAssociatedValue0
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

cEnumAssociatedValues_classKind_entity::cEnumAssociatedValues_classKind_entity (const GALGAS_string & inAssociatedValue0,
                                                                                const GALGAS_bool & inAssociatedValue1,
                                                                                const GALGAS_bool & inAssociatedValue2
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_classKind_entity::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
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
                                                       const GALGAS_bool & inAssociatedValue2
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_classKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_entity ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_classKind_entity (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
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
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_entity) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @classKind entity invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_classKind_entity * ptr = (const cEnumAssociatedValues_classKind_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
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
                                        GALGAS_bool & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_entity ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_classKind_entity *) unsafePointer () ;
    // const cEnumAssociatedValues_classKind_entity * ptr = (const cEnumAssociatedValues_classKind_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
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

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_prefKeyDefinitionCode> gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_prefKeyDefinitionCode (const int32_t inClassIndex,
                                                 enterExtensionGetter_propertyGeneration_prefKeyDefinitionCode inGetter) {
  gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_prefKeyDefinitionCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_prefKeyDefinitionCode (const cPtr_propertyGeneration * /* inObject */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_prefKeyDefinitionCode (void) {
  enterExtensionGetter_prefKeyDefinitionCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                              extensionGetter_propertyGeneration_prefKeyDefinitionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_prefKeyDefinitionCode (void) {
  gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_prefKeyDefinitionCode (defineExtensionGetter_propertyGeneration_prefKeyDefinitionCode,
                                                                     freeExtensionGetter_propertyGeneration_prefKeyDefinitionCode) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_declarationInSelectionControllerCode> gExtensionGetterTable_propertyGeneration_declarationInSelectionControllerCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_declarationInSelectionControllerCode (const int32_t inClassIndex,
                                                                enterExtensionGetter_propertyGeneration_declarationInSelectionControllerCode inGetter) {
  gExtensionGetterTable_propertyGeneration_declarationInSelectionControllerCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_declarationInSelectionControllerCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_declarationInSelectionControllerCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_declarationInSelectionControllerCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_declarationInSelectionControllerCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_declarationInSelectionControllerCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_declarationInSelectionControllerCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_declarationInSelectionControllerCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_declarationInSelectionControllerCode (void) {
  enterExtensionGetter_declarationInSelectionControllerCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                             extensionGetter_propertyGeneration_declarationInSelectionControllerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_declarationInSelectionControllerCode (void) {
  gExtensionGetterTable_propertyGeneration_declarationInSelectionControllerCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_declarationInSelectionControllerCode (defineExtensionGetter_propertyGeneration_declarationInSelectionControllerCode,
                                                                                    freeExtensionGetter_propertyGeneration_declarationInSelectionControllerCode) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_bindPropertyInSelectionController> gExtensionGetterTable_propertyGeneration_bindPropertyInSelectionController ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_bindPropertyInSelectionController (const int32_t inClassIndex,
                                                             enterExtensionGetter_propertyGeneration_bindPropertyInSelectionController inGetter) {
  gExtensionGetterTable_propertyGeneration_bindPropertyInSelectionController.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_bindPropertyInSelectionController f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_bindPropertyInSelectionController.count ()) {
      f = gExtensionGetterTable_propertyGeneration_bindPropertyInSelectionController (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_bindPropertyInSelectionController.count ()) {
           f = gExtensionGetterTable_propertyGeneration_bindPropertyInSelectionController (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_bindPropertyInSelectionController.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_bindPropertyInSelectionController (const cPtr_propertyGeneration * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_bindPropertyInSelectionController (void) {
  enterExtensionGetter_bindPropertyInSelectionController (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                          extensionGetter_propertyGeneration_bindPropertyInSelectionController) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_bindPropertyInSelectionController (void) {
  gExtensionGetterTable_propertyGeneration_bindPropertyInSelectionController.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_bindPropertyInSelectionController (defineExtensionGetter_propertyGeneration_bindPropertyInSelectionController,
                                                                                 freeExtensionGetter_propertyGeneration_bindPropertyInSelectionController) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_propertyDeclarationCode> gExtensionGetterTable_propertyGeneration_propertyDeclarationCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_propertyDeclarationCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_propertyDeclarationCode inGetter) {
  gExtensionGetterTable_propertyGeneration_propertyDeclarationCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_propertyDeclarationCode (void) {
  gExtensionGetterTable_propertyGeneration_propertyDeclarationCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_propertyDeclarationCode (NULL,
                                                                       freeExtensionGetter_propertyGeneration_propertyDeclarationCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                           const GALGAS_bool in_inPreferences,
                                                           const GALGAS_stringset in_inOverriddenTransients,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_propertyDeclarationCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_propertyDeclarationCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_propertyDeclarationCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_propertyDeclarationCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_propertyDeclarationCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_propertyDeclarationCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inPreferences, in_inOverriddenTransients, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_configurationCode> gExtensionGetterTable_propertyGeneration_configurationCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_configurationCode (const int32_t inClassIndex,
                                             enterExtensionGetter_propertyGeneration_configurationCode inGetter) {
  gExtensionGetterTable_propertyGeneration_configurationCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_configurationCode (void) {
  gExtensionGetterTable_propertyGeneration_configurationCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_configurationCode (NULL,
                                                                 freeExtensionGetter_propertyGeneration_configurationCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_configurationCode (const cPtr_propertyGeneration * inObject,
                                                     const GALGAS_bool in_inPreferences,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_configurationCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_configurationCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_configurationCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_configurationCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_configurationCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_configurationCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inPreferences, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_initCode> gExtensionGetterTable_propertyGeneration_initCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_initCode (const int32_t inClassIndex,
                                    enterExtensionGetter_propertyGeneration_initCode inGetter) {
  gExtensionGetterTable_propertyGeneration_initCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_initCode (void) {
  gExtensionGetterTable_propertyGeneration_initCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_initCode (NULL,
                                                        freeExtensionGetter_propertyGeneration_initCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_initCode (const cPtr_propertyGeneration * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_initCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_initCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_initCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_initCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_initCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_initCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//
//Extension getter '@propertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_terminationCode> gExtensionGetterTable_propertyGeneration_terminationCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_terminationCode (const int32_t inClassIndex,
                                           enterExtensionGetter_propertyGeneration_terminationCode inGetter) {
  gExtensionGetterTable_propertyGeneration_terminationCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_terminationCode (const cPtr_propertyGeneration * inObject,
                                                   const GALGAS_bool in_inPreferences,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_terminationCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_terminationCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_terminationCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_terminationCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_terminationCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_terminationCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inPreferences, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_propertyGeneration_terminationCode (const cPtr_propertyGeneration * /* inObject */,
                                                                         const GALGAS_bool /* constinArgument_inPreferences */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                        extensionGetter_propertyGeneration_terminationCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_terminationCode (void) {
  gExtensionGetterTable_propertyGeneration_terminationCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_terminationCode (defineExtensionGetter_propertyGeneration_terminationCode,
                                                               freeExtensionGetter_propertyGeneration_terminationCode) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration setupAtomicPropertyFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode> gExtensionGetterTable_propertyGeneration_setupAtomicPropertyFromDictionaryCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_setupAtomicPropertyFromDictionaryCode (const int32_t inClassIndex,
                                                                 enterExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode inGetter) {
  gExtensionGetterTable_propertyGeneration_setupAtomicPropertyFromDictionaryCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_setupAtomicPropertyFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_setupAtomicPropertyFromDictionaryCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_setupAtomicPropertyFromDictionaryCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_setupAtomicPropertyFromDictionaryCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_setupAtomicPropertyFromDictionaryCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_setupAtomicPropertyFromDictionaryCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode (void) {
  enterExtensionGetter_setupAtomicPropertyFromDictionaryCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                              extensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode (void) {
  gExtensionGetterTable_propertyGeneration_setupAtomicPropertyFromDictionaryCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode (defineExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode,
                                                                                     freeExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration setupRelationshipFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode> gExtensionGetterTable_propertyGeneration_setupRelationshipFromDictionaryCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_setupRelationshipFromDictionaryCode (const int32_t inClassIndex,
                                                               enterExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode inGetter) {
  gExtensionGetterTable_propertyGeneration_setupRelationshipFromDictionaryCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_setupRelationshipFromDictionaryCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_setupRelationshipFromDictionaryCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_setupRelationshipFromDictionaryCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_setupRelationshipFromDictionaryCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_setupRelationshipFromDictionaryCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode (void) {
  enterExtensionGetter_setupRelationshipFromDictionaryCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                            extensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode (void) {
  gExtensionGetterTable_propertyGeneration_setupRelationshipFromDictionaryCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_setupRelationshipFromDictionaryCode (defineExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode,
                                                                                   freeExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration saveIntoDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode> gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_saveIntoDictionaryCode (const int32_t inClassIndex,
                                                  enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode inGetter) {
  gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_saveIntoDictionaryCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_saveIntoDictionaryCode (void) {
  enterExtensionGetter_saveIntoDictionaryCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                               extensionGetter_propertyGeneration_saveIntoDictionaryCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_saveIntoDictionaryCode (void) {
  gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_saveIntoDictionaryCode (defineExtensionGetter_propertyGeneration_saveIntoDictionaryCode,
                                                                      freeExtensionGetter_propertyGeneration_saveIntoDictionaryCode) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration objectAccessibilityCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_objectAccessibilityCode> gExtensionGetterTable_propertyGeneration_objectAccessibilityCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_objectAccessibilityCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_objectAccessibilityCode inGetter) {
  gExtensionGetterTable_propertyGeneration_objectAccessibilityCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_objectAccessibilityCode (const cPtr_propertyGeneration * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_objectAccessibilityCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_objectAccessibilityCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_objectAccessibilityCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_objectAccessibilityCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_objectAccessibilityCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_objectAccessibilityCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_objectAccessibilityCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_objectAccessibilityCode (void) {
  enterExtensionGetter_objectAccessibilityCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                extensionGetter_propertyGeneration_objectAccessibilityCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_objectAccessibilityCode (void) {
  gExtensionGetterTable_propertyGeneration_objectAccessibilityCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_objectAccessibilityCode (defineExtensionGetter_propertyGeneration_objectAccessibilityCode,
                                                                       freeExtensionGetter_propertyGeneration_objectAccessibilityCode) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration objectAccessibilityCodeForSaveOperation'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation> gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_objectAccessibilityCodeForSaveOperation (const int32_t inClassIndex,
                                                                   enterExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation inGetter) {
  gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation.count ()) {
      f = gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation.count ()) {
           f = gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation (void) {
  enterExtensionGetter_objectAccessibilityCodeForSaveOperation (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                                extensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation (void) {
  gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation (defineExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation,
                                                                                       freeExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration populateExplorerWindowCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_populateExplorerWindowCode> gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_populateExplorerWindowCode (const int32_t inClassIndex,
                                                      enterExtensionGetter_propertyGeneration_populateExplorerWindowCode inGetter) {
  gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_populateExplorerWindowCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_populateExplorerWindowCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_populateExplorerWindowCode (void) {
  enterExtensionGetter_populateExplorerWindowCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                   extensionGetter_propertyGeneration_populateExplorerWindowCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_populateExplorerWindowCode (void) {
  gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_populateExplorerWindowCode (defineExtensionGetter_propertyGeneration_populateExplorerWindowCode,
                                                                          freeExtensionGetter_propertyGeneration_populateExplorerWindowCode) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_clearObjectExplorerCode> gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_clearObjectExplorerCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_clearObjectExplorerCode inGetter) {
  gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_clearObjectExplorerCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                extensionGetter_propertyGeneration_clearObjectExplorerCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_clearObjectExplorerCode (void) {
  gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_clearObjectExplorerCode (defineExtensionGetter_propertyGeneration_clearObjectExplorerCode,
                                                                       freeExtensionGetter_propertyGeneration_clearObjectExplorerCode) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration resetToManyRelationships'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_resetToManyRelationships> gExtensionGetterTable_propertyGeneration_resetToManyRelationships ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_resetToManyRelationships (const int32_t inClassIndex,
                                                    enterExtensionGetter_propertyGeneration_resetToManyRelationships inGetter) {
  gExtensionGetterTable_propertyGeneration_resetToManyRelationships.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_resetToManyRelationships f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_resetToManyRelationships.count ()) {
      f = gExtensionGetterTable_propertyGeneration_resetToManyRelationships (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_resetToManyRelationships.count ()) {
           f = gExtensionGetterTable_propertyGeneration_resetToManyRelationships (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_resetToManyRelationships.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_propertyGeneration_resetToManyRelationships (const cPtr_propertyGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_propertyGeneration_resetToManyRelationships (void) {
  enterExtensionGetter_resetToManyRelationships (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                 extensionGetter_propertyGeneration_resetToManyRelationships) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_propertyGeneration_resetToManyRelationships (void) {
  gExtensionGetterTable_propertyGeneration_resetToManyRelationships.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_propertyGeneration_resetToManyRelationships (defineExtensionGetter_propertyGeneration_resetToManyRelationships,
                                                                        freeExtensionGetter_propertyGeneration_resetToManyRelationships) ;

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyAccessibility_transient::cEnumAssociatedValues_propertyAccessibility_transient (const GALGAS_bool & inAssociatedValue0
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
  public : GALGAS_transientExternTypeList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_transientExternTypeList (const GALGAS_string & in_mTypeName,
                                                       const GALGAS_bool & in_mIsClass
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_transientExternTypeList (const GALGAS_transientExternTypeList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

static TC_UniqueArray <extensionMethodSignature_abstractFileGeneration_generateCode> gExtensionMethodTable_abstractFileGeneration_generateCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractFileGeneration_generateCode inMethod) {
  gExtensionMethodTable_abstractFileGeneration_generateCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractFileGeneration_generateCode (void) {
  gExtensionMethodTable_abstractFileGeneration_generateCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractFileGeneration_generateCode (NULL,
                                                                freeExtensionMethod_abstractFileGeneration_generateCode) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (const cPtr_abstractFileGeneration * inObject,
                                       const GALGAS_string constin_inOutputDirectory,
                                       GALGAS_stringset & io_ioGeneratedFileSet,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractFileGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractFileGeneration_generateCode f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractFileGeneration_generateCode.count ()) {
      f = gExtensionMethodTable_abstractFileGeneration_generateCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractFileGeneration_generateCode.count ()) {
          f = gExtensionMethodTable_abstractFileGeneration_generateCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractFileGeneration_generateCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOutputDirectory, io_ioGeneratedFileSet, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@fileGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_fileGenerationList : public cCollectionElement {
  public : GALGAS_fileGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_fileGenerationList (const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_fileGenerationList (const GALGAS_fileGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
//
//Class for element of '@XCodeGroupList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeGroupList : public cCollectionElement {
  public : GALGAS_XCodeGroupList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                              const GALGAS_string & in_mGroupName,
                                              const GALGAS_string & in_mGroupPath,
                                              const GALGAS_stringlist & in_mChildrenRefs
                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  public : GALGAS_XCodeToolTargetList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_XCodeToolTargetList (const GALGAS_string & in_mTargetRef,
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
  public : cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  public : GALGAS_XCodeAppTargetList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
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
  public : cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  public : GALGAS_BuildFileList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                             const GALGAS_string & in_mFileName,
                                             const GALGAS_string & in_mBuildReference
                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  public : GALGAS_mainXibLineDescriptorList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_mainXibElement_text::cEnumAssociatedValues_mainXibElement_text (const GALGAS_lstring & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_mainXibElement_text::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_mainXibElement_text::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_mainXibElement_text * ptr = dynamic_cast<const cEnumAssociatedValues_mainXibElement_text *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_mainXibElement_outlet::cEnumAssociatedValues_mainXibElement_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_mainXibElement_outlet::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_mainXibElement_outlet::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_mainXibElement_outlet * ptr = dynamic_cast<const cEnumAssociatedValues_mainXibElement_outlet *> (inOperand) ;
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

GALGAS_mainXibElement::GALGAS_mainXibElement (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibElement GALGAS_mainXibElement::constructor_text (const GALGAS_lstring & inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_text ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_mainXibElement_text (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibElement GALGAS_mainXibElement::constructor_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                                 const GALGAS_lstring & inAssociatedValue1
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_outlet ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_mainXibElement_outlet (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibElement::method_text (GALGAS_lstring & outAssociatedValue0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_text) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @mainXibElement text invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_mainXibElement_text * ptr = (const cEnumAssociatedValues_mainXibElement_text *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibElement::method_outlet (GALGAS_lstring & outAssociatedValue0,
                                           GALGAS_lstring & outAssociatedValue1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outlet) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @mainXibElement outlet invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_mainXibElement_outlet * ptr = (const cEnumAssociatedValues_mainXibElement_outlet *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mainXibElement::optional_text (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_text ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_mainXibElement_text *) unsafePointer () ;
    // const cEnumAssociatedValues_mainXibElement_text * ptr = (const cEnumAssociatedValues_mainXibElement_text *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mainXibElement::optional_outlet (GALGAS_lstring & outAssociatedValue0,
                                             GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_outlet ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_mainXibElement_outlet *) unsafePointer () ;
    // const cEnumAssociatedValues_mainXibElement_outlet * ptr = (const cEnumAssociatedValues_mainXibElement_outlet *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_mainXibElement [3] = {
  "(not built)",
  "text",
  "outlet"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mainXibElement::getter_isText (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_text == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mainXibElement::getter_isOutlet (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outlet == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibElement::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<enum @mainXibElement: " << gEnumNameArrayFor_mainXibElement [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mainXibElement::objectCompare (const GALGAS_mainXibElement & inOperand) const {
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
//@mainXibElement type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibElement ("mainXibElement",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibElement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibElement (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibElement GALGAS_mainXibElement::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  const GALGAS_mainXibElement * p = (const GALGAS_mainXibElement *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@mainXibDescriptorList generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_generateCode (const GALGAS_mainXibDescriptorList & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mainXibDescriptorList temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_length (SOURCE_FILE ("main-xib.galgas", 88)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_mainXibDescriptorList temp_2 = inObject ;
      result_outResult = GALGAS_string ("    var y = OUTLET_HEIGHT * 1.5 * ").add_operation (temp_2.getter_length (SOURCE_FILE ("main-xib.galgas", 89)).getter_string (SOURCE_FILE ("main-xib.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 89)).add_operation (GALGAS_string (".0\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 89)) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 90)) ;
      GALGAS_uint var_idx_3051 = GALGAS_uint ((uint32_t) 0U) ;
      GALGAS_uint var_columnMax_3073 = GALGAS_uint ((uint32_t) 1U) ;
      const GALGAS_mainXibDescriptorList temp_3 = inObject ;
      cEnumerator_mainXibDescriptorList enumerator_3096 (temp_3, kENUMERATION_UP) ;
      while (enumerator_3096.hasCurrentObject ()) {
        GALGAS_uint var_column_3116 = GALGAS_uint ((uint32_t) 0U) ;
        result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 95)) ;
        cEnumerator_mainXibLineDescriptorList enumerator_3188 (enumerator_3096.current_mLine (HERE), kENUMERATION_UP) ;
        while (enumerator_3188.hasCurrentObject ()) {
          switch (enumerator_3188.current_mElement (HERE).enumValue ()) {
          case GALGAS_mainXibElement::kNotBuilt:
            break ;
          case GALGAS_mainXibElement::kEnum_text:
            {
              const cEnumAssociatedValues_mainXibElement_text * extractPtr_3937 = (const cEnumAssociatedValues_mainXibElement_text *) (enumerator_3188.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_t = extractPtr_3937->mAssociatedValue0 ;
              var_idx_3051.increment_operation (inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 99)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //--- Text ").add_operation (extractedValue_t.getter_string (SOURCE_FILE ("main-xib.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 100)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 100)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //  createTextFieldForText (").add_operation (extractedValue_t.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 101)).add_operation (GALGAS_string (", y:&y, col:0, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 101)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    let tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (GALGAS_string (" = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (var_column_3116.getter_string (SOURCE_FILE ("main-xib.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 102)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (GALGAS_string (".stringValue = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (extractedValue_t.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 103)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 104)).add_operation (GALGAS_string (".isEditable = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 104)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 105)).add_operation (GALGAS_string (".drawsBackground = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 105)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 106)).add_operation (GALGAS_string (".isBordered = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 106)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 107)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 107)) ;
            }
            break ;
          case GALGAS_mainXibElement::kEnum_outlet:
            {
              const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_4408 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_3188.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_outletType = extractPtr_4408->mAssociatedValue0 ;
              const GALGAS_lstring extractedValue_outletName = extractPtr_4408->mAssociatedValue1 ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //--- Outlet ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 109)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 109)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (extractedValue_outletType.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string ("(frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (var_column_3116.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 110)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (GALGAS_string ("\?.setAccessibilityIdentifier ("), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (extractedValue_outletName.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 111)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 112)).add_operation (GALGAS_string ("!)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 112)) ;
            }
            break ;
          }
          var_column_3116.increment_operation (inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 114)) ;
          enumerator_3188.gotoNextObject () ;
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsStrictSup, var_column_3116.objectCompare (var_columnMax_3073)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_columnMax_3073 = var_column_3116 ;
          }
        }
        result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT / 2.0\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 119)) ;
        enumerator_3096.gotoNextObject () ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("  //--- Set pref window content view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 121)) ;
      const GALGAS_mainXibDescriptorList temp_5 = inObject ;
      result_outResult.plusAssign_operation(GALGAS_string ("    window\?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * ").add_operation (var_columnMax_3073.getter_string (SOURCE_FILE ("main-xib.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (GALGAS_string (".0, height:OUTLET_HEIGHT * (1.5 * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (temp_5.getter_length (SOURCE_FILE ("main-xib.galgas", 122)).getter_string (SOURCE_FILE ("main-xib.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (GALGAS_string (".0 + 0.5)))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 122)) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    window\?.contentView = view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 123)) ;
    }
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element::GALGAS_enumFunAssociationSortedList_2D_element (void) :
mProperty_mIndex (),
mProperty_mAssociatedString () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element::~ GALGAS_enumFunAssociationSortedList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element::GALGAS_enumFunAssociationSortedList_2D_element (const GALGAS_uint & inOperand0,
                                                                                                const GALGAS_string & inOperand1) :
mProperty_mIndex (inOperand0),
mProperty_mAssociatedString (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element GALGAS_enumFunAssociationSortedList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumFunAssociationSortedList_2D_element (GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element GALGAS_enumFunAssociationSortedList_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                                const GALGAS_string & inOperand1 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumFunAssociationSortedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumFunAssociationSortedList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumFunAssociationSortedList_2D_element::objectCompare (const GALGAS_enumFunAssociationSortedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAssociatedString.objectCompare (inOperand.mProperty_mAssociatedString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumFunAssociationSortedList_2D_element::isValid (void) const {
  return mProperty_mIndex.isValid () && mProperty_mAssociatedString.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList_2D_element::drop (void) {
  mProperty_mIndex.drop () ;
  mProperty_mAssociatedString.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @enumFunAssociationSortedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAssociatedString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_enumFunAssociationSortedList_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enumFunAssociationSortedList_2D_element::getter_mAssociatedString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedString ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@enumFunAssociationSortedList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2D_element ("enumFunAssociationSortedList-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumFunAssociationSortedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumFunAssociationSortedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumFunAssociationSortedList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element GALGAS_enumFunAssociationSortedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumFunAssociationSortedList_2D_element result ;
  const GALGAS_enumFunAssociationSortedList_2D_element * p = (const GALGAS_enumFunAssociationSortedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumFunAssociationSortedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFunAssociationSortedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) :
mProperty_mEntityName (),
mProperty_mObsoleteEntityNames () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::~ GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mEntityName (inOperand0),
mProperty_mObsoleteEntityNames (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::objectCompare (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEntityName.objectCompare (inOperand.mProperty_mEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObsoleteEntityNames.objectCompare (inOperand.mProperty_mObsoleteEntityNames) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::isValid (void) const {
  return mProperty_mEntityName.isValid () && mProperty_mObsoleteEntityNames.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::drop (void) {
  mProperty_mEntityName.drop () ;
  mProperty_mObsoleteEntityNames.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "<struct @entityListForGeneratingEBManagedObjectContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObsoleteEntityNames ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@entityListForGeneratingEBManagedObjectContext-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ("entityListForGeneratingEBManagedObjectContext-element",
                                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element * p = (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element::GALGAS_astAutoLayoutToolbarItemList_2D_element (void) :
mProperty_mItem () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element::~ GALGAS_astAutoLayoutToolbarItemList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element::GALGAS_astAutoLayoutToolbarItemList_2D_element (const GALGAS_astAutoLayoutToolbarItem & inOperand0) :
mProperty_mItem (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element GALGAS_astAutoLayoutToolbarItemList_2D_element::constructor_new (const GALGAS_astAutoLayoutToolbarItem & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItemList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astAutoLayoutToolbarItemList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astAutoLayoutToolbarItemList_2D_element::objectCompare (const GALGAS_astAutoLayoutToolbarItemList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mItem.objectCompare (inOperand.mProperty_mItem) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutToolbarItemList_2D_element::isValid (void) const {
  return mProperty_mItem.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList_2D_element::drop (void) {
  mProperty_mItem.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @astAutoLayoutToolbarItemList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mItem.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItem GALGAS_astAutoLayoutToolbarItemList_2D_element::getter_mItem (UNUSED_LOCATION_ARGS) const {
  return mProperty_mItem ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@astAutoLayoutToolbarItemList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList_2D_element ("astAutoLayoutToolbarItemList-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutToolbarItemList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutToolbarItemList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutToolbarItemList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element GALGAS_astAutoLayoutToolbarItemList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItemList_2D_element result ;
  const GALGAS_astAutoLayoutToolbarItemList_2D_element * p = (const GALGAS_astAutoLayoutToolbarItemList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutToolbarItemList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutToolbarItemList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (void) :
mProperty_mLinkerName (),
mProperty_mOutletNameAndTypeNameList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::~ GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS__32_stringlist & inOperand1) :
mProperty_mLinkerName (inOperand0),
mProperty_mOutletNameAndTypeNameList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS__32_stringlist & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletLinkerGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLinkerName.objectCompare (inOperand.mProperty_mLinkerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletNameAndTypeNameList.objectCompare (inOperand.mProperty_mOutletNameAndTypeNameList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::isValid (void) const {
  return mProperty_mLinkerName.isValid () && mProperty_mOutletNameAndTypeNameList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::drop (void) {
  mProperty_mLinkerName.drop () ;
  mProperty_mOutletNameAndTypeNameList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutOutletLinkerGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLinkerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletNameAndTypeNameList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::getter_mLinkerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLinkerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::getter_mOutletNameAndTypeNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletNameAndTypeNameList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutOutletLinkerGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2D_element ("autoLayoutOutletLinkerGenerationList-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletLinkerGenerationList_2D_element result ;
  const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element * p = (const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletLinkerGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element::GALGAS_autoLayoutToolbarItemGenerationList_2D_element (void) :
mProperty_mItem () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element::~ GALGAS_autoLayoutToolbarItemGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element::GALGAS_autoLayoutToolbarItemGenerationList_2D_element (const GALGAS_autoLayoutToolbarItemGeneration & inOperand0) :
mProperty_mItem (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element GALGAS_autoLayoutToolbarItemGenerationList_2D_element::constructor_new (const GALGAS_autoLayoutToolbarItemGeneration & inOperand0 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutToolbarItemGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_autoLayoutToolbarItemGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutToolbarItemGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutToolbarItemGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mItem.objectCompare (inOperand.mProperty_mItem) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutToolbarItemGenerationList_2D_element::isValid (void) const {
  return mProperty_mItem.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList_2D_element::drop (void) {
  mProperty_mItem.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutToolbarItemGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mItem.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGeneration GALGAS_autoLayoutToolbarItemGenerationList_2D_element::getter_mItem (UNUSED_LOCATION_ARGS) const {
  return mProperty_mItem ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutToolbarItemGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutToolbarItemGenerationList_2D_element ("autoLayoutToolbarItemGenerationList-element",
                                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutToolbarItemGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutToolbarItemGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutToolbarItemGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutToolbarItemGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element GALGAS_autoLayoutToolbarItemGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutToolbarItemGenerationList_2D_element result ;
  const GALGAS_autoLayoutToolbarItemGenerationList_2D_element * p = (const GALGAS_autoLayoutToolbarItemGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutToolbarItemGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutToolbarItemGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element::GALGAS_astViewInstructionList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element::~ GALGAS_astViewInstructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element::GALGAS_astViewInstructionList_2D_element (const GALGAS_astAbstractViewInstructionDeclaration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element GALGAS_astViewInstructionList_2D_element::constructor_new (const GALGAS_astAbstractViewInstructionDeclaration & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astViewInstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astViewInstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astViewInstructionList_2D_element::objectCompare (const GALGAS_astViewInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astViewInstructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @astViewInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration GALGAS_astViewInstructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@astViewInstructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astViewInstructionList_2D_element ("astViewInstructionList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astViewInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewInstructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astViewInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astViewInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element GALGAS_astViewInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astViewInstructionList_2D_element result ;
  const GALGAS_astViewInstructionList_2D_element * p = (const GALGAS_astViewInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astViewInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element::GALGAS_implicitViewFunctionGenerationList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element::~ GALGAS_implicitViewFunctionGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element::GALGAS_implicitViewFunctionGenerationList_2D_element (const GALGAS_abstractViewInstructionGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element GALGAS_implicitViewFunctionGenerationList_2D_element::constructor_new (const GALGAS_abstractViewInstructionGeneration & inOperand0 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implicitViewFunctionGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_implicitViewFunctionGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_implicitViewFunctionGenerationList_2D_element::objectCompare (const GALGAS_implicitViewFunctionGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_implicitViewFunctionGenerationList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @implicitViewFunctionGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration GALGAS_implicitViewFunctionGenerationList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@implicitViewFunctionGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2D_element ("implicitViewFunctionGenerationList-element",
                                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implicitViewFunctionGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implicitViewFunctionGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicitViewFunctionGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element GALGAS_implicitViewFunctionGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_implicitViewFunctionGenerationList_2D_element result ;
  const GALGAS_implicitViewFunctionGenerationList_2D_element * p = (const GALGAS_implicitViewFunctionGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implicitViewFunctionGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitViewFunctionGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element::GALGAS_viewGenerationList_2D_element (void) :
mProperty_mViewName (),
mProperty_mView () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element::~ GALGAS_viewGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element::GALGAS_viewGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                            const GALGAS_abstractViewGeneration & inOperand1) :
mProperty_mViewName (inOperand0),
mProperty_mView (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element GALGAS_viewGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_abstractViewGeneration & inOperand1 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_viewGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_viewGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_viewGenerationList_2D_element::objectCompare (const GALGAS_viewGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mViewName.objectCompare (inOperand.mProperty_mViewName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mView.objectCompare (inOperand.mProperty_mView) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_viewGenerationList_2D_element::isValid (void) const {
  return mProperty_mViewName.isValid () && mProperty_mView.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList_2D_element::drop (void) {
  mProperty_mViewName.drop () ;
  mProperty_mView.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @viewGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mViewName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mView.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_viewGenerationList_2D_element::getter_mViewName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mViewName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration GALGAS_viewGenerationList_2D_element::getter_mView (UNUSED_LOCATION_ARGS) const {
  return mProperty_mView ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@viewGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_viewGenerationList_2D_element ("viewGenerationList-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_viewGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_viewGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_viewGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_viewGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element GALGAS_viewGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_viewGenerationList_2D_element result ;
  const GALGAS_viewGenerationList_2D_element * p = (const GALGAS_viewGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_viewGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("viewGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::~ GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                      const GALGAS_boundObjectList & inOperand1,
                                                                                                                      const GALGAS_string & inOperand2) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectList (inOperand1),
mProperty_mBindingOptionsString (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_boundObjectList::constructor_emptyList (HERE),
                                                                    GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_boundObjectList & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutRegularBindingsGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectList.objectCompare (inOperand.mProperty_mBoundObjectList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingOptionsString.objectCompare (inOperand.mProperty_mBindingOptionsString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutRegularBindingsGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundObjectList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingOptionsString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::getter_mBoundObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::getter_mBindingOptionsString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingOptionsString ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutRegularBindingsGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2D_element ("autoLayoutRegularBindingsGenerationList-element",
                                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutRegularBindingsGenerationList_2D_element result ;
  const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element * p = (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutRegularBindingsGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::~ GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectExpression (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutMultipleBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectExpression.objectCompare (inOperand.mProperty_mBoundObjectExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutMultipleBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::getter_mBoundObjectExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectExpression ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutMultipleBindingGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2D_element ("autoLayoutMultipleBindingGenerationList-element",
                                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutMultipleBindingGenerationList_2D_element result ;
  const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element * p = (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutMultipleBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) :
mProperty_mParameterName (),
mProperty_mParameterValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::~ GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_string & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mParameterValue (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                             GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                        const GALGAS_string & inOperand1 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::objectCompare (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mParameterName.objectCompare (inOperand.mProperty_mParameterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameterValue.objectCompare (inOperand.mProperty_mParameterValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mParameterValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mParameterValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutViewInstructionGenerationParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mParameterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameterValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::getter_mParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::getter_mParameterValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameterValue ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewInstructionGenerationParameterList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element ("autoLayoutViewInstructionGenerationParameterList-element",
                                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element result ;
  const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element * p = (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) :
mProperty_mFunctionName (),
mProperty_mParameters () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::~ GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1) :
mProperty_mFunctionName (inOperand0),
mProperty_mParameters (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                      const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1 
                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::objectCompare (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameters.objectCompare (inOperand.mProperty_mParameters) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mParameters.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mParameters.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutViewInstructionGenerationFuncCallList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameters.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::getter_mParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameters ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewInstructionGenerationFuncCallList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element ("autoLayoutViewInstructionGenerationFuncCallList-element",
                                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element result ;
  const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element * p = (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationFuncCallList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element::GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element::~ GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element::GALGAS_autoLayoutViewInstructionGenerationList_2D_element (const GALGAS_abstractViewInstructionGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element GALGAS_autoLayoutViewInstructionGenerationList_2D_element::constructor_new (const GALGAS_abstractViewInstructionGeneration & inOperand0 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_autoLayoutViewInstructionGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutViewInstructionGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewInstructionGenerationList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutViewInstructionGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration GALGAS_autoLayoutViewInstructionGenerationList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewInstructionGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2D_element ("autoLayoutViewInstructionGenerationList-element",
                                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element GALGAS_autoLayoutViewInstructionGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList_2D_element result ;
  const GALGAS_autoLayoutViewInstructionGenerationList_2D_element * p = (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (void) :
mProperty_mModelType (),
mProperty_mModelShouldBeWritableProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element::~ GALGAS_outletBindingSpecificationModelList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1) :
mProperty_mModelType (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_outletBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModelType.objectCompare (inOperand.mProperty_mModelType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelShouldBeWritableProperty.objectCompare (inOperand.mProperty_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_outletBindingSpecificationModelList_2D_element::isValid (void) const {
  return mProperty_mModelType.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList_2D_element::drop (void) {
  mProperty_mModelType.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModelType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelShouldBeWritableProperty ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@outletBindingSpecificationModelList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ("outletBindingSpecificationModelList-element",
                                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletBindingSpecificationModelList_2D_element * p = (const GALGAS_outletBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (void) :
mProperty_mKind (),
mProperty_mErrorLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_propertyKind & inOperand0,
                                                                                    const GALGAS_location & inOperand1) :
mProperty_mKind (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::constructor_new (const GALGAS_propertyKind & inOperand0,
                                                                                                    const GALGAS_location & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_outletBindingModelList_2D_element::objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorLocation.objectCompare (inOperand.mProperty_mErrorLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_outletBindingModelList_2D_element::isValid (void) const {
  return mProperty_mKind.isValid () && mProperty_mErrorLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mProperty_mKind.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @outletBindingModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_outletBindingModelList_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_outletBindingModelList_2D_element::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@outletBindingModelList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ("outletBindingModelList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletBindingModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletBindingModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  const GALGAS_outletBindingModelList_2D_element * p = (const GALGAS_outletBindingModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (void) :
mProperty_mTableValueBindingOutletName (),
mProperty_mTableValueBindingControllerName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element::~ GALGAS_tableViewBindingGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1) :
mProperty_mTableValueBindingOutletName (inOperand0),
mProperty_mTableValueBindingControllerName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tableViewBindingGenerationList_2D_element::objectCompare (const GALGAS_tableViewBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTableValueBindingOutletName.objectCompare (inOperand.mProperty_mTableValueBindingOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTableValueBindingControllerName.objectCompare (inOperand.mProperty_mTableValueBindingControllerName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableViewBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mTableValueBindingOutletName.isValid () && mProperty_mTableValueBindingControllerName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList_2D_element::drop (void) {
  mProperty_mTableValueBindingOutletName.drop () ;
  mProperty_mTableValueBindingControllerName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @tableViewBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTableValueBindingOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTableValueBindingControllerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBindingOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBindingControllerName ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewBindingGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ("tableViewBindingGenerationList-element",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  const GALGAS_tableViewBindingGenerationList_2D_element * p = (const GALGAS_tableViewBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) :
mProperty_mEBViewOutletName (),
mProperty_mArrayControllerControllerName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::~ GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1) :
mProperty_mEBViewOutletName (inOperand0),
mProperty_mArrayControllerControllerName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                const GALGAS_string & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::objectCompare (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEBViewOutletName.objectCompare (inOperand.mProperty_mEBViewOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerControllerName.objectCompare (inOperand.mProperty_mArrayControllerControllerName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mEBViewOutletName.isValid () && mProperty_mArrayControllerControllerName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::drop (void) {
  mProperty_mEBViewOutletName.drop () ;
  mProperty_mArrayControllerControllerName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @ebViewGraphicControllerBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEBViewOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerControllerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::getter_mEBViewOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::getter_mArrayControllerControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerControllerName ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@ebViewGraphicControllerBindingGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ("ebViewGraphicControllerBindingGenerationList-element",
                                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element * p = (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ebViewGraphicControllerBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (void) :
mProperty_mBoundObjectString (),
mProperty_mKind () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element::~ GALGAS_boundObjectList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (const GALGAS_string & inOperand0,
                                                                      const GALGAS_propertyKind & inOperand1) :
mProperty_mBoundObjectString (inOperand0),
mProperty_mKind (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_propertyKind & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_boundObjectList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boundObjectList_2D_element::objectCompare (const GALGAS_boundObjectList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectString.objectCompare (inOperand.mProperty_mBoundObjectString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_boundObjectList_2D_element::isValid (void) const {
  return mProperty_mBoundObjectString.isValid () && mProperty_mKind.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList_2D_element::drop (void) {
  mProperty_mBoundObjectString.drop () ;
  mProperty_mKind.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @boundObjectList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBoundObjectString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_boundObjectList_2D_element::getter_mBoundObjectString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_boundObjectList_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@boundObjectList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boundObjectList_2D_element ("boundObjectList-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boundObjectList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boundObjectList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boundObjectList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  const GALGAS_boundObjectList_2D_element * p = (const GALGAS_boundObjectList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boundObjectList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boundObjectList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element::~ GALGAS_regularBindingsGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_boundObjectList & inOperand2,
                                                                                                  const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectList (inOperand2),
mProperty_mBindingOptionsString (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_string::constructor_default (HERE),
                                                          GALGAS_boundObjectList::constructor_emptyList (HERE),
                                                          GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_boundObjectList & inOperand2,
                                                                                                                  const GALGAS_string & inOperand3 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_regularBindingsGenerationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_regularBindingsGenerationList_2D_element::objectCompare (const GALGAS_regularBindingsGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectList.objectCompare (inOperand.mProperty_mBoundObjectList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingOptionsString.objectCompare (inOperand.mProperty_mBindingOptionsString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_regularBindingsGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @regularBindingsGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundObjectList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingOptionsString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_regularBindingsGenerationList_2D_element::getter_mBoundObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingOptionsString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingOptionsString ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@regularBindingsGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ("regularBindingsGenerationList-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_regularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  const GALGAS_regularBindingsGenerationList_2D_element * p = (const GALGAS_regularBindingsGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingsGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (void) :
mProperty_mOutletName (),
mProperty_mTargetName (),
mProperty_mActionName (),
mProperty_mTargetTypeName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element::~ GALGAS_actionBindingListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2,
                                                                                                    const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mActionName (inOperand2),
mProperty_mTargetTypeName (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                    const GALGAS_string & inOperand3 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_actionBindingListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actionBindingListForGeneration_2D_element::objectCompare (const GALGAS_actionBindingListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionName.objectCompare (inOperand.mProperty_mActionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetTypeName.objectCompare (inOperand.mProperty_mTargetTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actionBindingListForGeneration_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mTargetName.isValid () && mProperty_mActionName.isValid () && mProperty_mTargetTypeName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mActionName.drop () ;
  mProperty_mTargetTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @actionBindingListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mTargetTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetTypeName ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@actionBindingListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ("actionBindingListForGeneration-element",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionBindingListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  const GALGAS_actionBindingListForGeneration_2D_element * p = (const GALGAS_actionBindingListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionBindingListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (void) :
mProperty_mObservableProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element::~ GALGAS_observablePropertyList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & inOperand0) :
mProperty_mObservableProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_observablePropertyList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_observablePropertyList_2D_element::objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mObservableProperty.objectCompare (inOperand.mProperty_mObservableProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyList_2D_element::isValid (void) const {
  return mProperty_mObservableProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList_2D_element::drop (void) {
  mProperty_mObservableProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @observablePropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mObservableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyList_2D_element::getter_mObservableProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservableProperty ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@observablePropertyList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyList_2D_element ("observablePropertyList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  const GALGAS_observablePropertyList_2D_element * p = (const GALGAS_observablePropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element::GALGAS_transientPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element::~ GALGAS_transientPropertyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element::GALGAS_transientPropertyGenerationList_2D_element (const GALGAS_transientPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element GALGAS_transientPropertyGenerationList_2D_element::constructor_new (const GALGAS_transientPropertyGeneration & inOperand0 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_transientPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientPropertyGenerationList_2D_element::objectCompare (const GALGAS_transientPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_transientPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@transientPropertyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ("transientPropertyGenerationList-element",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (void) :
mProperty_mDependency (),
mProperty_mFunctionArgumentName (),
mProperty_mFunctionArgumentTypeString () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration_2D_element::~ GALGAS_transientDependencyListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_string & inOperand2) :
mProperty_mDependency (inOperand0),
mProperty_mFunctionArgumentName (inOperand1),
mProperty_mFunctionArgumentTypeString (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration_2D_element GALGAS_transientDependencyListForGeneration_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_transientDependencyListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientDependencyListForGeneration_2D_element::objectCompare (const GALGAS_transientDependencyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDependency.objectCompare (inOperand.mProperty_mDependency) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionArgumentName.objectCompare (inOperand.mProperty_mFunctionArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionArgumentTypeString.objectCompare (inOperand.mProperty_mFunctionArgumentTypeString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_transientDependencyListForGeneration_2D_element::isValid (void) const {
  return mProperty_mDependency.isValid () && mProperty_mFunctionArgumentName.isValid () && mProperty_mFunctionArgumentTypeString.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration_2D_element::drop (void) {
  mProperty_mDependency.drop () ;
  mProperty_mFunctionArgumentName.drop () ;
  mProperty_mFunctionArgumentTypeString.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @transientDependencyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDependency.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionArgumentTypeString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_transientDependencyListForGeneration_2D_element::getter_mDependency (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependency ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::getter_mFunctionArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionArgumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::getter_mFunctionArgumentTypeString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionArgumentTypeString ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@transientDependencyListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ("transientDependencyListForGeneration-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientDependencyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientDependencyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDependencyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration_2D_element GALGAS_transientDependencyListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration_2D_element result ;
  const GALGAS_transientDependencyListForGeneration_2D_element * p = (const GALGAS_transientDependencyListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDependencyListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDependencyListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element::GALGAS_toManyProxyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element::~ GALGAS_toManyProxyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element::GALGAS_toManyProxyGenerationList_2D_element (const GALGAS_toManyProxyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element GALGAS_toManyProxyGenerationList_2D_element::constructor_new (const GALGAS_toManyProxyGeneration & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyProxyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyProxyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyProxyGenerationList_2D_element::objectCompare (const GALGAS_toManyProxyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyProxyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @toManyProxyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@toManyProxyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyProxyGenerationList_2D_element ("toManyProxyGenerationList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyProxyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyProxyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element GALGAS_toManyProxyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGenerationList_2D_element result ;
  const GALGAS_toManyProxyGenerationList_2D_element * p = (const GALGAS_toManyProxyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyProxyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element::GALGAS_atomicProxyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element::~ GALGAS_atomicProxyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element::GALGAS_atomicProxyGenerationList_2D_element (const GALGAS_atomicProxyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element GALGAS_atomicProxyGenerationList_2D_element::constructor_new (const GALGAS_atomicProxyGeneration & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_atomicProxyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicProxyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicProxyGenerationList_2D_element::objectCompare (const GALGAS_atomicProxyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_atomicProxyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @atomicProxyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@atomicProxyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicProxyGenerationList_2D_element ("atomicProxyGenerationList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicProxyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicProxyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element GALGAS_atomicProxyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGenerationList_2D_element result ;
  const GALGAS_atomicProxyGenerationList_2D_element * p = (const GALGAS_atomicProxyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicProxyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element::GALGAS_atomicPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element::~ GALGAS_atomicPropertyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element::GALGAS_atomicPropertyGenerationList_2D_element (const GALGAS_atomicPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element GALGAS_atomicPropertyGenerationList_2D_element::constructor_new (const GALGAS_atomicPropertyGeneration & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicPropertyGenerationList_2D_element::objectCompare (const GALGAS_atomicPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_atomicPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @atomicPropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@atomicPropertyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ("atomicPropertyGenerationList-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element GALGAS_atomicPropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList_2D_element result ;
  const GALGAS_atomicPropertyGenerationList_2D_element * p = (const GALGAS_atomicPropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element::GALGAS_toManyPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element::~ GALGAS_toManyPropertyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element::GALGAS_toManyPropertyGenerationList_2D_element (const GALGAS_toManyPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element GALGAS_toManyPropertyGenerationList_2D_element::constructor_new (const GALGAS_toManyPropertyGeneration & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyPropertyGenerationList_2D_element::objectCompare (const GALGAS_toManyPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @toManyPropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@toManyPropertyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ("toManyPropertyGenerationList-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element GALGAS_toManyPropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList_2D_element result ;
  const GALGAS_toManyPropertyGenerationList_2D_element * p = (const GALGAS_toManyPropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyPropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (void) :
mProperty_mObjectTypeName (),
mProperty_mModelName (),
mProperty_mModelTypeName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element::~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mProperty_mObjectTypeName (inOperand0),
mProperty_mModelName (inOperand1),
mProperty_mModelTypeName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_validationStubRoutineListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_validationStubRoutineListForGeneration_2D_element::objectCompare (const GALGAS_validationStubRoutineListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mObjectTypeName.objectCompare (inOperand.mProperty_mObjectTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelName.objectCompare (inOperand.mProperty_mModelName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelTypeName.objectCompare (inOperand.mProperty_mModelTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_validationStubRoutineListForGeneration_2D_element::isValid (void) const {
  return mProperty_mObjectTypeName.isValid () && mProperty_mModelName.isValid () && mProperty_mModelTypeName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration_2D_element::drop (void) {
  mProperty_mObjectTypeName.drop () ;
  mProperty_mModelName.drop () ;
  mProperty_mModelTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @validationStubRoutineListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mObjectTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mObjectTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@validationStubRoutineListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ("validationStubRoutineListForGeneration-element",
                                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration_2D_element result ;
  const GALGAS_validationStubRoutineListForGeneration_2D_element * p = (const GALGAS_validationStubRoutineListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_validationStubRoutineListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList_2D_element::~ GALGAS_multipleBindingGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectExpression (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList_2D_element GALGAS_multipleBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_multipleBindingGenerationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_multipleBindingGenerationList_2D_element::objectCompare (const GALGAS_multipleBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectExpression.objectCompare (inOperand.mProperty_mBoundObjectExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @multipleBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList_2D_element::getter_mBoundObjectExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectExpression ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@multipleBindingGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ("multipleBindingGenerationList-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList_2D_element GALGAS_multipleBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList_2D_element result ;
  const GALGAS_multipleBindingGenerationList_2D_element * p = (const GALGAS_multipleBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mColumnOutletTypeName (),
mProperty_mRunAction (),
mProperty_mRegularBindingsGenerationList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::~ GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                                      const GALGAS_regularBindingsGenerationList & inOperand3) :
mProperty_mColumnName (inOperand0),
mProperty_mColumnOutletTypeName (inOperand1),
mProperty_mRunAction (inOperand2),
mProperty_mRegularBindingsGenerationList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                                                      const GALGAS_regularBindingsGenerationList & inOperand3 
                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::objectCompare (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mColumnName.objectCompare (inOperand.mProperty_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mColumnOutletTypeName.objectCompare (inOperand.mProperty_mColumnOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRunAction.objectCompare (inOperand.mProperty_mRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (inOperand.mProperty_mRegularBindingsGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mColumnOutletTypeName.isValid () && mProperty_mRunAction.isValid () && mProperty_mRegularBindingsGenerationList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mColumnOutletTypeName.drop () ;
  mProperty_mRunAction.drop () ;
  mProperty_mRegularBindingsGenerationList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "<struct @tableViewControllerBoundColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mColumnOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnOutletTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunAction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerBoundColumnListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element ("tableViewControllerBoundColumnListForGeneration-element",
                                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element result ;
  const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element * p = (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerBoundColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mSortPropertyKind (),
mProperty_mObservablePropertyForSorting () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::~ GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_propertyKind & inOperand1,
                                                                                                                                        const GALGAS_string & inOperand2) :
mProperty_mColumnName (inOperand0),
mProperty_mSortPropertyKind (inOperand1),
mProperty_mObservablePropertyForSorting (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                        const GALGAS_propertyKind & inOperand1,
                                                                                                                                                        const GALGAS_string & inOperand2 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::objectCompare (const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mColumnName.objectCompare (inOperand.mProperty_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSortPropertyKind.objectCompare (inOperand.mProperty_mSortPropertyKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObservablePropertyForSorting.objectCompare (inOperand.mProperty_mObservablePropertyForSorting) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mSortPropertyKind.isValid () && mProperty_mObservablePropertyForSorting.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mSortPropertyKind.drop () ;
  mProperty_mObservablePropertyForSorting.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @tableViewControllerSortedColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSortPropertyKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObservablePropertyForSorting.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mSortPropertyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortPropertyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mObservablePropertyForSorting (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservablePropertyForSorting ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerSortedColumnListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ("tableViewControllerSortedColumnListForGeneration-element",
                                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element result ;
  const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element * p = (const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerSortedColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (void) :
mProperty_mEditable (),
mProperty_mSortPropertyName (),
mProperty_mDisplayedPropertyName (),
mProperty_mColumnObjectTypeName (),
mProperty_mRunAction (),
mProperty_mActualParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::~ GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (const GALGAS_bool & inOperand0,
                                                                                                                                                          const GALGAS_string & inOperand1,
                                                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                                                          const GALGAS_string & inOperand3,
                                                                                                                                                          const GALGAS_string & inOperand4,
                                                                                                                                                          const GALGAS__32_stringlist & inOperand5) :
mProperty_mEditable (inOperand0),
mProperty_mSortPropertyName (inOperand1),
mProperty_mDisplayedPropertyName (inOperand2),
mProperty_mColumnObjectTypeName (inOperand3),
mProperty_mRunAction (inOperand4),
mProperty_mActualParameterList (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (GALGAS_bool::constructor_default (HERE),
                                                                                      GALGAS_string::constructor_default (HERE),
                                                                                      GALGAS_string::constructor_default (HERE),
                                                                                      GALGAS_string::constructor_default (HERE),
                                                                                      GALGAS_string::constructor_default (HERE),
                                                                                      GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                                                                          const GALGAS_string & inOperand1,
                                                                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                                                                          const GALGAS_string & inOperand3,
                                                                                                                                                                          const GALGAS_string & inOperand4,
                                                                                                                                                                          const GALGAS__32_stringlist & inOperand5 
                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::objectCompare (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEditable.objectCompare (inOperand.mProperty_mEditable) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSortPropertyName.objectCompare (inOperand.mProperty_mSortPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDisplayedPropertyName.objectCompare (inOperand.mProperty_mDisplayedPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mColumnObjectTypeName.objectCompare (inOperand.mProperty_mColumnObjectTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRunAction.objectCompare (inOperand.mProperty_mRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActualParameterList.objectCompare (inOperand.mProperty_mActualParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mEditable.isValid () && mProperty_mSortPropertyName.isValid () && mProperty_mDisplayedPropertyName.isValid () && mProperty_mColumnObjectTypeName.isValid () && mProperty_mRunAction.isValid () && mProperty_mActualParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::drop (void) {
  mProperty_mEditable.drop () ;
  mProperty_mSortPropertyName.drop () ;
  mProperty_mDisplayedPropertyName.drop () ;
  mProperty_mColumnObjectTypeName.drop () ;
  mProperty_mRunAction.drop () ;
  mProperty_mActualParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                               const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutTableViewControllerBoundColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEditable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSortPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDisplayedPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mColumnObjectTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::getter_mEditable (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEditable ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::getter_mSortPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::getter_mDisplayedPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDisplayedPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::getter_mColumnObjectTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnObjectTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::getter_mRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunAction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerBoundColumnListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element ("autoLayoutTableViewControllerBoundColumnListForGeneration-element",
                                                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element result ;
  const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element * p = (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mSortPropertyKind (),
mProperty_mObservablePropertyForSorting () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::~ GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                                            const GALGAS_propertyKind & inOperand1,
                                                                                                                                                            const GALGAS_string & inOperand2) :
mProperty_mColumnName (inOperand0),
mProperty_mSortPropertyKind (inOperand1),
mProperty_mObservablePropertyForSorting (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                                            const GALGAS_propertyKind & inOperand1,
                                                                                                                                                                            const GALGAS_string & inOperand2 
                                                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::objectCompare (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mColumnName.objectCompare (inOperand.mProperty_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSortPropertyKind.objectCompare (inOperand.mProperty_mSortPropertyKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObservablePropertyForSorting.objectCompare (inOperand.mProperty_mObservablePropertyForSorting) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mSortPropertyKind.isValid () && mProperty_mObservablePropertyForSorting.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mSortPropertyKind.drop () ;
  mProperty_mObservablePropertyForSorting.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                                const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutTableViewControllerSortedColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSortPropertyKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObservablePropertyForSorting.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::getter_mSortPropertyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortPropertyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::getter_mObservablePropertyForSorting (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservablePropertyForSorting ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerSortedColumnListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element ("autoLayoutTableViewControllerSortedColumnListForGeneration-element",
                                                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element result ;
  const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element * p = (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerSortedColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (void) :
mProperty_mOwnerName (),
mProperty_mSelectionControllerName (),
mProperty_mBoundControllerName (),
mProperty_mBoundControllerPropertyName (),
mProperty_mBaseTypeName (),
mProperty_mSelectionTypeName (),
mProperty_mSelectionObservablePropertyMap (),
mProperty_mPropertyGenerationList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element::~ GALGAS_selectionControllerForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_string & inOperand2,
                                                                                                        const GALGAS_string & inOperand3,
                                                                                                        const GALGAS_string & inOperand4,
                                                                                                        const GALGAS_string & inOperand5,
                                                                                                        const GALGAS_propertyMap & inOperand6,
                                                                                                        const GALGAS_propertyGenerationList & inOperand7) :
mProperty_mOwnerName (inOperand0),
mProperty_mSelectionControllerName (inOperand1),
mProperty_mBoundControllerName (inOperand2),
mProperty_mBoundControllerPropertyName (inOperand3),
mProperty_mBaseTypeName (inOperand4),
mProperty_mSelectionTypeName (inOperand5),
mProperty_mSelectionObservablePropertyMap (inOperand6),
mProperty_mPropertyGenerationList (inOperand7) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_propertyMap::constructor_emptyMap (HERE),
                                                             GALGAS_propertyGenerationList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_string & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4,
                                                                                                                        const GALGAS_string & inOperand5,
                                                                                                                        const GALGAS_propertyMap & inOperand6,
                                                                                                                        const GALGAS_propertyGenerationList & inOperand7 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_selectionControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selectionControllerForGeneration_2D_element::objectCompare (const GALGAS_selectionControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOwnerName.objectCompare (inOperand.mProperty_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionControllerName.objectCompare (inOperand.mProperty_mSelectionControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundControllerName.objectCompare (inOperand.mProperty_mBoundControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundControllerPropertyName.objectCompare (inOperand.mProperty_mBoundControllerPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBaseTypeName.objectCompare (inOperand.mProperty_mBaseTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionTypeName.objectCompare (inOperand.mProperty_mSelectionTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionObservablePropertyMap.objectCompare (inOperand.mProperty_mSelectionObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyGenerationList.objectCompare (inOperand.mProperty_mPropertyGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_selectionControllerForGeneration_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mSelectionControllerName.isValid () && mProperty_mBoundControllerName.isValid () && mProperty_mBoundControllerPropertyName.isValid () && mProperty_mBaseTypeName.isValid () && mProperty_mSelectionTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration_2D_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mSelectionControllerName.drop () ;
  mProperty_mBoundControllerName.drop () ;
  mProperty_mBoundControllerPropertyName.drop () ;
  mProperty_mBaseTypeName.drop () ;
  mProperty_mSelectionTypeName.drop () ;
  mProperty_mSelectionObservablePropertyMap.drop () ;
  mProperty_mPropertyGenerationList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @selectionControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundControllerPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundControllerPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionObservablePropertyMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_selectionControllerForGeneration_2D_element::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyGenerationList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@selectionControllerForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ("selectionControllerForGeneration-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  const GALGAS_selectionControllerForGeneration_2D_element * p = (const GALGAS_selectionControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (void) :
mProperty_mType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element::~ GALGAS_typeKindList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (const GALGAS_typeKind & inOperand0) :
mProperty_mType (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeKindList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeKindList_2D_element::objectCompare (const GALGAS_typeKindList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList_2D_element::drop (void) {
  mProperty_mType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @typeKindList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKindList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@typeKindList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList_2D_element ("typeKindList-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKindList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKindList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  const GALGAS_typeKindList_2D_element * p = (const GALGAS_typeKindList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKindList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element::~ GALGAS_propertyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (const GALGAS_propertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element GALGAS_propertyGenerationList_2D_element::constructor_new (const GALGAS_propertyGeneration & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_propertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyGenerationList_2D_element::objectCompare (const GALGAS_propertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @propertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGeneration GALGAS_propertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@propertyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ("propertyGenerationList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element GALGAS_propertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyGenerationList_2D_element result ;
  const GALGAS_propertyGenerationList_2D_element * p = (const GALGAS_propertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (void) :
mProperty_mTypeName (),
mProperty_mIsClass () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element::~ GALGAS_transientExternTypeList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_bool & inOperand1) :
mProperty_mTypeName (inOperand0),
mProperty_mIsClass (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientExternTypeList_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_bool & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientExternTypeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_transientExternTypeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientExternTypeList_2D_element::objectCompare (const GALGAS_transientExternTypeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsClass.objectCompare (inOperand.mProperty_mIsClass) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_transientExternTypeList_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mIsClass.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mIsClass.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @transientExternTypeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsClass.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_transientExternTypeList_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientExternTypeList_2D_element::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsClass ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@transientExternTypeList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ("transientExternTypeList-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientExternTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientExternTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientExternTypeList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientExternTypeList_2D_element result ;
  const GALGAS_transientExternTypeList_2D_element * p = (const GALGAS_transientExternTypeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientExternTypeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientExternTypeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (void) :
mProperty_mFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element::~ GALGAS_fileGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (const GALGAS_abstractFileGeneration & inOperand0) :
mProperty_mFileGeneration (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element GALGAS_fileGenerationList_2D_element::constructor_new (const GALGAS_abstractFileGeneration & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fileGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fileGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fileGenerationList_2D_element::objectCompare (const GALGAS_fileGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileGeneration.objectCompare (inOperand.mProperty_mFileGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fileGenerationList_2D_element::isValid (void) const {
  return mProperty_mFileGeneration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList_2D_element::drop (void) {
  mProperty_mFileGeneration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @fileGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFileGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration GALGAS_fileGenerationList_2D_element::getter_mFileGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileGeneration ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@fileGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fileGenerationList_2D_element ("fileGenerationList-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fileGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fileGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element GALGAS_fileGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_fileGenerationList_2D_element result ;
  const GALGAS_fileGenerationList_2D_element * p = (const GALGAS_fileGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fileGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_stringlist & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_XCodeGroupList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_XCodeGroupList_2D_element::objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGroupReference.objectCompare (inOperand.mProperty_mGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupName.objectCompare (inOperand.mProperty_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupPath.objectCompare (inOperand.mProperty_mGroupPath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mChildrenRefs.objectCompare (inOperand.mProperty_mChildrenRefs) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @XCodeGroupList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupPath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeGroupList_2D_element::getter_mChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mChildrenRefs ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeGroupList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  const GALGAS_XCodeGroupList_2D_element * p = (const GALGAS_XCodeGroupList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeGroupList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_stringlist & inOperand4,
                                                                              const GALGAS_string & inOperand5,
                                                                              const GALGAS_string & inOperand6,
                                                                              const GALGAS_stringlist & inOperand7,
                                                                              const GALGAS_string & inOperand8,
                                                                              const GALGAS_stringlist & inOperand9,
                                                                              const GALGAS_string & inOperand10) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
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
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_XCodeToolTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_XCodeToolTargetList_2D_element::objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetRef.objectCompare (inOperand.mProperty_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileReference.objectCompare (inOperand.mProperty_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileName.objectCompare (inOperand.mProperty_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRefList.objectCompare (inOperand.mProperty_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRef.objectCompare (inOperand.mProperty_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationListRef.objectCompare (inOperand.mProperty_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationSettingList.objectCompare (inOperand.mProperty_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationRef.objectCompare (inOperand.mProperty_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworksFileRefList.objectCompare (inOperand.mProperty_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkBuildPhaseRef.objectCompare (inOperand.mProperty_mFrameworkBuildPhaseRef) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @XCodeToolTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationListRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworksFileRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkBuildPhaseRef ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeToolTargetList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  const GALGAS_XCodeToolTargetList_2D_element * p = (const GALGAS_XCodeToolTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeToolTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

