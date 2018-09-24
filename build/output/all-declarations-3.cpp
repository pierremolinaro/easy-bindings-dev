#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-3.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@arrayControllerAttributListAST' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerAttributListAST : public cCollectionElement {
  public : GALGAS_arrayControllerAttributListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                              const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerAttributListAST (const GALGAS_arrayControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerAttributListAST::cCollectionElement_arrayControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                                      const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerAttributListAST::cCollectionElement_arrayControllerAttributListAST (const GALGAS_arrayControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerAttributListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerAttributListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerAttributListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerAttributListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeValue" ":" ;
  mObject.mProperty_mAttributeValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerAttributListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerAttributListAST * operand = (cCollectionElement_arrayControllerAttributListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerAttributListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST::GALGAS_arrayControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST::GALGAS_arrayControllerAttributListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerAttributListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_abstractDefaultValue & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerAttributListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerAttributListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_lstring & in_mAttributeName,
                                                                       const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerAttributListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (in_mAttributeName,
                                                                    in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_abstractDefaultValue & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::setter_append (GALGAS_arrayControllerAttributListAST_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_abstractDefaultValue inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                  GALGAS_abstractDefaultValue & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
      outOperand0 = p->mObject.mProperty_mAttributeName ;
      outOperand1 = p->mObject.mProperty_mAttributeValue ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                             GALGAS_abstractDefaultValue & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                            GALGAS_abstractDefaultValue & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::method_first (GALGAS_lstring & outOperand0,
                                                          GALGAS_abstractDefaultValue & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::method_last (GALGAS_lstring & outOperand0,
                                                         GALGAS_abstractDefaultValue & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::add_operation (const GALGAS_arrayControllerAttributListAST & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result = GALGAS_arrayControllerAttributListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result = GALGAS_arrayControllerAttributListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result = GALGAS_arrayControllerAttributListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST::plusAssign_operation (const GALGAS_arrayControllerAttributListAST inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerAttributListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_arrayControllerAttributListAST::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerAttributListAST::cEnumerator_arrayControllerAttributListAST (const GALGAS_arrayControllerAttributListAST & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST_2D_element cEnumerator_arrayControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_arrayControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cEnumerator_arrayControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @arrayControllerAttributListAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerAttributListAST ("arrayControllerAttributListAST",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerAttributListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerAttributListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST result ;
  const GALGAS_arrayControllerAttributListAST * p = (const GALGAS_arrayControllerAttributListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_arrayControllerPropertyGeneration::objectCompare (const GALGAS_arrayControllerPropertyGeneration & inOperand) const {
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

GALGAS_arrayControllerPropertyGeneration::GALGAS_arrayControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayControllerPropertyGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerPropertyGeneration::GALGAS_arrayControllerPropertyGeneration (const cPtr_arrayControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerPropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerPropertyGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerPropertyGeneration * p = (const cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    result = p->mProperty_mModelString ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerPropertyGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerPropertyGeneration * p = (const cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @arrayControllerPropertyGeneration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                const GALGAS_string & in_mModelString,
                                                                                const GALGAS_string & in_mOwnerName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mModelString (in_mModelString),
mProperty_mOwnerName (in_mOwnerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_arrayControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @arrayControllerPropertyGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ("arrayControllerPropertyGeneration",
                                                          & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind::GALGAS_arrayControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_entityArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_entityArray ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_classArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_classArray ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_transientArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_transientArray ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_arrayControllerModelKind [4] = {
  "(not built)",
  "entityArray",
  "classArray",
  "transientArray"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityArray == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isClassArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classArray == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientArray == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerModelKind::description (C_String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString << "<enum @arrayControllerModelKind: " << gEnumNameArrayFor_arrayControllerModelKind [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @arrayControllerModelKind type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModelKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerModelKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Class for element of '@arrayControllerFilterListForGeneration' list                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerFilterListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerFilterListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_string & in_mFilterPropertyName,
                                                                      const GALGAS_propertyKind & in_mFilterPropertyKind
                                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_arrayControllerFilterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerFilterListForGeneration::cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_string & in_mFilterPropertyName,
                                                                                                                      const GALGAS_propertyKind & in_mFilterPropertyKind
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilterPropertyName, in_mFilterPropertyKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerFilterListForGeneration::cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_arrayControllerFilterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFilterPropertyName, inElement.mProperty_mFilterPropertyKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerFilterListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerFilterListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerFilterListForGeneration (mObject.mProperty_mFilterPropertyName, mObject.mProperty_mFilterPropertyKind COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerFilterListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilterPropertyName" ":" ;
  mObject.mProperty_mFilterPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilterPropertyKind" ":" ;
  mObject.mProperty_mFilterPropertyKind.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerFilterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerFilterListForGeneration * operand = (cCollectionElement_arrayControllerFilterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration::GALGAS_arrayControllerFilterListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration::GALGAS_arrayControllerFilterListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerFilterListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_propertyKind & inOperand1
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerFilterListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerFilterListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_string & in_mFilterPropertyName,
                                                                               const GALGAS_propertyKind & in_mFilterPropertyKind
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerFilterListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (in_mFilterPropertyName,
                                                                            in_mFilterPropertyKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                         const GALGAS_propertyKind & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::setter_append (GALGAS_arrayControllerFilterListForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                          const GALGAS_propertyKind inOperand1,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                          GALGAS_propertyKind & outOperand1,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mFilterPropertyName ;
      outOperand1 = p->mObject.mProperty_mFilterPropertyKind ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                     GALGAS_propertyKind & outOperand1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilterPropertyName ;
    outOperand1 = p->mObject.mProperty_mFilterPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                    GALGAS_propertyKind & outOperand1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilterPropertyName ;
    outOperand1 = p->mObject.mProperty_mFilterPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                  GALGAS_propertyKind & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilterPropertyName ;
    outOperand1 = p->mObject.mProperty_mFilterPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                 GALGAS_propertyKind & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilterPropertyName ;
    outOperand1 = p->mObject.mProperty_mFilterPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::add_operation (const GALGAS_arrayControllerFilterListForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration::plusAssign_operation (const GALGAS_arrayControllerFilterListForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerFilterListForGeneration::getter_mFilterPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    result = p->mObject.mProperty_mFilterPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_arrayControllerFilterListForGeneration::getter_mFilterPropertyKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    result = p->mObject.mProperty_mFilterPropertyKind ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerFilterListForGeneration::cEnumerator_arrayControllerFilterListForGeneration (const GALGAS_arrayControllerFilterListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element cEnumerator_arrayControllerFilterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerFilterListForGeneration::current_mFilterPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject.mProperty_mFilterPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cEnumerator_arrayControllerFilterListForGeneration::current_mFilterPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject.mProperty_mFilterPropertyKind ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @arrayControllerFilterListForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration ("arrayControllerFilterListForGeneration",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerFilterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerFilterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerFilterListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration result ;
  const GALGAS_arrayControllerFilterListForGeneration * p = (const GALGAS_arrayControllerFilterListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerFilterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerFilterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Class for element of '@arrayControllerBoundColumnListForGeneration' list                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerBoundColumnListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerBoundColumnListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                           const GALGAS_string & in_mColumnOutletTypeName,
                                                                           const GALGAS_string & in_mRunAction,
                                                                           const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerBoundColumnListForGeneration::cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                const GALGAS_string & in_mColumnOutletTypeName,
                                                                                                                                const GALGAS_string & in_mRunAction,
                                                                                                                                const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mRunAction, in_mRegularBindingsGenerationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerBoundColumnListForGeneration::cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mColumnOutletTypeName, inElement.mProperty_mRunAction, inElement.mProperty_mRegularBindingsGenerationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerBoundColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerBoundColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerBoundColumnListForGeneration (mObject.mProperty_mColumnName, mObject.mProperty_mColumnOutletTypeName, mObject.mProperty_mRunAction, mObject.mProperty_mRegularBindingsGenerationList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerBoundColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerBoundColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerBoundColumnListForGeneration * operand = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration::GALGAS_arrayControllerBoundColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration::GALGAS_arrayControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBoundColumnListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                                  const GALGAS_regularBindingsGenerationList & inOperand3
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerBoundColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                    const GALGAS_string & in_mColumnName,
                                                                                    const GALGAS_string & in_mColumnOutletTypeName,
                                                                                    const GALGAS_string & in_mRunAction,
                                                                                    const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (in_mColumnName,
                                                                                 in_mColumnOutletTypeName,
                                                                                 in_mRunAction,
                                                                                 in_mRegularBindingsGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_regularBindingsGenerationList & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::setter_append (GALGAS_arrayControllerBoundColumnListForGeneration_2D_element inElement,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                               const GALGAS_string inOperand1,
                                                                               const GALGAS_string inOperand2,
                                                                               const GALGAS_regularBindingsGenerationList inOperand3,
                                                                               const GALGAS_uint inInsertionIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                               GALGAS_string & outOperand1,
                                                                               GALGAS_string & outOperand2,
                                                                               GALGAS_regularBindingsGenerationList & outOperand3,
                                                                               const GALGAS_uint inRemoveIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mColumnName ;
      outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
      outOperand2 = p->mObject.mProperty_mRunAction ;
      outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          GALGAS_regularBindingsGenerationList & outOperand3,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                         GALGAS_string & outOperand1,
                                                                         GALGAS_string & outOperand2,
                                                                         GALGAS_regularBindingsGenerationList & outOperand3,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                       GALGAS_string & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_regularBindingsGenerationList & outOperand3,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                      GALGAS_string & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      GALGAS_regularBindingsGenerationList & outOperand3,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::add_operation (const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand,
                                                                                                                      C_Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration::plusAssign_operation (const GALGAS_arrayControllerBoundColumnListForGeneration inOperand,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnOutletTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRunAction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_arrayControllerBoundColumnListForGeneration::getter_mRegularBindingsGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerBoundColumnListForGeneration::cEnumerator_arrayControllerBoundColumnListForGeneration (const GALGAS_arrayControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element cEnumerator_arrayControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList cEnumerator_arrayControllerBoundColumnListForGeneration::current_mRegularBindingsGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRegularBindingsGenerationList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @arrayControllerBoundColumnListForGeneration type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration ("arrayControllerBoundColumnListForGeneration",
                                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  const GALGAS_arrayControllerBoundColumnListForGeneration * p = (const GALGAS_arrayControllerBoundColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Class for element of '@arrayControllerSortedColumnListForGeneration' list                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerSortedColumnListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerSortedColumnListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                            const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                            const GALGAS_string & in_mObservablePropertyForSorting
                                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerSortedColumnListForGeneration (const GALGAS_arrayControllerSortedColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerSortedColumnListForGeneration::cCollectionElement_arrayControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                  const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                                                                  const GALGAS_string & in_mObservablePropertyForSorting
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mSortPropertyKind, in_mObservablePropertyForSorting) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerSortedColumnListForGeneration::cCollectionElement_arrayControllerSortedColumnListForGeneration (const GALGAS_arrayControllerSortedColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mSortPropertyKind, inElement.mProperty_mObservablePropertyForSorting) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerSortedColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerSortedColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerSortedColumnListForGeneration (mObject.mProperty_mColumnName, mObject.mProperty_mSortPropertyKind, mObject.mProperty_mObservablePropertyForSorting COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerSortedColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerSortedColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerSortedColumnListForGeneration * operand = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration::GALGAS_arrayControllerSortedColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration::GALGAS_arrayControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerSortedColumnListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_propertyKind & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_arrayControllerSortedColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerSortedColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_string & in_mColumnName,
                                                                                     const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                     const GALGAS_string & in_mObservablePropertyForSorting
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (in_mColumnName,
                                                                                  in_mSortPropertyKind,
                                                                                  in_mObservablePropertyForSorting COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                               const GALGAS_propertyKind & inOperand1,
                                                                               const GALGAS_string & inOperand2
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::setter_append (GALGAS_arrayControllerSortedColumnListForGeneration_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                const GALGAS_propertyKind inOperand1,
                                                                                const GALGAS_string inOperand2,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                GALGAS_propertyKind & outOperand1,
                                                                                GALGAS_string & outOperand2,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mColumnName ;
      outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
      outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                           GALGAS_propertyKind & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                          GALGAS_propertyKind & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                        GALGAS_propertyKind & outOperand1,
                                                                        GALGAS_string & outOperand2,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                       GALGAS_propertyKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::add_operation (const GALGAS_arrayControllerSortedColumnListForGeneration & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration::plusAssign_operation (const GALGAS_arrayControllerSortedColumnListForGeneration inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerSortedColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_arrayControllerSortedColumnListForGeneration::getter_mSortPropertyKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mSortPropertyKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerSortedColumnListForGeneration::getter_mObservablePropertyForSortingAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerSortedColumnListForGeneration::cEnumerator_arrayControllerSortedColumnListForGeneration (const GALGAS_arrayControllerSortedColumnListForGeneration & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element cEnumerator_arrayControllerSortedColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerSortedColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cEnumerator_arrayControllerSortedColumnListForGeneration::current_mSortPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mSortPropertyKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerSortedColumnListForGeneration::current_mObservablePropertyForSorting (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mObservablePropertyForSorting ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @arrayControllerSortedColumnListForGeneration type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration ("arrayControllerSortedColumnListForGeneration",
                                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerSortedColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerSortedColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerSortedColumnListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  const GALGAS_arrayControllerSortedColumnListForGeneration * p = (const GALGAS_arrayControllerSortedColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerSortedColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerSortedColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension Getter '@arrayControllerFilterListForGeneration filterCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_filterCode (const GALGAS_arrayControllerFilterListForGeneration & inObject,
                                          const GALGAS_string & constinArgument_inFilterFunction,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerFilterListForGeneration temp_0 = inObject ;
  GALGAS_arrayControllerFilterListForGeneration var_filterProperties_28468 = temp_0 ;
  GALGAS_string var_firstFilterProperty_28531 ;
  {
  GALGAS_propertyKind joker_28533 ; // Joker input parameter
  var_filterProperties_28468.setter_popFirst (var_firstFilterProperty_28531, joker_28533, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 758)) ;
  }
  GALGAS_string var_indent_28552 = GALGAS_string ("            ") ;
  result_outResult = var_indent_28552.add_operation (GALGAS_string ("switch object."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 760)).add_operation (var_firstFilterProperty_28531, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 760)).add_operation (GALGAS_string ("_property_selection {\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 760)) ;
  result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("case .empty :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 761)) ;
  result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 762)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 762)) ;
  result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("case .multiple :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 763)) ;
  result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("  isMultiple = true\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 764)) ;
  result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("case .single (let v1) :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 765)) ;
  GALGAS_uint var_idx_28903 = GALGAS_uint ((uint32_t) 2U) ;
  GALGAS_string var_args_28922 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_blockEnd_28946 = var_indent_28552.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 768)) ;
  cEnumerator_arrayControllerFilterListForGeneration enumerator_28992 (var_filterProperties_28468, kENUMERATION_UP) ;
  while (enumerator_28992.hasCurrentObject ()) {
    var_indent_28552.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 770)) ;
    result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("switch object."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 771)).add_operation (enumerator_28992.current_mFilterPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 771)).add_operation (GALGAS_string ("_property_selection {\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 771)) ;
    result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("case .empty :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 772)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 772)) ;
    result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 773)) ;
    result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("case .multiple :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 774)) ;
    result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("  isMultiple = true\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 775)) ;
    result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("case .single (let v"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 776)).add_operation (var_idx_28903.getter_string (SOURCE_FILE ("array-controller.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 776)).add_operation (GALGAS_string (") :\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 776)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 776)) ;
    var_blockEnd_28946 = var_indent_28552.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 777)).add_operation (var_blockEnd_28946, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 777)) ;
    var_args_28922.plusAssign_operation(GALGAS_string (", v").add_operation (var_idx_28903.getter_string (SOURCE_FILE ("array-controller.galgas", 778)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 778)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 778)) ;
    var_idx_28903.increment_operation (inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 779)) ;
    enumerator_28992.gotoNextObject () ;
  }
  var_indent_28552.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 781)) ;
  result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("if "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 782)).add_operation (constinArgument_inFilterFunction, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 782)).add_operation (GALGAS_string (" (v1"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 782)).add_operation (var_args_28922, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 782)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 782)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 782)) ;
  result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("  filteredArray.append (object)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 783)) ;
  result_outResult.plusAssign_operation(var_indent_28552.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 784)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 784)) ;
  result_outResult.plusAssign_operation(var_blockEnd_28946, inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 785)) ;
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@defaultValueList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_defaultValueList : public cCollectionElement {
  public : GALGAS_defaultValueList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_defaultValueList (const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_defaultValueList (const GALGAS_defaultValueList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_defaultValueList::cCollectionElement_defaultValueList (const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDefaultValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_defaultValueList::cCollectionElement_defaultValueList (const GALGAS_defaultValueList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDefaultValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_defaultValueList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_defaultValueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_defaultValueList (mObject.mProperty_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_defaultValueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValue" ":" ;
  mObject.mProperty_mDefaultValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_defaultValueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_defaultValueList * operand = (cCollectionElement_defaultValueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_defaultValueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList::GALGAS_defaultValueList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList::GALGAS_defaultValueList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_defaultValueList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::constructor_listWithValue (const GALGAS_abstractDefaultValue & inOperand0
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_defaultValueList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_defaultValueList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_defaultValueList * p = NULL ;
  macroMyNew (p, cCollectionElement_defaultValueList (in_mDefaultValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::addAssign_operation (const GALGAS_abstractDefaultValue & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_defaultValueList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::setter_append (GALGAS_defaultValueList_2D_element inElement,
                                             C_Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_defaultValueList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::setter_insertAtIndex (const GALGAS_abstractDefaultValue inOperand0,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_defaultValueList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::setter_removeAtIndex (GALGAS_abstractDefaultValue & outOperand0,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
      outOperand0 = p->mObject.mProperty_mDefaultValue ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::setter_popFirst (GALGAS_abstractDefaultValue & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mProperty_mDefaultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::setter_popLast (GALGAS_abstractDefaultValue & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mProperty_mDefaultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::method_first (GALGAS_abstractDefaultValue & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mProperty_mDefaultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::method_last (GALGAS_abstractDefaultValue & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mProperty_mDefaultValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::add_operation (const GALGAS_defaultValueList & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_defaultValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_defaultValueList result = GALGAS_defaultValueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_defaultValueList result = GALGAS_defaultValueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_defaultValueList result = GALGAS_defaultValueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList::plusAssign_operation (const GALGAS_defaultValueList inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_defaultValueList::getter_mDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    result = p->mObject.mProperty_mDefaultValue ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_defaultValueList::cEnumerator_defaultValueList (const GALGAS_defaultValueList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element cEnumerator_defaultValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_defaultValueList * p = (const cCollectionElement_defaultValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cEnumerator_defaultValueList::current_mDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_defaultValueList * p = (const cCollectionElement_defaultValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
  return p->mObject.mProperty_mDefaultValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @defaultValueList type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultValueList ("defaultValueList",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_defaultValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_defaultValueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultValueList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_defaultValueList::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList result ;
  const GALGAS_defaultValueList * p = (const GALGAS_defaultValueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultValueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultValueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_listAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listAsDefaultValue * p = (const cPtr_listAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mStartLocation.objectCompare (p->mProperty_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValueList.objectCompare (p->mProperty_mDefaultValueList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_listAsDefaultValue::objectCompare (const GALGAS_listAsDefaultValue & inOperand) const {
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

GALGAS_listAsDefaultValue::GALGAS_listAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listAsDefaultValue GALGAS_listAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_listAsDefaultValue::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_defaultValueList::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listAsDefaultValue::GALGAS_listAsDefaultValue (const cPtr_listAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listAsDefaultValue GALGAS_listAsDefaultValue::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                      const GALGAS_defaultValueList & inAttribute_mDefaultValueList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_listAsDefaultValue result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mDefaultValueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listAsDefaultValue (inAttribute_mStartLocation, inAttribute_mDefaultValueList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_listAsDefaultValue::getter_mStartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_listAsDefaultValue * p = (const cPtr_listAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listAsDefaultValue) ;
    result = p->mProperty_mStartLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_listAsDefaultValue::getter_mStartLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList GALGAS_listAsDefaultValue::getter_mDefaultValueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_defaultValueList result ;
  if (NULL != mObjectPtr) {
    const cPtr_listAsDefaultValue * p = (const cPtr_listAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listAsDefaultValue) ;
    result = p->mProperty_mDefaultValueList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList cPtr_listAsDefaultValue::getter_mDefaultValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @listAsDefaultValue class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_listAsDefaultValue::cPtr_listAsDefaultValue (const GALGAS_location & in_mStartLocation,
                                                  const GALGAS_defaultValueList & in_mDefaultValueList
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mStartLocation (in_mStartLocation),
mProperty_mDefaultValueList (in_mDefaultValueList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_listAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listAsDefaultValue ;
}

void cPtr_listAsDefaultValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@listAsDefaultValue:" ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultValueList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_listAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listAsDefaultValue (mProperty_mStartLocation, mProperty_mDefaultValueList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @listAsDefaultValue type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listAsDefaultValue ("listAsDefaultValue",
                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_listAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_listAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listAsDefaultValue GALGAS_listAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listAsDefaultValue result ;
  const GALGAS_listAsDefaultValue * p = (const GALGAS_listAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType> gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeDefaultValueType (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType inMethod) {
  gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDefaultValue_analyzeDefaultValueType (void) {
  gExtensionMethodTable_abstractDefaultValue_analyzeDefaultValueType.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDefaultValue_analyzeDefaultValueType (NULL,
                                                                         freeExtensionMethod_abstractDefaultValue_analyzeDefaultValueType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                  const GALGAS_typeKindList constin_inAttributeActualTypeList,
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
      f (inObject, constin_inAttributeActualTypeList, out_outSwiftDefaultValueAsString, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Extension Getter '@typeKind isComparable'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_bool (true) ;
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




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Extension Getter '@typeKind isGraphic'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_dateType:
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
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_1092 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_isGraphic = extractPtr_1092->mAssociatedValue1 ;
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




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_typeKind & in_mTypeKind,
                                                        const GALGAS_actionMap & in_mActionMap
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTypeKind (in_mTypeKind),
mProperty_mActionMap (in_mActionMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTypeKind.isValid () && mProperty_mActionMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_mTypeKind, mProperty_mActionMap COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeKind" ":" ;
  mProperty_mTypeKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeKind.objectCompare (operand->mProperty_mTypeKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionMap.objectCompare (operand->mProperty_mActionMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap (kMapAutomatonNoIssue, "") {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton states                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton state names                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton actions                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton transitions                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton final state issues                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_typeKind inArgument0,
                                              GALGAS_actionMap inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type is already declared" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     0,
                     NULL,
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "the '%K' type is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_typeKind & outArgument0,
                                              GALGAS_actionMap & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_unifiedTypeMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mProperty_mTypeKind ;
    outArgument1 = p->mProperty_mActionMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_unifiedTypeMap::getter_mTypeKindForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mTypeKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_unifiedTypeMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_setMTypeKindForKey (GALGAS_typeKind inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_mTypeKind = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_unifiedTypeMap::current_mTypeKind (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_mTypeKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap cEnumerator_unifiedTypeMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_mActionMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @unifiedTypeMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy::GALGAS_unifiedTypeMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (GALGAS_unifiedTypeMap & ioMap,
                                                                     GALGAS_lstring inKey,
                                                                     GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                                     COMMA_LOCATION_ARGS) {
  outProxy.internalMakeOptionalProxy (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (GALGAS_unifiedTypeMap & ioMap,
                                                             GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                             COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (GALGAS_unifiedTypeMap & ioMap,
                                                                       GALGAS_string inKey,
                                                                       GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                                       COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_unifiedTypeMap_2D_proxy::getter_mTypeKind (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mTypeKind" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mTypeKind;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_unifiedTypeMap_2D_proxy::getter_mActionMap (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actionMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mActionMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mActionMap;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (const GALGAS_unifiedTypeMap & inMap,
                                                                                      const GALGAS_lstring & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedTypeMap_searchKey, inCompiler COMMA_THERE) ;
  return result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @unifiedTypeMap-proxy type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ("unifiedTypeMap-proxy",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_proxy (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  const GALGAS_unifiedTypeMap_2D_proxy * p = (const GALGAS_unifiedTypeMap_2D_proxy *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap_2D_proxy *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap-proxy", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@typeKindList' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GALGAS_typeKind & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GALGAS_typeKindList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_typeKindList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_typeKindList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typeKindList (mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_typeKindList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_typeKindList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typeKindList * operand = (cCollectionElement_typeKindList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typeKindList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList::GALGAS_typeKindList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList::GALGAS_typeKindList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList GALGAS_typeKindList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeKindList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKindList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_typeKind & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_typeKindList * p = NULL ;
  macroMyNew (p, cCollectionElement_typeKindList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKindList::addAssign_operation (const GALGAS_typeKind & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKindList::setter_append (GALGAS_typeKindList_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typeKindList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKindList::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKindList::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_typeKindList) ;
      outOperand0 = p->mObject.mProperty_mType ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList GALGAS_typeKindList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList GALGAS_typeKindList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList GALGAS_typeKindList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKindList::plusAssign_operation (const GALGAS_typeKindList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_typeKindList::cEnumerator_typeKindList (const GALGAS_typeKindList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList_2D_element cEnumerator_typeKindList::current (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_typeKindList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject.mProperty_mType ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @typeKindList type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList ("typeKindList",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeKindList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeKindList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Extension Getter '@propertyKind swiftTypeName'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_propertyKind_property * extractPtr_2157 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_2157->mAssociatedValue0 ;
      result_result = extensionGetter_swiftTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("unified-type.galgas", 65)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_2209 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_2209->mAssociatedValue0 ;
      result_result = extractedValue_typeName.getter_string (SOURCE_FILE ("unified-type.galgas", 67)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_2260 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_2260->mAssociatedValue0 ;
      result_result = extractedValue_typeName.getter_string (SOURCE_FILE ("unified-type.galgas", 69)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_2321 = (const cEnumAssociatedValues_propertyKind_arrayController *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_2321->mAssociatedValue0 ;
      result_result = extractedValue_typeName.getter_string (SOURCE_FILE ("unified-type.galgas", 71)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_2383 = (const cEnumAssociatedValues_propertyKind_selectionController *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_typeName = extractPtr_2383->mAssociatedValue0 ;
      result_result = extractedValue_typeName ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Extension Getter '@typeKind swiftTypeName'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_2923 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_entityName = extractPtr_2923->mAssociatedValue0 ;
      result_outResult = extractedValue_entityName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      const cEnumAssociatedValues_typeKind_enumType * extractPtr_2991 = (const cEnumAssociatedValues_typeKind_enumType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_enumTypeName = extractPtr_2991->mAssociatedValue0 ;
      result_outResult = extractedValue_enumTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      const cEnumAssociatedValues_typeKind_classType * extractPtr_3060 = (const cEnumAssociatedValues_typeKind_classType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_classTypeName = extractPtr_3060->mAssociatedValue0 ;
      result_outResult = extractedValue_classTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      const cEnumAssociatedValues_typeKind_transientPropertyExternType * extractPtr_3147 = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_classTypeName = extractPtr_3147->mAssociatedValue0 ;
      result_outResult = extractedValue_classTypeName ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension Getter '@propertyKind isTransient'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_propertyKind_property * extractPtr_3409 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_3409->mAssociatedValue1 ;
      result_result = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.galgas", 99)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_3483 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_3483->mAssociatedValue1 ;
      result_result = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.galgas", 100)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_3555 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_3555->mAssociatedValue1 ;
      result_result = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.galgas", 101)) ;
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




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension Getter '@propertyKind isComparable'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_propertyKind_property * extractPtr_3894 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_3894->mAssociatedValue0 ;
      result_result = extensionGetter_isComparable (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("unified-type.galgas", 111)) ;
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




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension Getter '@propertyKind isEntityType'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_4334 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_isEntity = extractPtr_4334->mAssociatedValue3 ;
      result_result = extractedValue_isEntity ;
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




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Extension Getter '@propertyKind isEnumType'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_propertyKind_property * extractPtr_4703 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_type = extractPtr_4703->mAssociatedValue0 ;
      result_result = extractedValue_type.getter_isEnumType (SOURCE_FILE ("unified-type.galgas", 135)) ;
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




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_classKind_atomic::cEnumAssociatedValues_classKind_atomic (const GALGAS_typeKind & inAssociatedValue0
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_classKind_atomic::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_classKind_atomic::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_classKind_atomic * ptr = dynamic_cast<const cEnumAssociatedValues_classKind_atomic *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_classKind_document::cEnumAssociatedValues_classKind_document (const GALGAS_lstring & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_classKind_document::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_classKind_document::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_classKind_document * ptr = dynamic_cast<const cEnumAssociatedValues_classKind_document *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_classKind_entity::cEnumAssociatedValues_classKind_entity (const GALGAS_bool & inAssociatedValue0
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_classKind_entity::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_classKind_entity::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_classKind_entity * ptr = dynamic_cast<const cEnumAssociatedValues_classKind_entity *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classKind::GALGAS_classKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classKind GALGAS_classKind::constructor_prefs (UNUSED_LOCATION_ARGS) {
  GALGAS_classKind result ;
  result.mEnum = kEnum_prefs ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classKind GALGAS_classKind::constructor_simpleClass (UNUSED_LOCATION_ARGS) {
  GALGAS_classKind result ;
  result.mEnum = kEnum_simpleClass ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classKind GALGAS_classKind::constructor_entity (const GALGAS_bool & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_classKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_entity ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_classKind_entity (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classKind::method_entity (GALGAS_bool & outAssociatedValue0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_entity) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @classKind entity invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_classKind_entity * ptr = (const cEnumAssociatedValues_classKind_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_classKind [6] = {
  "(not built)",
  "prefs",
  "simpleClass",
  "atomic",
  "document",
  "entity"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classKind::getter_isPrefs (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefs == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classKind::getter_isSimpleClass (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_simpleClass == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classKind::getter_isAtomic (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_atomic == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classKind::getter_isDocument (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_document == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classKind::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entity == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classKind::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<enum @classKind: " << gEnumNameArrayFor_classKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @classKind type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classKind ("classKind",
                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension getter '@propertyGeneration prefKeyDefinitionCode'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_prefKeyDefinitionCode> gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_prefKeyDefinitionCode (const int32_t inClassIndex,
                                                 enterExtensionGetter_propertyGeneration_prefKeyDefinitionCode inGetter) {
  gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_propertyGeneration_prefKeyDefinitionCode (const cPtr_propertyGeneration * /* inObject */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_propertyGeneration_prefKeyDefinitionCode (void) {
  enterExtensionGetter_prefKeyDefinitionCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                              extensionGetter_propertyGeneration_prefKeyDefinitionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_propertyGeneration_prefKeyDefinitionCode (void) {
  gExtensionGetterTable_propertyGeneration_prefKeyDefinitionCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_propertyGeneration_prefKeyDefinitionCode (defineExtensionGetter_propertyGeneration_prefKeyDefinitionCode,
                                                                     freeExtensionGetter_propertyGeneration_prefKeyDefinitionCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Abstract extension getter '@propertyGeneration declarationCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_declarationCode> gExtensionGetterTable_propertyGeneration_declarationCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_declarationCode (const int32_t inClassIndex,
                                           enterExtensionGetter_propertyGeneration_declarationCode inGetter) {
  gExtensionGetterTable_propertyGeneration_declarationCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_propertyGeneration_declarationCode (void) {
  gExtensionGetterTable_propertyGeneration_declarationCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_propertyGeneration_declarationCode (NULL,
                                                               freeExtensionGetter_propertyGeneration_declarationCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_declarationCode (const cPtr_propertyGeneration * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_declarationCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_declarationCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_declarationCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_declarationCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_declarationCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_declarationCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Abstract extension getter '@propertyGeneration configurationCode'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_configurationCode> gExtensionGetterTable_propertyGeneration_configurationCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_configurationCode (const int32_t inClassIndex,
                                             enterExtensionGetter_propertyGeneration_configurationCode inGetter) {
  gExtensionGetterTable_propertyGeneration_configurationCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_propertyGeneration_configurationCode (void) {
  gExtensionGetterTable_propertyGeneration_configurationCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_propertyGeneration_configurationCode (NULL,
                                                                 freeExtensionGetter_propertyGeneration_configurationCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_configurationCode (const cPtr_propertyGeneration * inObject,
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
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension getter '@propertyGeneration terminationCode'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_terminationCode> gExtensionGetterTable_propertyGeneration_terminationCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_terminationCode (const int32_t inClassIndex,
                                           enterExtensionGetter_propertyGeneration_terminationCode inGetter) {
  gExtensionGetterTable_propertyGeneration_terminationCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_terminationCode (const cPtr_propertyGeneration * inObject,
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
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_propertyGeneration_terminationCode (const cPtr_propertyGeneration * /* inObject */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_propertyGeneration_terminationCode (void) {
  enterExtensionGetter_terminationCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                        extensionGetter_propertyGeneration_terminationCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_propertyGeneration_terminationCode (void) {
  gExtensionGetterTable_propertyGeneration_terminationCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_propertyGeneration_terminationCode (defineExtensionGetter_propertyGeneration_terminationCode,
                                                               freeExtensionGetter_propertyGeneration_terminationCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension getter '@propertyGeneration setupFromDictionaryCode'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_setupFromDictionaryCode> gExtensionGetterTable_propertyGeneration_setupFromDictionaryCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_setupFromDictionaryCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_setupFromDictionaryCode inGetter) {
  gExtensionGetterTable_propertyGeneration_setupFromDictionaryCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_setupFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_setupFromDictionaryCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_setupFromDictionaryCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_setupFromDictionaryCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_setupFromDictionaryCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_setupFromDictionaryCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_setupFromDictionaryCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_propertyGeneration_setupFromDictionaryCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_propertyGeneration_setupFromDictionaryCode (void) {
  enterExtensionGetter_setupFromDictionaryCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                extensionGetter_propertyGeneration_setupFromDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_propertyGeneration_setupFromDictionaryCode (void) {
  gExtensionGetterTable_propertyGeneration_setupFromDictionaryCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_propertyGeneration_setupFromDictionaryCode (defineExtensionGetter_propertyGeneration_setupFromDictionaryCode,
                                                                       freeExtensionGetter_propertyGeneration_setupFromDictionaryCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension getter '@propertyGeneration saveIntoDictionaryCode'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode> gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_saveIntoDictionaryCode (const int32_t inClassIndex,
                                                  enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode inGetter) {
  gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_propertyGeneration_saveIntoDictionaryCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_propertyGeneration_saveIntoDictionaryCode (void) {
  enterExtensionGetter_saveIntoDictionaryCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                               extensionGetter_propertyGeneration_saveIntoDictionaryCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_propertyGeneration_saveIntoDictionaryCode (void) {
  gExtensionGetterTable_propertyGeneration_saveIntoDictionaryCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_propertyGeneration_saveIntoDictionaryCode (defineExtensionGetter_propertyGeneration_saveIntoDictionaryCode,
                                                                      freeExtensionGetter_propertyGeneration_saveIntoDictionaryCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension getter '@propertyGeneration objectAccessibilityCode'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_objectAccessibilityCode> gExtensionGetterTable_propertyGeneration_objectAccessibilityCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_objectAccessibilityCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_objectAccessibilityCode inGetter) {
  gExtensionGetterTable_propertyGeneration_objectAccessibilityCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_propertyGeneration_objectAccessibilityCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_propertyGeneration_objectAccessibilityCode (void) {
  enterExtensionGetter_objectAccessibilityCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                extensionGetter_propertyGeneration_objectAccessibilityCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_propertyGeneration_objectAccessibilityCode (void) {
  gExtensionGetterTable_propertyGeneration_objectAccessibilityCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_propertyGeneration_objectAccessibilityCode (defineExtensionGetter_propertyGeneration_objectAccessibilityCode,
                                                                       freeExtensionGetter_propertyGeneration_objectAccessibilityCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension getter '@propertyGeneration clearObjectExplorerCode'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_clearObjectExplorerCode> gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_clearObjectExplorerCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_clearObjectExplorerCode inGetter) {
  gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_propertyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_propertyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                extensionGetter_propertyGeneration_clearObjectExplorerCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_propertyGeneration_clearObjectExplorerCode (void) {
  gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_propertyGeneration_clearObjectExplorerCode (defineExtensionGetter_propertyGeneration_clearObjectExplorerCode,
                                                                       freeExtensionGetter_propertyGeneration_clearObjectExplorerCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAccessibility::GALGAS_propertyAccessibility (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::constructor_stored (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  result.mEnum = kEnum_stored ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::constructor_proxy (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  result.mEnum = kEnum_proxy ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::constructor_transient (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  result.mEnum = kEnum_transient ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_propertyAccessibility [4] = {
  "(not built)",
  "stored",
  "proxy",
  "transient"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyAccessibility::getter_isStored (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stored == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyAccessibility::getter_isProxy (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_proxy == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyAccessibility::getter_isTransient (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transient == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAccessibility::description (C_String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString << "<enum @propertyAccessibility: " << gEnumNameArrayFor_propertyAccessibility [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyAccessibility::objectCompare (const GALGAS_propertyAccessibility & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @propertyAccessibility type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyAccessibility ("propertyAccessibility",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyAccessibility::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessibility ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyAccessibility::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyAccessibility (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Class for element of '@secondaryDeclarationListWorkingList' list                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_secondaryDeclarationListWorkingList : public cCollectionElement {
  public : GALGAS_secondaryDeclarationListWorkingList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_secondaryDeclarationListWorkingList (const GALGAS_astDeclaration & in_mDeclaration,
                                                                   const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                                   COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_secondaryDeclarationListWorkingList (const GALGAS_secondaryDeclarationListWorkingList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_secondaryDeclarationListWorkingList::cCollectionElement_secondaryDeclarationListWorkingList (const GALGAS_astDeclaration & in_mDeclaration,
                                                                                                                const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration, in_mSecondaryPropertyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_secondaryDeclarationListWorkingList::cCollectionElement_secondaryDeclarationListWorkingList (const GALGAS_secondaryDeclarationListWorkingList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration, inElement.mProperty_mSecondaryPropertyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_secondaryDeclarationListWorkingList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_secondaryDeclarationListWorkingList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_secondaryDeclarationListWorkingList (mObject.mProperty_mDeclaration, mObject.mProperty_mSecondaryPropertyList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_secondaryDeclarationListWorkingList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSecondaryPropertyList" ":" ;
  mObject.mProperty_mSecondaryPropertyList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_secondaryDeclarationListWorkingList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_secondaryDeclarationListWorkingList * operand = (cCollectionElement_secondaryDeclarationListWorkingList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryDeclarationListWorkingList::GALGAS_secondaryDeclarationListWorkingList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryDeclarationListWorkingList::GALGAS_secondaryDeclarationListWorkingList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_secondaryDeclarationListWorkingList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::constructor_listWithValue (const GALGAS_astDeclaration & inOperand0,
                                                                                                                  const GALGAS_secondaryPropertyList & inOperand1
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_secondaryDeclarationListWorkingList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_secondaryDeclarationListWorkingList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_secondaryDeclarationListWorkingList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryDeclarationListWorkingList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_astDeclaration & in_mDeclaration,
                                                                            const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_secondaryDeclarationListWorkingList * p = NULL ;
  macroMyNew (p, cCollectionElement_secondaryDeclarationListWorkingList (in_mDeclaration,
                                                                         in_mSecondaryPropertyList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryDeclarationListWorkingList::addAssign_operation (const GALGAS_astDeclaration & inOperand0,
                                                                      const GALGAS_secondaryPropertyList & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryDeclarationListWorkingList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryDeclarationListWorkingList::setter_append (GALGAS_secondaryDeclarationListWorkingList_2D_element inElement,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryDeclarationListWorkingList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryDeclarationListWorkingList::setter_insertAtIndex (const GALGAS_astDeclaration inOperand0,
                                                                       const GALGAS_secondaryPropertyList inOperand1,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryDeclarationListWorkingList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryDeclarationListWorkingList::setter_removeAtIndex (GALGAS_astDeclaration & outOperand0,
                                                                       GALGAS_secondaryPropertyList & outOperand1,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
      outOperand1 = p->mObject.mProperty_mSecondaryPropertyList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryDeclarationListWorkingList::setter_popFirst (GALGAS_astDeclaration & outOperand0,
                                                                  GALGAS_secondaryPropertyList & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
    outOperand1 = p->mObject.mProperty_mSecondaryPropertyList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryDeclarationListWorkingList::setter_popLast (GALGAS_astDeclaration & outOperand0,
                                                                 GALGAS_secondaryPropertyList & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
    outOperand1 = p->mObject.mProperty_mSecondaryPropertyList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryDeclarationListWorkingList::method_first (GALGAS_astDeclaration & outOperand0,
                                                               GALGAS_secondaryPropertyList & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
    outOperand1 = p->mObject.mProperty_mSecondaryPropertyList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryDeclarationListWorkingList::method_last (GALGAS_astDeclaration & outOperand0,
                                                              GALGAS_secondaryPropertyList & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
    outOperand1 = p->mObject.mProperty_mSecondaryPropertyList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::add_operation (const GALGAS_secondaryDeclarationListWorkingList & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result = GALGAS_secondaryDeclarationListWorkingList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result = GALGAS_secondaryDeclarationListWorkingList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result = GALGAS_secondaryDeclarationListWorkingList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryDeclarationListWorkingList::plusAssign_operation (const GALGAS_secondaryDeclarationListWorkingList inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration GALGAS_secondaryDeclarationListWorkingList::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  GALGAS_astDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryDeclarationListWorkingList::getter_mSecondaryPropertyListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  GALGAS_secondaryPropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    result = p->mObject.mProperty_mSecondaryPropertyList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_secondaryDeclarationListWorkingList::cEnumerator_secondaryDeclarationListWorkingList (const GALGAS_secondaryDeclarationListWorkingList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryDeclarationListWorkingList_2D_element cEnumerator_secondaryDeclarationListWorkingList::current (LOCATION_ARGS) const {
  const cCollectionElement_secondaryDeclarationListWorkingList * p = (const cCollectionElement_secondaryDeclarationListWorkingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration cEnumerator_secondaryDeclarationListWorkingList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_secondaryDeclarationListWorkingList * p = (const cCollectionElement_secondaryDeclarationListWorkingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return p->mObject.mProperty_mDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList cEnumerator_secondaryDeclarationListWorkingList::current_mSecondaryPropertyList (LOCATION_ARGS) const {
  const cCollectionElement_secondaryDeclarationListWorkingList * p = (const cCollectionElement_secondaryDeclarationListWorkingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return p->mObject.mProperty_mSecondaryPropertyList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @secondaryDeclarationListWorkingList type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_secondaryDeclarationListWorkingList ("secondaryDeclarationListWorkingList",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_secondaryDeclarationListWorkingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_secondaryDeclarationListWorkingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_secondaryDeclarationListWorkingList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_secondaryDeclarationListWorkingList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_secondaryDeclarationListWorkingList result ;
  const GALGAS_secondaryDeclarationListWorkingList * p = (const GALGAS_secondaryDeclarationListWorkingList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_secondaryDeclarationListWorkingList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("secondaryDeclarationListWorkingList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Abstract extension method '@abstractSecondaryProperty tryToDefineSecondaryProperty'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractSecondaryProperty_tryToDefineSecondaryProperty> gExtensionMethodTable_abstractSecondaryProperty_tryToDefineSecondaryProperty ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_tryToDefineSecondaryProperty (const int32_t inClassIndex,
                                                        extensionMethodSignature_abstractSecondaryProperty_tryToDefineSecondaryProperty inMethod) {
  gExtensionMethodTable_abstractSecondaryProperty_tryToDefineSecondaryProperty.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractSecondaryProperty_tryToDefineSecondaryProperty (void) {
  gExtensionMethodTable_abstractSecondaryProperty_tryToDefineSecondaryProperty.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractSecondaryProperty_tryToDefineSecondaryProperty (NULL,
                                                                                   freeExtensionMethod_abstractSecondaryProperty_tryToDefineSecondaryProperty) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_tryToDefineSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                       GALGAS_semanticContextEX & io_ioSemanticContext,
                                                       const GALGAS_observablePropertyMap constin_inRootObservableProperties,
                                                       GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                       GALGAS_secondaryPropertyList & io_ioUnsolvedProperties,
                                                       GALGAS_simpleStoredPropertyListForGenerationEX & io_ioSimpleStoredPropertyListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSecondaryProperty) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractSecondaryProperty_tryToDefineSecondaryProperty f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractSecondaryProperty_tryToDefineSecondaryProperty.count ()) {
      f = gExtensionMethodTable_abstractSecondaryProperty_tryToDefineSecondaryProperty (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractSecondaryProperty_tryToDefineSecondaryProperty.count ()) {
          f = gExtensionMethodTable_abstractSecondaryProperty_tryToDefineSecondaryProperty (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractSecondaryProperty_tryToDefineSecondaryProperty.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, constin_inRootObservableProperties, io_ioObservableProperties, io_ioUnsolvedProperties, io_ioSimpleStoredPropertyListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContextEX::GALGAS_semanticContextEX (void) :
mProperty_mClassMap (),
mProperty_mUnifiedTypeMap (),
mProperty_mOutletClassMap (),
mProperty_mBindingSpecificationMap (),
mProperty_mPreferencesObservablePropertyMap (),
mProperty_mDocumentObservablePropertyMap (),
mProperty_mEntityObservablePropertyMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContextEX::~ GALGAS_semanticContextEX (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContextEX::GALGAS_semanticContextEX (const GALGAS_classMap & inOperand0,
                                                    const GALGAS_unifiedTypeMap & inOperand1,
                                                    const GALGAS_outletClassMap & inOperand2,
                                                    const GALGAS_bindingSpecificationMap & inOperand3,
                                                    const GALGAS_observablePropertyMap & inOperand4,
                                                    const GALGAS_documentObservablePropertyMap & inOperand5,
                                                    const GALGAS_entityObservablePropertyMap & inOperand6) :
mProperty_mClassMap (inOperand0),
mProperty_mUnifiedTypeMap (inOperand1),
mProperty_mOutletClassMap (inOperand2),
mProperty_mBindingSpecificationMap (inOperand3),
mProperty_mPreferencesObservablePropertyMap (inOperand4),
mProperty_mDocumentObservablePropertyMap (inOperand5),
mProperty_mEntityObservablePropertyMap (inOperand6) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContextEX GALGAS_semanticContextEX::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContextEX (GALGAS_classMap::constructor_emptyMap (HERE),
                                   GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                   GALGAS_outletClassMap::constructor_emptyMap (HERE),
                                   GALGAS_bindingSpecificationMap::constructor_emptyMap (HERE),
                                   GALGAS_observablePropertyMap::constructor_emptyMap (HERE),
                                   GALGAS_documentObservablePropertyMap::constructor_emptyMap (HERE),
                                   GALGAS_entityObservablePropertyMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContextEX GALGAS_semanticContextEX::constructor_new (const GALGAS_classMap & inOperand0,
                                                                    const GALGAS_unifiedTypeMap & inOperand1,
                                                                    const GALGAS_outletClassMap & inOperand2,
                                                                    const GALGAS_bindingSpecificationMap & inOperand3,
                                                                    const GALGAS_observablePropertyMap & inOperand4,
                                                                    const GALGAS_documentObservablePropertyMap & inOperand5,
                                                                    const GALGAS_entityObservablePropertyMap & inOperand6 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContextEX result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_semanticContextEX (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_semanticContextEX::objectCompare (const GALGAS_semanticContextEX & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mClassMap.objectCompare (inOperand.mProperty_mClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnifiedTypeMap.objectCompare (inOperand.mProperty_mUnifiedTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletClassMap.objectCompare (inOperand.mProperty_mOutletClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingSpecificationMap.objectCompare (inOperand.mProperty_mBindingSpecificationMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPreferencesObservablePropertyMap.objectCompare (inOperand.mProperty_mPreferencesObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDocumentObservablePropertyMap.objectCompare (inOperand.mProperty_mDocumentObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEntityObservablePropertyMap.objectCompare (inOperand.mProperty_mEntityObservablePropertyMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_semanticContextEX::isValid (void) const {
  return mProperty_mClassMap.isValid () && mProperty_mUnifiedTypeMap.isValid () && mProperty_mOutletClassMap.isValid () && mProperty_mBindingSpecificationMap.isValid () && mProperty_mPreferencesObservablePropertyMap.isValid () && mProperty_mDocumentObservablePropertyMap.isValid () && mProperty_mEntityObservablePropertyMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContextEX::drop (void) {
  mProperty_mClassMap.drop () ;
  mProperty_mUnifiedTypeMap.drop () ;
  mProperty_mOutletClassMap.drop () ;
  mProperty_mBindingSpecificationMap.drop () ;
  mProperty_mPreferencesObservablePropertyMap.drop () ;
  mProperty_mDocumentObservablePropertyMap.drop () ;
  mProperty_mEntityObservablePropertyMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContextEX::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @semanticContextEX:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnifiedTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPreferencesObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDocumentObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap GALGAS_semanticContextEX::getter_mClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_semanticContextEX::getter_mUnifiedTypeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnifiedTypeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap GALGAS_semanticContextEX::getter_mOutletClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletClassMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap GALGAS_semanticContextEX::getter_mBindingSpecificationMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingSpecificationMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_semanticContextEX::getter_mPreferencesObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPreferencesObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap GALGAS_semanticContextEX::getter_mDocumentObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap GALGAS_semanticContextEX::getter_mEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityObservablePropertyMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @semanticContextEX type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContextEX ("semanticContextEX",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticContextEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContextEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticContextEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContextEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContextEX GALGAS_semanticContextEX::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticContextEX result ;
  const GALGAS_semanticContextEX * p = (const GALGAS_semanticContextEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContextEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContextEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@transientExternTypeList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GALGAS_string & in_mTypeName,
                                                                                        const GALGAS_bool & in_mIsClass
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mIsClass) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GALGAS_transientExternTypeList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mIsClass) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_transientExternTypeList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_transientExternTypeList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_transientExternTypeList (mObject.mProperty_mTypeName, mObject.mProperty_mIsClass COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_transientExternTypeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_transientExternTypeList * operand = (cCollectionElement_transientExternTypeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_transientExternTypeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList::GALGAS_transientExternTypeList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList::GALGAS_transientExternTypeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientExternTypeList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientExternTypeList::addAssign_operation (const GALGAS_string & inOperand0,
                                                          const GALGAS_bool & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientExternTypeList::setter_append (GALGAS_transientExternTypeList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientExternTypeList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                           const GALGAS_bool inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientExternTypeList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                           GALGAS_bool & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientExternTypeList::plusAssign_operation (const GALGAS_transientExternTypeList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_transientExternTypeList::cEnumerator_transientExternTypeList (const GALGAS_transientExternTypeList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element cEnumerator_transientExternTypeList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_transientExternTypeList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_transientExternTypeList::current_mIsClass (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mIsClass ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @transientExternTypeList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientExternTypeList ("transientExternTypeList",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientExternTypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientExternTypeList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientExternTypeList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Abstract extension method '@abstractFileGeneration generateCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractFileGeneration_generateCode> gExtensionMethodTable_abstractFileGeneration_generateCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractFileGeneration_generateCode inMethod) {
  gExtensionMethodTable_abstractFileGeneration_generateCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractFileGeneration_generateCode (void) {
  gExtensionMethodTable_abstractFileGeneration_generateCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractFileGeneration_generateCode (NULL,
                                                                freeExtensionMethod_abstractFileGeneration_generateCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@fileGenerationList' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GALGAS_fileGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_fileGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_fileGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_fileGenerationList (mObject.mProperty_mFileGeneration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_fileGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileGeneration" ":" ;
  mObject.mProperty_mFileGeneration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_fileGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fileGenerationList * operand = (cCollectionElement_fileGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fileGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList::GALGAS_fileGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList::GALGAS_fileGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList GALGAS_fileGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_fileGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fileGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_fileGenerationList (in_mFileGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fileGenerationList::addAssign_operation (const GALGAS_abstractFileGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fileGenerationList::setter_append (GALGAS_fileGenerationList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fileGenerationList::setter_insertAtIndex (const GALGAS_abstractFileGeneration inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fileGenerationList::setter_removeAtIndex (GALGAS_abstractFileGeneration & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
      outOperand0 = p->mObject.mProperty_mFileGeneration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fileGenerationList::plusAssign_operation (const GALGAS_fileGenerationList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_fileGenerationList::cEnumerator_fileGenerationList (const GALGAS_fileGenerationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList_2D_element cEnumerator_fileGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractFileGeneration cEnumerator_fileGenerationList::current_mFileGeneration (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject.mProperty_mFileGeneration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @fileGenerationList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fileGenerationList ("fileGenerationList",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_fileGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_fileGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList_2D_element::GALGAS_secondaryPropertyList_2D_element (void) :
mProperty_mSecondaryProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList_2D_element::~ GALGAS_secondaryPropertyList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList_2D_element::GALGAS_secondaryPropertyList_2D_element (const GALGAS_abstractSecondaryProperty & inOperand0) :
mProperty_mSecondaryProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList_2D_element GALGAS_secondaryPropertyList_2D_element::constructor_new (const GALGAS_abstractSecondaryProperty & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_secondaryPropertyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_secondaryPropertyList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_secondaryPropertyList_2D_element::objectCompare (const GALGAS_secondaryPropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSecondaryProperty.objectCompare (inOperand.mProperty_mSecondaryProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_secondaryPropertyList_2D_element::isValid (void) const {
  return mProperty_mSecondaryProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList_2D_element::drop (void) {
  mProperty_mSecondaryProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @secondaryPropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSecondaryProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty GALGAS_secondaryPropertyList_2D_element::getter_mSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @secondaryPropertyList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_secondaryPropertyList_2D_element ("secondaryPropertyList-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_secondaryPropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_secondaryPropertyList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_secondaryPropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_secondaryPropertyList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList_2D_element GALGAS_secondaryPropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_secondaryPropertyList_2D_element result ;
  const GALGAS_secondaryPropertyList_2D_element * p = (const GALGAS_secondaryPropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_secondaryPropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("secondaryPropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) :
mProperty_mEntityName (),
mProperty_mObsoleteEntityNames () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::~ GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mEntityName (inOperand0),
mProperty_mObsoleteEntityNames (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::isValid (void) const {
  return mProperty_mEntityName.isValid () && mProperty_mObsoleteEntityNames.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::drop (void) {
  mProperty_mEntityName.drop () ;
  mProperty_mObsoleteEntityNames.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObsoleteEntityNames ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @entityListForGeneratingEBManagedObjectContext-element type                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ("entityListForGeneratingEBManagedObjectContext-element",
                                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element::GALGAS_documentListForGeneration_2D_element (void) :
mProperty_mDocumentName (),
mProperty_mRootEntityName (),
mProperty_mTransientListForGeneration (),
mProperty_mOutletMap (),
mProperty_mTargetActionList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_multipleBindingGenerationList (),
mProperty_mArrayControllerForGeneration (),
mProperty_mTableViewBindingGenerationList (),
mProperty_mEBViewBindingGenerationList (),
mProperty_mSelectionControllerListForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element::~ GALGAS_documentListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element::GALGAS_documentListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_string & inOperand1,
                                                                                          const GALGAS_transientDefinitionListForGenerationEX & inOperand2,
                                                                                          const GALGAS_decoratedOutletMap & inOperand3,
                                                                                          const GALGAS_actionBindingListForGeneration & inOperand4,
                                                                                          const GALGAS_regularBindingsGenerationList & inOperand5,
                                                                                          const GALGAS_multipleBindingGenerationList & inOperand6,
                                                                                          const GALGAS_arrayControllerForGenerationEX & inOperand7,
                                                                                          const GALGAS_tableViewBindingGenerationList & inOperand8,
                                                                                          const GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand9,
                                                                                          const GALGAS_selectionControllerForGeneration & inOperand10) :
mProperty_mDocumentName (inOperand0),
mProperty_mRootEntityName (inOperand1),
mProperty_mTransientListForGeneration (inOperand2),
mProperty_mOutletMap (inOperand3),
mProperty_mTargetActionList (inOperand4),
mProperty_mRegularBindingsGenerationList (inOperand5),
mProperty_multipleBindingGenerationList (inOperand6),
mProperty_mArrayControllerForGeneration (inOperand7),
mProperty_mTableViewBindingGenerationList (inOperand8),
mProperty_mEBViewBindingGenerationList (inOperand9),
mProperty_mSelectionControllerListForGeneration (inOperand10) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_documentListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_transientDefinitionListForGenerationEX::constructor_emptyList (HERE),
                                                      GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                      GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_arrayControllerForGenerationEX::constructor_emptyList (HERE),
                                                      GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                          const GALGAS_string & inOperand1,
                                                                                                          const GALGAS_transientDefinitionListForGenerationEX & inOperand2,
                                                                                                          const GALGAS_decoratedOutletMap & inOperand3,
                                                                                                          const GALGAS_actionBindingListForGeneration & inOperand4,
                                                                                                          const GALGAS_regularBindingsGenerationList & inOperand5,
                                                                                                          const GALGAS_multipleBindingGenerationList & inOperand6,
                                                                                                          const GALGAS_arrayControllerForGenerationEX & inOperand7,
                                                                                                          const GALGAS_tableViewBindingGenerationList & inOperand8,
                                                                                                          const GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand9,
                                                                                                          const GALGAS_selectionControllerForGeneration & inOperand10 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_documentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_documentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_documentListForGeneration_2D_element::objectCompare (const GALGAS_documentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDocumentName.objectCompare (inOperand.mProperty_mDocumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRootEntityName.objectCompare (inOperand.mProperty_mRootEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientListForGeneration.objectCompare (inOperand.mProperty_mTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletMap.objectCompare (inOperand.mProperty_mOutletMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetActionList.objectCompare (inOperand.mProperty_mTargetActionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (inOperand.mProperty_mRegularBindingsGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_multipleBindingGenerationList.objectCompare (inOperand.mProperty_multipleBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerForGeneration.objectCompare (inOperand.mProperty_mArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (inOperand.mProperty_mTableViewBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (inOperand.mProperty_mEBViewBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionControllerListForGeneration.objectCompare (inOperand.mProperty_mSelectionControllerListForGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_documentListForGeneration_2D_element::isValid (void) const {
  return mProperty_mDocumentName.isValid () && mProperty_mRootEntityName.isValid () && mProperty_mTransientListForGeneration.isValid () && mProperty_mOutletMap.isValid () && mProperty_mTargetActionList.isValid () && mProperty_mRegularBindingsGenerationList.isValid () && mProperty_multipleBindingGenerationList.isValid () && mProperty_mArrayControllerForGeneration.isValid () && mProperty_mTableViewBindingGenerationList.isValid () && mProperty_mEBViewBindingGenerationList.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration_2D_element::drop (void) {
  mProperty_mDocumentName.drop () ;
  mProperty_mRootEntityName.drop () ;
  mProperty_mTransientListForGeneration.drop () ;
  mProperty_mOutletMap.drop () ;
  mProperty_mTargetActionList.drop () ;
  mProperty_mRegularBindingsGenerationList.drop () ;
  mProperty_multipleBindingGenerationList.drop () ;
  mProperty_mArrayControllerForGeneration.drop () ;
  mProperty_mTableViewBindingGenerationList.drop () ;
  mProperty_mEBViewBindingGenerationList.drop () ;
  mProperty_mSelectionControllerListForGeneration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @documentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDocumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_documentListForGeneration_2D_element::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_documentListForGeneration_2D_element::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_documentListForGeneration_2D_element::getter_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_documentListForGeneration_2D_element::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_documentListForGeneration_2D_element::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetActionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_documentListForGeneration_2D_element::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_documentListForGeneration_2D_element::getter_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_multipleBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_documentListForGeneration_2D_element::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_documentListForGeneration_2D_element::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_documentListForGeneration_2D_element::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_documentListForGeneration_2D_element::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerListForGeneration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @documentListForGeneration-element type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentListForGeneration_2D_element ("documentListForGeneration-element",
                                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_documentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_documentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_documentListForGeneration_2D_element result ;
  const GALGAS_documentListForGeneration_2D_element * p = (const GALGAS_documentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (void) :
mProperty_mModelType (),
mProperty_mModelShouldBeWritableProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element::~ GALGAS_outletBindingSpecificationModelList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1) :
mProperty_mModelType (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletBindingSpecificationModelList_2D_element::isValid (void) const {
  return mProperty_mModelType.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList_2D_element::drop (void) {
  mProperty_mModelType.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelShouldBeWritableProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @outletBindingSpecificationModelList-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ("outletBindingSpecificationModelList-element",
                                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (void) :
mProperty_mKind (),
mProperty_mErrorLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_propertyKind & inOperand0,
                                                                                    const GALGAS_location & inOperand1) :
mProperty_mKind (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::constructor_new (const GALGAS_propertyKind & inOperand0,
                                                                                                    const GALGAS_location & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletBindingModelList_2D_element::isValid (void) const {
  return mProperty_mKind.isValid () && mProperty_mErrorLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mProperty_mKind.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_outletBindingModelList_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_outletBindingModelList_2D_element::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @outletBindingModelList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ("outletBindingModelList-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (void) :
mProperty_mTableValueBindingOutletName (),
mProperty_mTableValueBindingControllerName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element::~ GALGAS_tableViewBindingGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1) :
mProperty_mTableValueBindingOutletName (inOperand0),
mProperty_mTableValueBindingControllerName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_tableViewBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mTableValueBindingOutletName.isValid () && mProperty_mTableValueBindingControllerName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList_2D_element::drop (void) {
  mProperty_mTableValueBindingOutletName.drop () ;
  mProperty_mTableValueBindingControllerName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBindingOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBindingControllerName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @tableViewBindingGenerationList-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ("tableViewBindingGenerationList-element",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) :
mProperty_mEBViewOutletName (),
mProperty_mArrayControllerControllerName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::~ GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1) :
mProperty_mEBViewOutletName (inOperand0),
mProperty_mArrayControllerControllerName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                const GALGAS_string & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mEBViewOutletName.isValid () && mProperty_mArrayControllerControllerName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::drop (void) {
  mProperty_mEBViewOutletName.drop () ;
  mProperty_mArrayControllerControllerName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::getter_mEBViewOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::getter_mArrayControllerControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerControllerName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ebViewGraphicControllerBindingGenerationList-element type                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ("ebViewGraphicControllerBindingGenerationList-element",
                                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (void) :
mProperty_mBoundObjectString (),
mProperty_mKind () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList_2D_element::~ GALGAS_boundObjectList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (const GALGAS_string & inOperand0,
                                                                      const GALGAS_propertyKind & inOperand1) :
mProperty_mBoundObjectString (inOperand0),
mProperty_mKind (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_propertyKind & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_boundObjectList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_boundObjectList_2D_element::isValid (void) const {
  return mProperty_mBoundObjectString.isValid () && mProperty_mKind.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_boundObjectList_2D_element::drop (void) {
  mProperty_mBoundObjectString.drop () ;
  mProperty_mKind.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_boundObjectList_2D_element::getter_mBoundObjectString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_boundObjectList_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @boundObjectList-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boundObjectList_2D_element ("boundObjectList-element",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_boundObjectList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_boundObjectList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boundObjectList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element::~ GALGAS_regularBindingsGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_boundObjectList & inOperand2,
                                                                                                  const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectList (inOperand2),
mProperty_mBindingOptionsString (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_string::constructor_default (HERE),
                                                          GALGAS_boundObjectList::constructor_emptyList (HERE),
                                                          GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_regularBindingsGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList GALGAS_regularBindingsGenerationList_2D_element::getter_mBoundObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingOptionsString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingOptionsString ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @regularBindingsGenerationList-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ("regularBindingsGenerationList-element",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_regularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (void) :
mProperty_mOutletName (),
mProperty_mTargetName (),
mProperty_mActionName (),
mProperty_mTargetTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element::~ GALGAS_actionBindingListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2,
                                                                                                    const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mActionName (inOperand2),
mProperty_mTargetTypeName (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_actionBindingListForGeneration_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mTargetName.isValid () && mProperty_mActionName.isValid () && mProperty_mTargetTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mActionName.drop () ;
  mProperty_mTargetTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mTargetTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @actionBindingListForGeneration-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ("actionBindingListForGeneration-element",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionBindingListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (void) :
mProperty_mObservableProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList_2D_element::~ GALGAS_observablePropertyList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & inOperand0) :
mProperty_mObservableProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_observablePropertyList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_observablePropertyList_2D_element::objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mObservableProperty.objectCompare (inOperand.mProperty_mObservableProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_observablePropertyList_2D_element::isValid (void) const {
  return mProperty_mObservableProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyList_2D_element::drop (void) {
  mProperty_mObservableProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST GALGAS_observablePropertyList_2D_element::getter_mObservableProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservableProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @observablePropertyList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyList_2D_element ("observablePropertyList-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX_2D_element::GALGAS_transientDefinitionListForGenerationEX_2D_element (void) :
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mDependencyList (),
mProperty_mExternFunctionName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX_2D_element::~ GALGAS_transientDefinitionListForGenerationEX_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX_2D_element::GALGAS_transientDefinitionListForGenerationEX_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_typeKind & inOperand2,
                                                                                                                    const GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                                                                    const GALGAS_string & inOperand4) :
mProperty_mOwnerName (inOperand0),
mProperty_mTransientName (inOperand1),
mProperty_mTransientType (inOperand2),
mProperty_mDependencyList (inOperand3),
mProperty_mExternFunctionName (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX_2D_element GALGAS_transientDefinitionListForGenerationEX_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                                    const GALGAS_typeKind & inOperand2,
                                                                                                                                    const GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                                                                                    const GALGAS_string & inOperand4 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGenerationEX_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_transientDefinitionListForGenerationEX_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_transientDefinitionListForGenerationEX_2D_element::objectCompare (const GALGAS_transientDefinitionListForGenerationEX_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOwnerName.objectCompare (inOperand.mProperty_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientName.objectCompare (inOperand.mProperty_mTransientName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientType.objectCompare (inOperand.mProperty_mTransientType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDependencyList.objectCompare (inOperand.mProperty_mDependencyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternFunctionName.objectCompare (inOperand.mProperty_mExternFunctionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_transientDefinitionListForGenerationEX_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mTransientName.isValid () && mProperty_mTransientType.isValid () && mProperty_mDependencyList.isValid () && mProperty_mExternFunctionName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX_2D_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mTransientName.drop () ;
  mProperty_mTransientType.drop () ;
  mProperty_mDependencyList.drop () ;
  mProperty_mExternFunctionName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @transientDefinitionListForGenerationEX-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDependencyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternFunctionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDefinitionListForGenerationEX_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDefinitionListForGenerationEX_2D_element::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_transientDefinitionListForGenerationEX_2D_element::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientDefinitionListForGenerationEX_2D_element::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDefinitionListForGenerationEX_2D_element::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @transientDefinitionListForGenerationEX-element type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDefinitionListForGenerationEX_2D_element ("transientDefinitionListForGenerationEX-element",
                                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientDefinitionListForGenerationEX_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDefinitionListForGenerationEX_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientDefinitionListForGenerationEX_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDefinitionListForGenerationEX_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX_2D_element GALGAS_transientDefinitionListForGenerationEX_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGenerationEX_2D_element result ;
  const GALGAS_transientDefinitionListForGenerationEX_2D_element * p = (const GALGAS_transientDefinitionListForGenerationEX_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDefinitionListForGenerationEX_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDefinitionListForGenerationEX-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (void) :
mProperty_mDependency (),
mProperty_mFunctionArgumentName (),
mProperty_mFunctionArgumentTypeString () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration_2D_element::~ GALGAS_transientDependencyListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_string & inOperand2) :
mProperty_mDependency (inOperand0),
mProperty_mFunctionArgumentName (inOperand1),
mProperty_mFunctionArgumentTypeString (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_transientDependencyListForGeneration_2D_element::isValid (void) const {
  return mProperty_mDependency.isValid () && mProperty_mFunctionArgumentName.isValid () && mProperty_mFunctionArgumentTypeString.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDependencyListForGeneration_2D_element::drop (void) {
  mProperty_mDependency.drop () ;
  mProperty_mFunctionArgumentName.drop () ;
  mProperty_mFunctionArgumentTypeString.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST GALGAS_transientDependencyListForGeneration_2D_element::getter_mDependency (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependency ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::getter_mFunctionArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionArgumentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::getter_mFunctionArgumentTypeString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionArgumentTypeString ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @transientDependencyListForGeneration-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ("transientDependencyListForGeneration-element",
                                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientDependencyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientDependencyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDependencyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList_2D_element::GALGAS_atomicPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList_2D_element::~ GALGAS_atomicPropertyGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList_2D_element::GALGAS_atomicPropertyGenerationList_2D_element (const GALGAS_atomicPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGenerationList_2D_element GALGAS_atomicPropertyGenerationList_2D_element::constructor_new (const GALGAS_atomicPropertyGeneration & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_atomicPropertyGenerationList_2D_element::objectCompare (const GALGAS_atomicPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_atomicPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_atomicPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @atomicPropertyGenerationList-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ("atomicPropertyGenerationList-element",
                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::GALGAS_simpleStoredPropertyListForGenerationEX_2D_element (void) :
mProperty_mType (),
mProperty_mStoredOrProxyPropertyName (),
mProperty_mIsProxy (),
mProperty_mDefaultValueInSwift (),
mProperty_mNeedsValidation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::~ GALGAS_simpleStoredPropertyListForGenerationEX_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::GALGAS_simpleStoredPropertyListForGenerationEX_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                      const GALGAS_bool & inOperand2,
                                                                                                                      const GALGAS_string & inOperand3,
                                                                                                                      const GALGAS_bool & inOperand4) :
mProperty_mType (inOperand0),
mProperty_mStoredOrProxyPropertyName (inOperand1),
mProperty_mIsProxy (inOperand2),
mProperty_mDefaultValueInSwift (inOperand3),
mProperty_mNeedsValidation (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX_2D_element GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                                      const GALGAS_bool & inOperand2,
                                                                                                                                      const GALGAS_string & inOperand3,
                                                                                                                                      const GALGAS_bool & inOperand4 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyListForGenerationEX_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_simpleStoredPropertyListForGenerationEX_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::objectCompare (const GALGAS_simpleStoredPropertyListForGenerationEX_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredOrProxyPropertyName.objectCompare (inOperand.mProperty_mStoredOrProxyPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsProxy.objectCompare (inOperand.mProperty_mIsProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultValueInSwift.objectCompare (inOperand.mProperty_mDefaultValueInSwift) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsValidation.objectCompare (inOperand.mProperty_mNeedsValidation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mStoredOrProxyPropertyName.isValid () && mProperty_mIsProxy.isValid () && mProperty_mDefaultValueInSwift.isValid () && mProperty_mNeedsValidation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mStoredOrProxyPropertyName.drop () ;
  mProperty_mIsProxy.drop () ;
  mProperty_mDefaultValueInSwift.drop () ;
  mProperty_mNeedsValidation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @simpleStoredPropertyListForGenerationEX-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredOrProxyPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultValueInSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::getter_mStoredOrProxyPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredOrProxyPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::getter_mIsProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::getter_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValueInSwift ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @simpleStoredPropertyListForGenerationEX-element type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyListForGenerationEX_2D_element ("simpleStoredPropertyListForGenerationEX-element",
                                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyListForGenerationEX_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyListForGenerationEX_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX_2D_element GALGAS_simpleStoredPropertyListForGenerationEX_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyListForGenerationEX_2D_element result ;
  const GALGAS_simpleStoredPropertyListForGenerationEX_2D_element * p = (const GALGAS_simpleStoredPropertyListForGenerationEX_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleStoredPropertyListForGenerationEX_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyListForGenerationEX-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::GALGAS_toOneEntityRelationshipListForGeneration_2D_element (void) :
mProperty_mToOneRelationshipName (),
mProperty_mRelationshipType (),
mProperty_mOppositeRelationshipName (),
mProperty_mInverseRelationMultiplicity (),
mProperty_mDestinationEntityObservablePropertyMap (),
mProperty_mCascading () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::~ GALGAS_toOneEntityRelationshipListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::GALGAS_toOneEntityRelationshipListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_typeKind & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                        const GALGAS_observablePropertyMap & inOperand4,
                                                                                                                        const GALGAS_bool & inOperand5) :
mProperty_mToOneRelationshipName (inOperand0),
mProperty_mRelationshipType (inOperand1),
mProperty_mOppositeRelationshipName (inOperand2),
mProperty_mInverseRelationMultiplicity (inOperand3),
mProperty_mDestinationEntityObservablePropertyMap (inOperand4),
mProperty_mCascading (inOperand5) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element GALGAS_toOneEntityRelationshipListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_typeKind & inOperand1,
                                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                                        const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                                        const GALGAS_observablePropertyMap & inOperand4,
                                                                                                                                        const GALGAS_bool & inOperand5 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_toOneEntityRelationshipListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_toOneEntityRelationshipListForGeneration_2D_element::objectCompare (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mToOneRelationshipName.objectCompare (inOperand.mProperty_mToOneRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRelationshipType.objectCompare (inOperand.mProperty_mRelationshipType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOppositeRelationshipName.objectCompare (inOperand.mProperty_mOppositeRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInverseRelationMultiplicity.objectCompare (inOperand.mProperty_mInverseRelationMultiplicity) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDestinationEntityObservablePropertyMap.objectCompare (inOperand.mProperty_mDestinationEntityObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCascading.objectCompare (inOperand.mProperty_mCascading) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_toOneEntityRelationshipListForGeneration_2D_element::isValid (void) const {
  return mProperty_mToOneRelationshipName.isValid () && mProperty_mRelationshipType.isValid () && mProperty_mOppositeRelationshipName.isValid () && mProperty_mInverseRelationMultiplicity.isValid () && mProperty_mDestinationEntityObservablePropertyMap.isValid () && mProperty_mCascading.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration_2D_element::drop (void) {
  mProperty_mToOneRelationshipName.drop () ;
  mProperty_mRelationshipType.drop () ;
  mProperty_mOppositeRelationshipName.drop () ;
  mProperty_mInverseRelationMultiplicity.drop () ;
  mProperty_mDestinationEntityObservablePropertyMap.drop () ;
  mProperty_mCascading.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @toOneEntityRelationshipListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
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
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOneEntityRelationshipListForGeneration_2D_element::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascading ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @toOneEntityRelationshipListForGeneration-element type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration_2D_element ("toOneEntityRelationshipListForGeneration-element",
                                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneEntityRelationshipListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneEntityRelationshipListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneEntityRelationshipListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element GALGAS_toOneEntityRelationshipListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration_2D_element result ;
  const GALGAS_toOneEntityRelationshipListForGeneration_2D_element * p = (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneEntityRelationshipListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneEntityRelationshipListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::GALGAS_toManyEntityRelationshipListForGeneration_2D_element (void) :
mProperty_mToManyRelationshipName (),
mProperty_mRelationshipType (),
mProperty_mOppositeRelationshipName (),
mProperty_mDestinationEntityObservablePropertyMap (),
mProperty_mCascading () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::~ GALGAS_toManyEntityRelationshipListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::GALGAS_toManyEntityRelationshipListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                          const GALGAS_typeKind & inOperand1,
                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                          const GALGAS_observablePropertyMap & inOperand3,
                                                                                                                          const GALGAS_bool & inOperand4) :
mProperty_mToManyRelationshipName (inOperand0),
mProperty_mRelationshipType (inOperand1),
mProperty_mOppositeRelationshipName (inOperand2),
mProperty_mDestinationEntityObservablePropertyMap (inOperand3),
mProperty_mCascading (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element GALGAS_toManyEntityRelationshipListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                          const GALGAS_typeKind & inOperand1,
                                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                                          const GALGAS_observablePropertyMap & inOperand3,
                                                                                                                                          const GALGAS_bool & inOperand4 
                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toManyEntityRelationshipListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_toManyEntityRelationshipListForGeneration_2D_element::objectCompare (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mToManyRelationshipName.objectCompare (inOperand.mProperty_mToManyRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRelationshipType.objectCompare (inOperand.mProperty_mRelationshipType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOppositeRelationshipName.objectCompare (inOperand.mProperty_mOppositeRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDestinationEntityObservablePropertyMap.objectCompare (inOperand.mProperty_mDestinationEntityObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCascading.objectCompare (inOperand.mProperty_mCascading) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_toManyEntityRelationshipListForGeneration_2D_element::isValid (void) const {
  return mProperty_mToManyRelationshipName.isValid () && mProperty_mRelationshipType.isValid () && mProperty_mOppositeRelationshipName.isValid () && mProperty_mDestinationEntityObservablePropertyMap.isValid () && mProperty_mCascading.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration_2D_element::drop (void) {
  mProperty_mToManyRelationshipName.drop () ;
  mProperty_mRelationshipType.drop () ;
  mProperty_mOppositeRelationshipName.drop () ;
  mProperty_mDestinationEntityObservablePropertyMap.drop () ;
  mProperty_mCascading.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration_2D_element::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "<struct @toManyEntityRelationshipListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mToManyRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCascading.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration_2D_element::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_toManyEntityRelationshipListForGeneration_2D_element::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration_2D_element::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_toManyEntityRelationshipListForGeneration_2D_element::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toManyEntityRelationshipListForGeneration_2D_element::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascading ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @toManyEntityRelationshipListForGeneration-element type                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration_2D_element ("toManyEntityRelationshipListForGeneration-element",
                                                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyEntityRelationshipListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyEntityRelationshipListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyEntityRelationshipListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element GALGAS_toManyEntityRelationshipListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration_2D_element result ;
  const GALGAS_toManyEntityRelationshipListForGeneration_2D_element * p = (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyEntityRelationshipListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyEntityRelationshipListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (void) :
mProperty_mObjectTypeName (),
mProperty_mModelName (),
mProperty_mModelTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element::~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mProperty_mObjectTypeName (inOperand0),
mProperty_mModelName (inOperand1),
mProperty_mModelTypeName (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_validationStubRoutineListForGeneration_2D_element::isValid (void) const {
  return mProperty_mObjectTypeName.isValid () && mProperty_mModelName.isValid () && mProperty_mModelTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration_2D_element::drop (void) {
  mProperty_mObjectTypeName.drop () ;
  mProperty_mModelName.drop () ;
  mProperty_mModelTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mObjectTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @validationStubRoutineListForGeneration-element type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ("validationStubRoutineListForGeneration-element",
                                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration_2D_element::GALGAS_actionListForGeneration_2D_element (void) :
mProperty_mClassName (),
mProperty_mActionName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration_2D_element::~ GALGAS_actionListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration_2D_element::GALGAS_actionListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_string & inOperand1) :
mProperty_mClassName (inOperand0),
mProperty_mActionName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_actionListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_actionListForGeneration_2D_element::objectCompare (const GALGAS_actionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mClassName.objectCompare (inOperand.mProperty_mClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionName.objectCompare (inOperand.mProperty_mActionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_actionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mClassName.isValid () && mProperty_mActionName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration_2D_element::drop (void) {
  mProperty_mClassName.drop () ;
  mProperty_mActionName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @actionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionListForGeneration_2D_element::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionListForGeneration_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @actionListForGeneration-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionListForGeneration_2D_element ("actionListForGeneration-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actionListForGeneration_2D_element result ;
  const GALGAS_actionListForGeneration_2D_element * p = (const GALGAS_actionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element::~ GALGAS_multipleBindingGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectExpression (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_multipleBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList_2D_element::getter_mBoundObjectExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectExpression ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @multipleBindingGenerationList-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ("multipleBindingGenerationList-element",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element::GALGAS_arrayControllerFilterListForGeneration_2D_element (void) :
mProperty_mFilterPropertyName (),
mProperty_mFilterPropertyKind () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element::~ GALGAS_arrayControllerFilterListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element::GALGAS_arrayControllerFilterListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_propertyKind & inOperand1) :
mProperty_mFilterPropertyName (inOperand0),
mProperty_mFilterPropertyKind (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element GALGAS_arrayControllerFilterListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_propertyKind & inOperand1 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerFilterListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_arrayControllerFilterListForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerFilterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFilterPropertyName.objectCompare (inOperand.mProperty_mFilterPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilterPropertyKind.objectCompare (inOperand.mProperty_mFilterPropertyKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_arrayControllerFilterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFilterPropertyName.isValid () && mProperty_mFilterPropertyKind.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration_2D_element::drop (void) {
  mProperty_mFilterPropertyName.drop () ;
  mProperty_mFilterPropertyKind.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerFilterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFilterPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilterPropertyKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerFilterListForGeneration_2D_element::getter_mFilterPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_arrayControllerFilterListForGeneration_2D_element::getter_mFilterPropertyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterPropertyKind ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @arrayControllerFilterListForGeneration-element type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration_2D_element ("arrayControllerFilterListForGeneration-element",
                                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerFilterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerFilterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerFilterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element GALGAS_arrayControllerFilterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration_2D_element result ;
  const GALGAS_arrayControllerFilterListForGeneration_2D_element * p = (const GALGAS_arrayControllerFilterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerFilterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerFilterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mColumnOutletTypeName (),
mProperty_mRunAction (),
mProperty_mRegularBindingsGenerationList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::~ GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_regularBindingsGenerationList & inOperand3) :
mProperty_mColumnName (inOperand0),
mProperty_mColumnOutletTypeName (inOperand1),
mProperty_mRunAction (inOperand2),
mProperty_mRegularBindingsGenerationList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                                              const GALGAS_regularBindingsGenerationList & inOperand3 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mColumnOutletTypeName.isValid () && mProperty_mRunAction.isValid () && mProperty_mRegularBindingsGenerationList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mColumnOutletTypeName.drop () ;
  mProperty_mRunAction.drop () ;
  mProperty_mRegularBindingsGenerationList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerBoundColumnListForGeneration-element:" ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @arrayControllerBoundColumnListForGeneration-element type                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration_2D_element ("arrayControllerBoundColumnListForGeneration-element",
                                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration_2D_element result ;
  const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element * p = (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mSortPropertyKind (),
mProperty_mObservablePropertyForSorting () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::~ GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_propertyKind & inOperand1,
                                                                                                                                const GALGAS_string & inOperand2) :
mProperty_mColumnName (inOperand0),
mProperty_mSortPropertyKind (inOperand1),
mProperty_mObservablePropertyForSorting (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                const GALGAS_propertyKind & inOperand1,
                                                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerSortedColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerSortedColumnListForGeneration_2D_element & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mSortPropertyKind.isValid () && mProperty_mObservablePropertyForSorting.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mSortPropertyKind.drop () ;
  mProperty_mObservablePropertyForSorting.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerSortedColumnListForGeneration-element:" ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::getter_mSortPropertyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortPropertyKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::getter_mObservablePropertyForSorting (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservablePropertyForSorting ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @arrayControllerSortedColumnListForGeneration-element type                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration_2D_element ("arrayControllerSortedColumnListForGeneration-element",
                                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerSortedColumnListForGeneration_2D_element result ;
  const GALGAS_arrayControllerSortedColumnListForGeneration_2D_element * p = (const GALGAS_arrayControllerSortedColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerSortedColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerSortedColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (void) :
mProperty_mOwnerName (),
mProperty_mSelectionControllerName (),
mProperty_mBoundControllerName (),
mProperty_mBoundControllerPropertyName (),
mProperty_mSelectionTypeName (),
mProperty_mSelectionObservablePropertyMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element::~ GALGAS_selectionControllerForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_string & inOperand2,
                                                                                                        const GALGAS_string & inOperand3,
                                                                                                        const GALGAS_string & inOperand4,
                                                                                                        const GALGAS_observablePropertyMap & inOperand5) :
mProperty_mOwnerName (inOperand0),
mProperty_mSelectionControllerName (inOperand1),
mProperty_mBoundControllerName (inOperand2),
mProperty_mBoundControllerPropertyName (inOperand3),
mProperty_mSelectionTypeName (inOperand4),
mProperty_mSelectionObservablePropertyMap (inOperand5) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_string & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4,
                                                                                                                        const GALGAS_observablePropertyMap & inOperand5 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_selectionControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mSelectionTypeName.objectCompare (inOperand.mProperty_mSelectionTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionObservablePropertyMap.objectCompare (inOperand.mProperty_mSelectionObservablePropertyMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_selectionControllerForGeneration_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mSelectionControllerName.isValid () && mProperty_mBoundControllerName.isValid () && mProperty_mBoundControllerPropertyName.isValid () && mProperty_mSelectionTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration_2D_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mSelectionControllerName.drop () ;
  mProperty_mBoundControllerName.drop () ;
  mProperty_mBoundControllerPropertyName.drop () ;
  mProperty_mSelectionTypeName.drop () ;
  mProperty_mSelectionObservablePropertyMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    mProperty_mSelectionTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundControllerPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionObservablePropertyMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @selectionControllerForGeneration-element type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ("selectionControllerForGeneration-element",
                                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selectionControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (void) :
mProperty_mDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element::~ GALGAS_defaultValueList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (const GALGAS_abstractDefaultValue & inOperand0) :
mProperty_mDefaultValue (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::constructor_new (const GALGAS_abstractDefaultValue & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_defaultValueList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_defaultValueList_2D_element::objectCompare (const GALGAS_defaultValueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDefaultValue.objectCompare (inOperand.mProperty_mDefaultValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_defaultValueList_2D_element::isValid (void) const {
  return mProperty_mDefaultValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList_2D_element::drop (void) {
  mProperty_mDefaultValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultValueList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @defaultValueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_defaultValueList_2D_element::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @defaultValueList-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultValueList_2D_element ("defaultValueList-element",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_defaultValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultValueList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_defaultValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultValueList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  const GALGAS_defaultValueList_2D_element * p = (const GALGAS_defaultValueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultValueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultValueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (void) :
mProperty_mType () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList_2D_element::~ GALGAS_typeKindList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (const GALGAS_typeKind & inOperand0) :
mProperty_mType (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeKindList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_typeKindList_2D_element::objectCompare (const GALGAS_typeKindList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_typeKindList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKindList_2D_element::drop (void) {
  mProperty_mType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKindList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @typeKindList-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList_2D_element ("typeKindList-element",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeKindList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeKindList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList_2D_element::~ GALGAS_propertyGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (const GALGAS_propertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList_2D_element GALGAS_propertyGenerationList_2D_element::constructor_new (const GALGAS_propertyGeneration & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_propertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyGenerationList_2D_element::objectCompare (const GALGAS_propertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_propertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGeneration GALGAS_propertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @propertyGenerationList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ("propertyGenerationList-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (void) :
mProperty_mTypeName (),
mProperty_mIsClass () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element::~ GALGAS_transientExternTypeList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_bool & inOperand1) :
mProperty_mTypeName (inOperand0),
mProperty_mIsClass (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientExternTypeList_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_bool & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientExternTypeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_transientExternTypeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_transientExternTypeList_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mIsClass.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientExternTypeList_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mIsClass.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientExternTypeList_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientExternTypeList_2D_element::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsClass ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @transientExternTypeList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ("transientExternTypeList-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientExternTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientExternTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientExternTypeList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (void) :
mProperty_mFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList_2D_element::~ GALGAS_fileGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (const GALGAS_abstractFileGeneration & inOperand0) :
mProperty_mFileGeneration (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList_2D_element GALGAS_fileGenerationList_2D_element::constructor_new (const GALGAS_abstractFileGeneration & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fileGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fileGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_fileGenerationList_2D_element::objectCompare (const GALGAS_fileGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileGeneration.objectCompare (inOperand.mProperty_mFileGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_fileGenerationList_2D_element::isValid (void) const {
  return mProperty_mFileGeneration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fileGenerationList_2D_element::drop (void) {
  mProperty_mFileGeneration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractFileGeneration GALGAS_fileGenerationList_2D_element::getter_mFileGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileGeneration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @fileGenerationList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fileGenerationList_2D_element ("fileGenerationList-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_fileGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_fileGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       N O N    T E R M I N A L    N A M E S                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_easyBindings_grammar [80] = {
  "<start_symbol>",// Index 0
  "<extern_swift_delegate>",// Index 1
  "<extern_swift_func>",// Index 2
  "<class_declaration>",// Index 3
  "<enum_declaration>",// Index 4
  "<entity_declaration>",// Index 5
  "<document_declaration>",// Index 6
  "<preferences_declaration>",// Index 7
  "<outlet_class_declaration>",// Index 8
  "<binding_specification>",// Index 9
  "<outlet_declaration>",// Index 10
  "<observable_property>",// Index 11
  "<transient_declaration>",// Index 12
  "<simple_stored_declaration>",// Index 13
  "<toOne_relationship>",// Index 14
  "<toMany_relationship>",// Index 15
  "<stored_array_declaration>",// Index 16
  "<action_declaration>",// Index 17
  "<booleanMultipleBindingExpression>",// Index 18
  "<booleanMultipleBindingComparison>",// Index 19
  "<booleanMultipleBindingTerm>",// Index 20
  "<booleanMultipleBindingOperand>",// Index 21
  "<binding_option_list>",// Index 22
  "<controller_declaration>",// Index 23
  "<column_bindings>",// Index 24
  "<explicit_value>",// Index 25
  "<select_easyBindings_5F_syntax_0>",// Index 26
  "<select_easyBindings_5F_syntax_1>",// Index 27
  "<select_easyBindings_5F_syntax_2>",// Index 28
  "<select_easyBindings_5F_syntax_3>",// Index 29
  "<select_easyBindings_5F_syntax_4>",// Index 30
  "<select_easyBindings_5F_syntax_5>",// Index 31
  "<select_easyBindings_5F_syntax_6>",// Index 32
  "<select_easyBindings_5F_syntax_7>",// Index 33
  "<select_easyBindings_5F_syntax_8>",// Index 34
  "<select_easyBindings_5F_syntax_9>",// Index 35
  "<select_easyBindings_5F_syntax_10>",// Index 36
  "<select_easyBindings_5F_syntax_11>",// Index 37
  "<select_easyBindings_5F_syntax_12>",// Index 38
  "<select_easyBindings_5F_syntax_13>",// Index 39
  "<select_easyBindings_5F_syntax_14>",// Index 40
  "<select_easyBindings_5F_syntax_15>",// Index 41
  "<select_easyBindings_5F_syntax_16>",// Index 42
  "<select_easyBindings_5F_syntax_17>",// Index 43
  "<select_easyBindings_5F_syntax_18>",// Index 44
  "<select_easyBindings_5F_syntax_19>",// Index 45
  "<select_easyBindings_5F_syntax_20>",// Index 46
  "<select_easyBindings_5F_syntax_21>",// Index 47
  "<select_easyBindings_5F_syntax_22>",// Index 48
  "<select_easyBindings_5F_syntax_23>",// Index 49
  "<select_easyBindings_5F_syntax_24>",// Index 50
  "<select_easyBindings_5F_syntax_25>",// Index 51
  "<select_easyBindings_5F_syntax_26>",// Index 52
  "<select_easyBindings_5F_syntax_27>",// Index 53
  "<select_easyBindings_5F_syntax_28>",// Index 54
  "<select_easyBindings_5F_syntax_29>",// Index 55
  "<select_easyBindings_5F_syntax_30>",// Index 56
  "<select_easyBindings_5F_syntax_31>",// Index 57
  "<select_easyBindings_5F_syntax_32>",// Index 58
  "<select_easyBindings_5F_syntax_33>",// Index 59
  "<select_easyBindings_5F_syntax_34>",// Index 60
  "<select_easyBindings_5F_syntax_35>",// Index 61
  "<select_easyBindings_5F_syntax_36>",// Index 62
  "<select_easyBindings_5F_syntax_37>",// Index 63
  "<select_easyBindings_5F_syntax_38>",// Index 64
  "<select_easyBindings_5F_syntax_39>",// Index 65
  "<select_easyBindings_5F_syntax_40>",// Index 66
  "<select_easyBindings_5F_syntax_41>",// Index 67
  "<select_easyBindings_5F_syntax_42>",// Index 68
  "<select_easyBindings_5F_syntax_43>",// Index 69
  "<select_easyBindings_5F_syntax_44>",// Index 70
  "<select_easyBindings_5F_syntax_45>",// Index 71
  "<select_easyBindings_5F_syntax_46>",// Index 72
  "<select_easyBindings_5F_syntax_47>",// Index 73
  "<select_easyBindings_5F_syntax_48>",// Index 74
  "<select_easyBindings_5F_syntax_49>",// Index 75
  "<select_easyBindings_5F_syntax_50>",// Index 76
  "<select_easyBindings_5F_syntax_51>",// Index 77
  "<select_easyBindings_5F_syntax_52>",// Index 78
  "<>"// Index 79
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Action tables handle shift and reduce actions ;
//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;
//  - the accept action is (terminal_symbol, ACCEPT) ;
//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.

#define SHIFT(a) ((a) + 2)
#define REDUCE(a) (-(a) - 1)
#define ACCEPT (1)
#define END (-1)

static const int16_t gActionTable_easyBindings_grammar [] = {
// State S0 (index = 0)
  C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S1 (index = 23)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (20)
, END
// State S2 (index = 26)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (21)
, END
// State S3 (index = 29)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (22)
, END
// State S4 (index = 32)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (23)
, END
// State S5 (index = 35)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, END
// State S6 (index = 38)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (24)
, END
// State S7 (index = 41)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (25)
, END
// State S8 (index = 44)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (26)
, END
// State S9 (index = 47)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (27)
, END
// State S10 (index = 50)
, C_Lexique_easyBindings_5F_lexique::kToken_, ACCEPT
, END
// State S11 (index = 53)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S12 (index = 76)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S13 (index = 99)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S14 (index = 122)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S15 (index = 145)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S16 (index = 168)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S17 (index = 191)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S18 (index = 214)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (0)
, END
// State S19 (index = 217)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (35)
, END
// State S20 (index = 220)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (36)
, END
// State S21 (index = 223)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (37)
, C_Lexique_easyBindings_5F_lexique::kToken_struct, SHIFT (38)
, END
// State S22 (index = 228)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (40)
, END
// State S23 (index = 231)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (41)
, END
// State S24 (index = 234)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (42)
, END
// State S25 (index = 237)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S26 (index = 258)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (60)
, END
// State S27 (index = 261)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (61)
, END
// State S28 (index = 264)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S29 (index = 267)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S30 (index = 270)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (35)
, END
// State S31 (index = 273)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (38)
, END
// State S32 (index = 276)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S33 (index = 279)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (39)
, END
// State S34 (index = 282)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (40)
, END
// State S35 (index = 285)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (53)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (62)
, END
// State S36 (index = 290)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S37 (index = 313)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (41)
, END
// State S38 (index = 316)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (42)
, END
// State S39 (index = 319)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (65)
, END
// State S40 (index = 322)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, END
// State S41 (index = 335)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (73)
, END
// State S42 (index = 338)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (74)
, END
// State S43 (index = 341)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (75)
, END
// State S44 (index = 344)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (76)
, END
// State S45 (index = 347)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (77)
, END
// State S46 (index = 352)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (79)
, END
// State S47 (index = 355)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (80)
, END
// State S48 (index = 358)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (81)
, END
// State S49 (index = 361)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (82)
, END
// State S50 (index = 364)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (83)
, END
// State S51 (index = 367)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (84)
, END
// State S52 (index = 370)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S53 (index = 391)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S54 (index = 412)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S55 (index = 433)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S56 (index = 454)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S57 (index = 475)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S58 (index = 496)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S59 (index = 517)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (92)
, END
// State S60 (index = 520)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (93)
, END
// State S61 (index = 523)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (94)
, END
// State S62 (index = 526)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (95)
, END
// State S63 (index = 529)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (96)
, END
// State S64 (index = 532)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (33)
, END
// State S65 (index = 535)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (97)
, END
// State S66 (index = 538)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (98)
, END
// State S67 (index = 541)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, END
// State S68 (index = 554)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, END
// State S69 (index = 567)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, END
// State S70 (index = 580)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, END
// State S71 (index = 593)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, END
// State S72 (index = 606)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (104)
, END
// State S73 (index = 609)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (105)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (43)
, END
// State S74 (index = 614)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (107)
, END
// State S75 (index = 617)
, C_Lexique_easyBindings_5F_lexique::kToken_calledBy, SHIFT (108)
, END
// State S76 (index = 620)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (109)
, END
// State S77 (index = 623)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (77)
, END
// State S78 (index = 628)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (111)
, END
// State S79 (index = 631)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (112)
, END
// State S80 (index = 634)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (113)
, END
// State S81 (index = 637)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (114)
, END
// State S82 (index = 640)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (115)
, END
// State S83 (index = 643)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (116)
, END
// State S84 (index = 646)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (117)
, END
// State S85 (index = 649)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, END
// State S86 (index = 652)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, END
// State S87 (index = 655)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, END
// State S88 (index = 658)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (73)
, END
// State S89 (index = 661)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (77)
, END
// State S90 (index = 664)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, END
// State S91 (index = 667)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (78)
, END
// State S92 (index = 670)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (8)
, END
// State S93 (index = 693)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (118)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (79)
, END
// State S94 (index = 708)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (120)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (121)
, END
// State S95 (index = 713)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (123)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (55)
, END
// State S96 (index = 718)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (125)
, END
// State S97 (index = 723)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (3)
, END
// State S98 (index = 746)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (127)
, END
// State S99 (index = 749)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (49)
, END
// State S100 (index = 752)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (48)
, END
// State S101 (index = 755)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (47)
, END
// State S102 (index = 758)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (46)
, END
// State S103 (index = 761)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (50)
, END
// State S104 (index = 764)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (5)
, END
// State S105 (index = 787)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (128)
, END
// State S106 (index = 790)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (129)
, END
// State S107 (index = 793)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S108 (index = 808)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (135)
, END
// State S109 (index = 811)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (136)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, REDUCE (132)
, END
// State S110 (index = 816)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (137)
, END
// State S111 (index = 819)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (138)
, END
// State S112 (index = 822)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (142)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (144)
, END
// State S113 (index = 837)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (146)
, END
// State S114 (index = 840)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (18)
, END
// State S115 (index = 865)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (147)
, END
// State S116 (index = 868)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (148)
, END
// State S117 (index = 871)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (149)
, END
// State S118 (index = 874)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (150)
, END
// State S119 (index = 877)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (155)
, END
// State S120 (index = 890)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (90)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (90)
, END
// State S121 (index = 895)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (89)
, END
// State S122 (index = 900)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (158)
, END
// State S123 (index = 905)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (160)
, END
// State S124 (index = 908)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (161)
, END
// State S125 (index = 911)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (162)
, END
// State S126 (index = 914)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (163)
, END
// State S127 (index = 917)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (1)
, END
// State S128 (index = 930)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (105)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (43)
, END
// State S129 (index = 935)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (4)
, END
// State S130 (index = 958)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S131 (index = 973)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S132 (index = 988)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S133 (index = 1003)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S134 (index = 1018)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (169)
, END
// State S135 (index = 1021)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (170)
, END
// State S136 (index = 1024)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (171)
, END
// State S137 (index = 1027)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (172)
, END
// State S138 (index = 1030)
, C_Lexique_easyBindings_5F_lexique::kToken_default, SHIFT (173)
, END
// State S139 (index = 1033)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (174)
, END
// State S140 (index = 1036)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (175)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (176)
, END
// State S141 (index = 1041)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S142 (index = 1062)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S143 (index = 1083)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (195)
, END
// State S144 (index = 1086)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, END
// State S145 (index = 1101)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (197)
, END
// State S146 (index = 1104)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (17)
, END
// State S147 (index = 1125)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (198)
, END
// State S148 (index = 1128)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (199)
, END
// State S149 (index = 1131)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (200)
, END
// State S150 (index = 1134)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (80)
, END
// State S151 (index = 1147)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (155)
, END
// State S152 (index = 1160)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (155)
, END
// State S153 (index = 1173)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (155)
, END
// State S154 (index = 1186)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (155)
, END
// State S155 (index = 1199)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (155)
, END
// State S156 (index = 1212)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (206)
, END
// State S157 (index = 1215)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (91)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (91)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (91)
, END
// State S158 (index = 1222)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (92)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (92)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (92)
, END
// State S159 (index = 1229)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (207)
, END
// State S160 (index = 1236)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (123)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (55)
, END
// State S161 (index = 1241)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (54)
, END
// State S162 (index = 1244)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (58)
, END
// State S163 (index = 1247)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S164 (index = 1266)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (44)
, END
// State S165 (index = 1269)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, END
// State S166 (index = 1272)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (68)
, END
// State S167 (index = 1275)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, END
// State S168 (index = 1278)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, END
// State S169 (index = 1281)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (7)
, END
// State S170 (index = 1304)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (2)
, END
// State S171 (index = 1327)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, REDUCE (133)
, END
// State S172 (index = 1330)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, END
// State S173 (index = 1345)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (226)
, END
// State S174 (index = 1360)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (142)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (144)
, END
// State S175 (index = 1375)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (105)
, END
// State S176 (index = 1378)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (104)
, END
// State S177 (index = 1381)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (230)
, END
// State S178 (index = 1384)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (231)
, END
// State S179 (index = 1387)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S180 (index = 1408)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (233)
, END
// State S181 (index = 1411)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (234)
, END
// State S182 (index = 1414)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (235)
, END
// State S183 (index = 1417)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (114)
, END
// State S184 (index = 1460)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (115)
, END
// State S185 (index = 1503)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (116)
, END
// State S186 (index = 1546)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S187 (index = 1567)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (25)
, END
// State S188 (index = 1606)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (22)
, END
// State S189 (index = 1645)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (142)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (144)
, END
// State S190 (index = 1660)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (238)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (148)
, END
// State S191 (index = 1683)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, SHIFT (240)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, SHIFT (241)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, SHIFT (242)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, SHIFT (243)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, SHIFT (244)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, SHIFT (245)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (150)
, END
// State S192 (index = 1718)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (157)
, END
// State S193 (index = 1757)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (12)
, END
// State S194 (index = 1800)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (142)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (144)
, END
// State S195 (index = 1815)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (251)
, END
// State S196 (index = 1818)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (106)
, END
// State S197 (index = 1837)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (11)
, END
// State S198 (index = 1858)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (226)
, END
// State S199 (index = 1873)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (255)
, END
// State S200 (index = 1876)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (256)
, END
// State S201 (index = 1879)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (82)
, END
// State S202 (index = 1882)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (83)
, END
// State S203 (index = 1885)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (84)
, END
// State S204 (index = 1888)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (85)
, END
// State S205 (index = 1891)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (86)
, END
// State S206 (index = 1894)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (9)
, END
// State S207 (index = 1917)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (120)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (121)
, END
// State S208 (index = 1922)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (258)
, END
// State S209 (index = 1927)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (56)
, END
// State S210 (index = 1930)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (260)
, END
// State S211 (index = 1935)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (262)
, END
// State S212 (index = 1940)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S213 (index = 1959)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S214 (index = 1978)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S215 (index = 1997)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S216 (index = 2016)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S217 (index = 2035)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (51)
, END
// State S218 (index = 2054)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (270)
, END
// State S219 (index = 2057)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (271)
, END
// State S220 (index = 2062)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (189)
, END
// State S221 (index = 2071)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (190)
, END
// State S222 (index = 2080)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (226)
, END
// State S223 (index = 2095)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (187)
, END
// State S224 (index = 2104)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (185)
, END
// State S225 (index = 2113)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (186)
, END
// State S226 (index = 2122)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (188)
, END
// State S227 (index = 2131)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (274)
, END
// State S228 (index = 2134)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (31)
, END
// State S229 (index = 2143)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, END
// State S230 (index = 2146)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (275)
, END
// State S231 (index = 2149)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (276)
, END
// State S232 (index = 2152)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (277)
, END
// State S233 (index = 2155)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (278)
, END
// State S234 (index = 2158)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (279)
, END
// State S235 (index = 2161)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (280)
, END
// State S236 (index = 2164)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (23)
, END
// State S237 (index = 2203)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (100)
, END
// State S238 (index = 2206)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S239 (index = 2227)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (19)
, END
// State S240 (index = 2248)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S241 (index = 2269)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S242 (index = 2290)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S243 (index = 2311)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S244 (index = 2332)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S245 (index = 2353)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S246 (index = 2374)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (20)
, END
// State S247 (index = 2397)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S248 (index = 2418)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S249 (index = 2439)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (21)
, END
// State S250 (index = 2474)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (101)
, END
// State S251 (index = 2477)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (290)
, END
// State S252 (index = 2480)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, END
// State S253 (index = 2495)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (292)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (160)
, END
// State S254 (index = 2516)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (295)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (164)
, END
// State S255 (index = 2521)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (297)
, END
// State S256 (index = 2524)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (298)
, END
// State S257 (index = 2527)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (158)
, END
// State S258 (index = 2532)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (300)
, END
// State S259 (index = 2535)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (301)
, END
// State S260 (index = 2538)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (260)
, END
// State S261 (index = 2543)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (303)
, END
// State S262 (index = 2546)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (262)
, END
// State S263 (index = 2551)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (305)
, END
// State S264 (index = 2554)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (61)
, END
// State S265 (index = 2557)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (60)
, END
// State S266 (index = 2560)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, END
// State S267 (index = 2563)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, END
// State S268 (index = 2566)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, END
// State S269 (index = 2569)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, END
// State S270 (index = 2572)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (6)
, END
// State S271 (index = 2595)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, END
// State S272 (index = 2610)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (307)
, END
// State S273 (index = 2613)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (308)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (192)
, END
// State S274 (index = 2618)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (14)
, END
// State S275 (index = 2643)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (142)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (144)
, END
// State S276 (index = 2658)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (311)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (130)
, END
// State S277 (index = 2703)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (24)
, END
// State S278 (index = 2742)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (313)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (117)
, END
// State S279 (index = 2787)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (315)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (128)
, END
// State S280 (index = 2832)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (317)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (122)
, END
// State S281 (index = 2877)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (238)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (148)
, END
// State S282 (index = 2900)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (151)
, END
// State S283 (index = 2923)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (152)
, END
// State S284 (index = 2946)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (153)
, END
// State S285 (index = 2969)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (154)
, END
// State S286 (index = 2992)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (155)
, END
// State S287 (index = 3015)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (156)
, END
// State S288 (index = 3038)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (157)
, END
// State S289 (index = 3077)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (157)
, END
// State S290 (index = 3116)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (322)
, END
// State S291 (index = 3133)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (106)
, END
// State S292 (index = 3152)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (325)
, END
// State S293 (index = 3155)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (142)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (144)
, END
// State S294 (index = 3170)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (26)
, END
// State S295 (index = 3189)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (327)
, END
// State S296 (index = 3192)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (328)
, END
// State S297 (index = 3195)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (329)
, END
// State S298 (index = 3198)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (330)
, END
// State S299 (index = 3201)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (207)
, END
// State S300 (index = 3208)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (332)
, END
// State S301 (index = 3211)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (10)
, END
// State S302 (index = 3234)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (139)
, END
// State S303 (index = 3237)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (333)
, END
// State S304 (index = 3240)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (145)
, END
// State S305 (index = 3243)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (334)
, END
// State S306 (index = 3246)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (271)
, END
// State S307 (index = 3251)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (13)
, END
// State S308 (index = 3276)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (226)
, END
// State S309 (index = 3291)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (337)
, END
// State S310 (index = 3294)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (99)
, END
// State S311 (index = 3297)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (338)
, END
// State S312 (index = 3300)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (113)
, END
// State S313 (index = 3343)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (340)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (341)
, END
// State S314 (index = 3350)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (110)
, END
// State S315 (index = 3393)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (343)
, END
// State S316 (index = 3396)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (112)
, END
// State S317 (index = 3439)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (344)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (345)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (346)
, C_Lexique_easyBindings_5F_lexique::kToken_one, SHIFT (347)
, END
// State S318 (index = 3448)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (111)
, END
// State S319 (index = 3491)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (149)
, END
// State S320 (index = 3512)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (158)
, END
// State S321 (index = 3547)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (159)
, END
// State S322 (index = 3582)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (349)
, END
// State S323 (index = 3585)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (142)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (144)
, END
// State S324 (index = 3600)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (107)
, END
// State S325 (index = 3617)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (351)
, END
// State S326 (index = 3620)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (102)
, END
// State S327 (index = 3623)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (352)
, END
// State S328 (index = 3626)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (353)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (354)
, END
// State S329 (index = 3631)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (356)
, END
// State S330 (index = 3634)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (357)
, END
// State S331 (index = 3637)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (88)
, END
// State S332 (index = 3642)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (358)
, END
// State S333 (index = 3645)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (359)
, END
// State S334 (index = 3650)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (147)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (361)
, END
// State S335 (index = 3655)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (135)
, END
// State S336 (index = 3658)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (308)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (192)
, END
// State S337 (index = 3663)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (191)
, END
// State S338 (index = 3672)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (131)
, END
// State S339 (index = 3715)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (119)
, END
// State S340 (index = 3758)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (364)
, END
// State S341 (index = 3761)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (121)
, END
// State S342 (index = 3804)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (118)
, END
// State S343 (index = 3847)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (129)
, END
// State S344 (index = 3890)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (127)
, END
// State S345 (index = 3933)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (365)
, END
// State S346 (index = 3936)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (126)
, END
// State S347 (index = 3979)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (366)
, END
// State S348 (index = 3982)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (123)
, END
// State S349 (index = 4025)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (109)
, END
// State S350 (index = 4040)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, END
// State S351 (index = 4043)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (226)
, END
// State S352 (index = 4058)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (226)
, END
// State S353 (index = 4073)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (166)
, END
// State S354 (index = 4076)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (167)
, END
// State S355 (index = 4079)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (369)
, END
// State S356 (index = 4082)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (29)
, END
// State S357 (index = 4105)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (30)
, END
// State S358 (index = 4128)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (370)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (95)
, END
// State S359 (index = 4133)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (372)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (373)
, END
// State S360 (index = 4138)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (375)
, END
// State S361 (index = 4141)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (376)
, END
// State S362 (index = 4144)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (377)
, END
// State S363 (index = 4147)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (193)
, END
// State S364 (index = 4150)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (378)
, END
// State S365 (index = 4153)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (379)
, END
// State S366 (index = 4156)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (380)
, END
// State S367 (index = 4159)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (381)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (162)
, END
// State S368 (index = 4164)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (295)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (164)
, END
// State S369 (index = 4169)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (384)
, END
// State S370 (index = 4172)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (385)
, END
// State S371 (index = 4175)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (386)
, END
// State S372 (index = 4178)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (142)
, END
// State S373 (index = 4181)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (143)
, END
// State S374 (index = 4184)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (387)
, END
// State S375 (index = 4187)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (15)
, END
// State S376 (index = 4206)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (388)
, END
// State S377 (index = 4209)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (16)
, END
// State S378 (index = 4228)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (120)
, END
// State S379 (index = 4271)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (124)
, END
// State S380 (index = 4314)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (125)
, END
// State S381 (index = 4357)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (389)
, END
// State S382 (index = 4360)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (390)
, END
// State S383 (index = 4363)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (165)
, END
// State S384 (index = 4366)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, SHIFT (391)
, END
// State S385 (index = 4373)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (393)
, END
// State S386 (index = 4376)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (94)
, END
// State S387 (index = 4379)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (141)
, END
// State S388 (index = 4382)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (146)
, END
// State S389 (index = 4385)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (394)
, END
// State S390 (index = 4388)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (161)
, END
// State S391 (index = 4407)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (395)
, END
// State S392 (index = 4410)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (396)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (397)
, END
// State S393 (index = 4415)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (399)
, END
// State S394 (index = 4418)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (226)
, END
// State S395 (index = 4433)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (401)
, END
// State S396 (index = 4440)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (172)
, END
// State S397 (index = 4463)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (403)
, END
// State S398 (index = 4468)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (27)
, END
// State S399 (index = 4491)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (370)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (95)
, END
// State S400 (index = 4496)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (381)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (162)
, END
// State S401 (index = 4501)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (407)
, END
// State S402 (index = 4504)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (169)
, END
// State S403 (index = 4509)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (408)
, END
// State S404 (index = 4512)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (409)
, END
// State S405 (index = 4515)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (96)
, END
// State S406 (index = 4518)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (163)
, END
// State S407 (index = 4521)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (401)
, END
// State S408 (index = 4528)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken_sort, SHIFT (411)
, END
// State S409 (index = 4533)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (173)
, END
// State S410 (index = 4556)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (171)
, END
// State S411 (index = 4561)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (413)
, END
// State S412 (index = 4564)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (414)
, END
// State S413 (index = 4567)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (177)
, END
// State S414 (index = 4570)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (415)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (416)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (418)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (178)
, END
// State S415 (index = 4583)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (421)
, END
// State S416 (index = 4586)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S417 (index = 4607)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (187)
, END
// State S418 (index = 4628)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, END
// State S419 (index = 4643)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (403)
, END
// State S420 (index = 4648)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (28)
, END
// State S421 (index = 4653)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (426)
, END
// State S422 (index = 4656)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (415)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (416)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (418)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (178)
, END
// State S423 (index = 4669)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (415)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (416)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (418)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (178)
, END
// State S424 (index = 4682)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (429)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (183)
, END
// State S425 (index = 4699)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (175)
, END
// State S426 (index = 4702)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (431)
, END
// State S427 (index = 4705)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (180)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (180)
, END
// State S428 (index = 4710)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (181)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (181)
, END
// State S429 (index = 4715)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (185)
, END
// State S430 (index = 4730)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (292)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (160)
, END
// State S431 (index = 4751)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (415)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (416)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (418)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (178)
, END
// State S432 (index = 4764)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (429)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (183)
, END
// State S433 (index = 4781)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (415)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (416)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (418)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (178)
, END
// State S434 (index = 4794)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (179)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (179)
, END
// State S435 (index = 4799)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (184)
, END
// State S436 (index = 4814)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (182)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (182)
, END} ;

static const uint32_t gActionTableIndex_easyBindings_grammar [437] = {
  0  // S0
, 23  // S1
, 26  // S2
, 29  // S3
, 32  // S4
, 35  // S5
, 38  // S6
, 41  // S7
, 44  // S8
, 47  // S9
, 50  // S10
, 53  // S11
, 76  // S12
, 99  // S13
, 122  // S14
, 145  // S15
, 168  // S16
, 191  // S17
, 214  // S18
, 217  // S19
, 220  // S20
, 223  // S21
, 228  // S22
, 231  // S23
, 234  // S24
, 237  // S25
, 258  // S26
, 261  // S27
, 264  // S28
, 267  // S29
, 270  // S30
, 273  // S31
, 276  // S32
, 279  // S33
, 282  // S34
, 285  // S35
, 290  // S36
, 313  // S37
, 316  // S38
, 319  // S39
, 322  // S40
, 335  // S41
, 338  // S42
, 341  // S43
, 344  // S44
, 347  // S45
, 352  // S46
, 355  // S47
, 358  // S48
, 361  // S49
, 364  // S50
, 367  // S51
, 370  // S52
, 391  // S53
, 412  // S54
, 433  // S55
, 454  // S56
, 475  // S57
, 496  // S58
, 517  // S59
, 520  // S60
, 523  // S61
, 526  // S62
, 529  // S63
, 532  // S64
, 535  // S65
, 538  // S66
, 541  // S67
, 554  // S68
, 567  // S69
, 580  // S70
, 593  // S71
, 606  // S72
, 609  // S73
, 614  // S74
, 617  // S75
, 620  // S76
, 623  // S77
, 628  // S78
, 631  // S79
, 634  // S80
, 637  // S81
, 640  // S82
, 643  // S83
, 646  // S84
, 649  // S85
, 652  // S86
, 655  // S87
, 658  // S88
, 661  // S89
, 664  // S90
, 667  // S91
, 670  // S92
, 693  // S93
, 708  // S94
, 713  // S95
, 718  // S96
, 723  // S97
, 746  // S98
, 749  // S99
, 752  // S100
, 755  // S101
, 758  // S102
, 761  // S103
, 764  // S104
, 787  // S105
, 790  // S106
, 793  // S107
, 808  // S108
, 811  // S109
, 816  // S110
, 819  // S111
, 822  // S112
, 837  // S113
, 840  // S114
, 865  // S115
, 868  // S116
, 871  // S117
, 874  // S118
, 877  // S119
, 890  // S120
, 895  // S121
, 900  // S122
, 905  // S123
, 908  // S124
, 911  // S125
, 914  // S126
, 917  // S127
, 930  // S128
, 935  // S129
, 958  // S130
, 973  // S131
, 988  // S132
, 1003  // S133
, 1018  // S134
, 1021  // S135
, 1024  // S136
, 1027  // S137
, 1030  // S138
, 1033  // S139
, 1036  // S140
, 1041  // S141
, 1062  // S142
, 1083  // S143
, 1086  // S144
, 1101  // S145
, 1104  // S146
, 1125  // S147
, 1128  // S148
, 1131  // S149
, 1134  // S150
, 1147  // S151
, 1160  // S152
, 1173  // S153
, 1186  // S154
, 1199  // S155
, 1212  // S156
, 1215  // S157
, 1222  // S158
, 1229  // S159
, 1236  // S160
, 1241  // S161
, 1244  // S162
, 1247  // S163
, 1266  // S164
, 1269  // S165
, 1272  // S166
, 1275  // S167
, 1278  // S168
, 1281  // S169
, 1304  // S170
, 1327  // S171
, 1330  // S172
, 1345  // S173
, 1360  // S174
, 1375  // S175
, 1378  // S176
, 1381  // S177
, 1384  // S178
, 1387  // S179
, 1408  // S180
, 1411  // S181
, 1414  // S182
, 1417  // S183
, 1460  // S184
, 1503  // S185
, 1546  // S186
, 1567  // S187
, 1606  // S188
, 1645  // S189
, 1660  // S190
, 1683  // S191
, 1718  // S192
, 1757  // S193
, 1800  // S194
, 1815  // S195
, 1818  // S196
, 1837  // S197
, 1858  // S198
, 1873  // S199
, 1876  // S200
, 1879  // S201
, 1882  // S202
, 1885  // S203
, 1888  // S204
, 1891  // S205
, 1894  // S206
, 1917  // S207
, 1922  // S208
, 1927  // S209
, 1930  // S210
, 1935  // S211
, 1940  // S212
, 1959  // S213
, 1978  // S214
, 1997  // S215
, 2016  // S216
, 2035  // S217
, 2054  // S218
, 2057  // S219
, 2062  // S220
, 2071  // S221
, 2080  // S222
, 2095  // S223
, 2104  // S224
, 2113  // S225
, 2122  // S226
, 2131  // S227
, 2134  // S228
, 2143  // S229
, 2146  // S230
, 2149  // S231
, 2152  // S232
, 2155  // S233
, 2158  // S234
, 2161  // S235
, 2164  // S236
, 2203  // S237
, 2206  // S238
, 2227  // S239
, 2248  // S240
, 2269  // S241
, 2290  // S242
, 2311  // S243
, 2332  // S244
, 2353  // S245
, 2374  // S246
, 2397  // S247
, 2418  // S248
, 2439  // S249
, 2474  // S250
, 2477  // S251
, 2480  // S252
, 2495  // S253
, 2516  // S254
, 2521  // S255
, 2524  // S256
, 2527  // S257
, 2532  // S258
, 2535  // S259
, 2538  // S260
, 2543  // S261
, 2546  // S262
, 2551  // S263
, 2554  // S264
, 2557  // S265
, 2560  // S266
, 2563  // S267
, 2566  // S268
, 2569  // S269
, 2572  // S270
, 2595  // S271
, 2610  // S272
, 2613  // S273
, 2618  // S274
, 2643  // S275
, 2658  // S276
, 2703  // S277
, 2742  // S278
, 2787  // S279
, 2832  // S280
, 2877  // S281
, 2900  // S282
, 2923  // S283
, 2946  // S284
, 2969  // S285
, 2992  // S286
, 3015  // S287
, 3038  // S288
, 3077  // S289
, 3116  // S290
, 3133  // S291
, 3152  // S292
, 3155  // S293
, 3170  // S294
, 3189  // S295
, 3192  // S296
, 3195  // S297
, 3198  // S298
, 3201  // S299
, 3208  // S300
, 3211  // S301
, 3234  // S302
, 3237  // S303
, 3240  // S304
, 3243  // S305
, 3246  // S306
, 3251  // S307
, 3276  // S308
, 3291  // S309
, 3294  // S310
, 3297  // S311
, 3300  // S312
, 3343  // S313
, 3350  // S314
, 3393  // S315
, 3396  // S316
, 3439  // S317
, 3448  // S318
, 3491  // S319
, 3512  // S320
, 3547  // S321
, 3582  // S322
, 3585  // S323
, 3600  // S324
, 3617  // S325
, 3620  // S326
, 3623  // S327
, 3626  // S328
, 3631  // S329
, 3634  // S330
, 3637  // S331
, 3642  // S332
, 3645  // S333
, 3650  // S334
, 3655  // S335
, 3658  // S336
, 3663  // S337
, 3672  // S338
, 3715  // S339
, 3758  // S340
, 3761  // S341
, 3804  // S342
, 3847  // S343
, 3890  // S344
, 3933  // S345
, 3936  // S346
, 3979  // S347
, 3982  // S348
, 4025  // S349
, 4040  // S350
, 4043  // S351
, 4058  // S352
, 4073  // S353
, 4076  // S354
, 4079  // S355
, 4082  // S356
, 4105  // S357
, 4128  // S358
, 4133  // S359
, 4138  // S360
, 4141  // S361
, 4144  // S362
, 4147  // S363
, 4150  // S364
, 4153  // S365
, 4156  // S366
, 4159  // S367
, 4164  // S368
, 4169  // S369
, 4172  // S370
, 4175  // S371
, 4178  // S372
, 4181  // S373
, 4184  // S374
, 4187  // S375
, 4206  // S376
, 4209  // S377
, 4228  // S378
, 4271  // S379
, 4314  // S380
, 4357  // S381
, 4360  // S382
, 4363  // S383
, 4366  // S384
, 4373  // S385
, 4376  // S386
, 4379  // S387
, 4382  // S388
, 4385  // S389
, 4388  // S390
, 4407  // S391
, 4410  // S392
, 4415  // S393
, 4418  // S394
, 4433  // S395
, 4440  // S396
, 4463  // S397
, 4468  // S398
, 4491  // S399
, 4496  // S400
, 4501  // S401
, 4504  // S402
, 4509  // S403
, 4512  // S404
, 4515  // S405
, 4518  // S406
, 4521  // S407
, 4528  // S408
, 4533  // S409
, 4556  // S410
, 4561  // S411
, 4564  // S412
, 4567  // S413
, 4570  // S414
, 4583  // S415
, 4586  // S416
, 4607  // S417
, 4628  // S418
, 4643  // S419
, 4648  // S420
, 4653  // S421
, 4656  // S422
, 4669  // S423
, 4682  // S424
, 4699  // S425
, 4702  // S426
, 4705  // S427
, 4710  // S428
, 4715  // S429
, 4730  // S430
, 4751  // S431
, 4764  // S432
, 4781  // S433
, 4794  // S434
, 4799  // S435
, 4814  // S436
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_easyBindings_grammar_0 [21] = {0, 10,
  3, 11,
  4, 12,
  5, 13,
  6, 14,
  7, 15,
  8, 16,
  9, 17,
  26, 18,
  30, 19, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_11 [19] = {3, 11,
  4, 12,
  5, 13,
  6, 14,
  7, 15,
  8, 16,
  9, 17,
  26, 28,
  30, 19, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_12 [19] = {3, 11,
  4, 12,
  5, 13,
  6, 14,
  7, 15,
  8, 16,
  9, 17,
  26, 29,
  30, 19, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_13 [19] = {3, 11,
  4, 12,
  5, 13,
  6, 14,
  7, 15,
  8, 16,
  9, 17,
  26, 30,
  30, 19, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_14 [19] = {3, 11,
  4, 12,
  5, 13,
  6, 14,
  7, 15,
  8, 16,
  9, 17,
  26, 31,
  30, 19, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_15 [19] = {3, 11,
  4, 12,
  5, 13,
  6, 14,
  7, 15,
  8, 16,
  9, 17,
  26, 32,
  30, 19, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_16 [19] = {3, 11,
  4, 12,
  5, 13,
  6, 14,
  7, 15,
  8, 16,
  9, 17,
  26, 33,
  30, 19, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_17 [19] = {3, 11,
  4, 12,
  5, 13,
  6, 14,
  7, 15,
  8, 16,
  9, 17,
  26, 34,
  30, 19, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_21 [3] = {27, 39, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_25 [17] = {2, 52,
  10, 53,
  12, 54,
  13, 55,
  16, 56,
  17, 57,
  23, 58,
  36, 59, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_35 [3] = {31, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_36 [19] = {3, 11,
  4, 12,
  5, 13,
  6, 14,
  7, 15,
  8, 16,
  9, 17,
  26, 64,
  30, 19, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_40 [13] = {1, 67,
  2, 68,
  12, 69,
  13, 70,
  17, 71,
  29, 72, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_45 [3] = {57, 78, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_52 [17] = {2, 52,
  10, 53,
  12, 54,
  13, 55,
  16, 56,
  17, 57,
  23, 58,
  36, 85, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_53 [17] = {2, 52,
  10, 53,
  12, 54,
  13, 55,
  16, 56,
  17, 57,
  23, 58,
  36, 86, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_54 [17] = {2, 52,
  10, 53,
  12, 54,
  13, 55,
  16, 56,
  17, 57,
  23, 58,
  36, 87, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_55 [17] = {2, 52,
  10, 53,
  12, 54,
  13, 55,
  16, 56,
  17, 57,
  23, 58,
  36, 88, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_56 [17] = {2, 52,
  10, 53,
  12, 54,
  13, 55,
  16, 56,
  17, 57,
  23, 58,
  36, 89, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_57 [17] = {2, 52,
  10, 53,
  12, 54,
  13, 55,
  16, 56,
  17, 57,
  23, 58,
  36, 90, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_58 [17] = {2, 52,
  10, 53,
  12, 54,
  13, 55,
  16, 56,
  17, 57,
  23, 58,
  36, 91, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_67 [13] = {1, 67,
  2, 68,
  12, 69,
  13, 70,
  17, 71,
  29, 99, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_68 [13] = {1, 67,
  2, 68,
  12, 69,
  13, 70,
  17, 71,
  29, 100, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_69 [13] = {1, 67,
  2, 68,
  12, 69,
  13, 70,
  17, 71,
  29, 101, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_70 [13] = {1, 67,
  2, 68,
  12, 69,
  13, 70,
  17, 71,
  29, 102, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_71 [13] = {1, 67,
  2, 68,
  12, 69,
  13, 70,
  17, 71,
  29, 103, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_73 [3] = {28, 106, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_77 [3] = {57, 110, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_93 [3] = {37, 119, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_94 [3] = {40, 122, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_95 [3] = {32, 124, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_96 [3] = {33, 126, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_107 [11] = {10, 130,
  12, 131,
  17, 132,
  23, 133,
  35, 134, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_109 [3] = {55, 137, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_112 [3] = {44, 145, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_119 [3] = {38, 156, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_122 [3] = {41, 159, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_128 [3] = {28, 164, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_130 [11] = {10, 130,
  12, 131,
  17, 132,
  23, 133,
  35, 165, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_131 [11] = {10, 130,
  12, 131,
  17, 132,
  23, 133,
  35, 166, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_132 [11] = {10, 130,
  12, 131,
  17, 132,
  23, 133,
  35, 167, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_133 [11] = {10, 130,
  12, 131,
  17, 132,
  23, 133,
  35, 168, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_140 [3] = {45, 177, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_141 [13] = {11, 188,
  18, 189,
  19, 190,
  20, 191,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_142 [13] = {11, 188,
  18, 194,
  19, 190,
  20, 191,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_144 [5] = {11, 196,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_151 [3] = {38, 201, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_152 [3] = {38, 202, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_153 [3] = {38, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_154 [3] = {38, 204, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_155 [3] = {38, 205, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_159 [3] = {39, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_160 [3] = {32, 209, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_163 [15] = {12, 212,
  13, 213,
  14, 214,
  15, 215,
  17, 216,
  23, 217,
  34, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_172 [5] = {11, 219,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_173 [5] = {25, 227,
  77, 228, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_174 [3] = {44, 229, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_179 [13] = {11, 188,
  18, 232,
  19, 190,
  20, 191,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_186 [7] = {11, 188,
  21, 236,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_189 [3] = {44, 237, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_190 [3] = {63, 239, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_191 [3] = {64, 246, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_192 [3] = {65, 249, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_194 [3] = {44, 250, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_196 [3] = {46, 253, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_198 [5] = {25, 254,
  77, 228, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_207 [3] = {40, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_208 [3] = {42, 259, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_210 [3] = {58, 261, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_211 [3] = {61, 263, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_212 [15] = {12, 212,
  13, 213,
  14, 214,
  15, 215,
  17, 216,
  23, 217,
  34, 264, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_213 [15] = {12, 212,
  13, 213,
  14, 214,
  15, 215,
  17, 216,
  23, 217,
  34, 265, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_214 [15] = {12, 212,
  13, 213,
  14, 214,
  15, 215,
  17, 216,
  23, 217,
  34, 266, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_215 [15] = {12, 212,
  13, 213,
  14, 214,
  15, 215,
  17, 216,
  23, 217,
  34, 267, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_216 [15] = {12, 212,
  13, 213,
  14, 214,
  15, 215,
  17, 216,
  23, 217,
  34, 268, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_217 [15] = {12, 212,
  13, 213,
  14, 214,
  15, 215,
  17, 216,
  23, 217,
  34, 269, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_219 [3] = {56, 272, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_222 [5] = {25, 273,
  77, 228, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_238 [11] = {11, 188,
  19, 281,
  20, 191,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_240 [9] = {11, 188,
  20, 282,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_241 [9] = {11, 188,
  20, 283,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_242 [9] = {11, 188,
  20, 284,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_243 [9] = {11, 188,
  20, 285,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_244 [9] = {11, 188,
  20, 286,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_245 [9] = {11, 188,
  20, 287,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_247 [7] = {11, 188,
  21, 288,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_248 [7] = {11, 188,
  21, 289,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_252 [5] = {11, 291,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_253 [5] = {22, 293,
  66, 294, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_254 [3] = {68, 296, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_257 [3] = {41, 299, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_260 [3] = {58, 302, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_262 [3] = {61, 304, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_271 [5] = {11, 306,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_273 [3] = {78, 309, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_275 [3] = {44, 310, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_276 [3] = {54, 312, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_278 [3] = {49, 314, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_279 [3] = {53, 316, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_280 [3] = {51, 318, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_281 [3] = {63, 319, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_288 [3] = {65, 320, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_289 [3] = {65, 321, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_290 [3] = {47, 323, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_291 [3] = {46, 324, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_293 [3] = {44, 326, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_299 [3] = {39, 331, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_306 [3] = {56, 335, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_308 [5] = {25, 336,
  77, 228, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_313 [3] = {50, 342, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_317 [3] = {52, 348, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_323 [3] = {44, 350, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_328 [3] = {69, 355, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_333 [3] = {59, 360, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_334 [3] = {62, 362, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_336 [3] = {78, 363, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_351 [5] = {25, 367,
  77, 228, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_352 [5] = {25, 368,
  77, 228, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_358 [3] = {43, 371, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_359 [3] = {60, 374, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_367 [3] = {67, 382, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_368 [3] = {68, 383, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_384 [3] = {70, 392, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_392 [3] = {72, 398, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_394 [5] = {25, 400,
  77, 228, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_395 [3] = {71, 402, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_397 [3] = {73, 404, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_399 [3] = {43, 405, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_400 [3] = {67, 406, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_407 [3] = {71, 410, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_408 [3] = {74, 412, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_414 [5] = {24, 419,
  75, 420, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_416 [13] = {11, 188,
  18, 422,
  19, 190,
  20, 191,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_417 [13] = {11, 188,
  18, 423,
  19, 190,
  20, 191,
  21, 192,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_418 [5] = {11, 424,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_419 [3] = {73, 425, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_422 [3] = {75, 427, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_423 [3] = {75, 428, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_424 [3] = {76, 430, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_429 [5] = {11, 432,
  48, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_430 [5] = {22, 433,
  66, 294, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_431 [3] = {75, 434, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_432 [3] = {76, 435, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_433 [3] = {75, 436, -1} ;

static const int16_t * gSuccessorTable_easyBindings_grammar [437] = {
gSuccessorTable_easyBindings_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_11, 
  gSuccessorTable_easyBindings_grammar_12, gSuccessorTable_easyBindings_grammar_13, gSuccessorTable_easyBindings_grammar_14, gSuccessorTable_easyBindings_grammar_15, 
  gSuccessorTable_easyBindings_grammar_16, gSuccessorTable_easyBindings_grammar_17, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_21, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_25, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_35, 
  gSuccessorTable_easyBindings_grammar_36, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_40, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_45, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_52, gSuccessorTable_easyBindings_grammar_53, gSuccessorTable_easyBindings_grammar_54, gSuccessorTable_easyBindings_grammar_55, 
  gSuccessorTable_easyBindings_grammar_56, gSuccessorTable_easyBindings_grammar_57, gSuccessorTable_easyBindings_grammar_58, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_67, 
  gSuccessorTable_easyBindings_grammar_68, gSuccessorTable_easyBindings_grammar_69, gSuccessorTable_easyBindings_grammar_70, gSuccessorTable_easyBindings_grammar_71, 
  NULL, gSuccessorTable_easyBindings_grammar_73, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_77, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_93, gSuccessorTable_easyBindings_grammar_94, gSuccessorTable_easyBindings_grammar_95, 
  gSuccessorTable_easyBindings_grammar_96, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_107, 
  NULL, gSuccessorTable_easyBindings_grammar_109, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_112, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_119, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_122, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_128, NULL, gSuccessorTable_easyBindings_grammar_130, gSuccessorTable_easyBindings_grammar_131, 
  gSuccessorTable_easyBindings_grammar_132, gSuccessorTable_easyBindings_grammar_133, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_140, gSuccessorTable_easyBindings_grammar_141, gSuccessorTable_easyBindings_grammar_142, NULL, 
  gSuccessorTable_easyBindings_grammar_144, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_151, 
  gSuccessorTable_easyBindings_grammar_152, gSuccessorTable_easyBindings_grammar_153, gSuccessorTable_easyBindings_grammar_154, gSuccessorTable_easyBindings_grammar_155, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_159, 
  gSuccessorTable_easyBindings_grammar_160, NULL, NULL, gSuccessorTable_easyBindings_grammar_163, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_172, gSuccessorTable_easyBindings_grammar_173, gSuccessorTable_easyBindings_grammar_174, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_179, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_186, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_189, gSuccessorTable_easyBindings_grammar_190, gSuccessorTable_easyBindings_grammar_191, 
  gSuccessorTable_easyBindings_grammar_192, NULL, gSuccessorTable_easyBindings_grammar_194, NULL, 
  gSuccessorTable_easyBindings_grammar_196, NULL, gSuccessorTable_easyBindings_grammar_198, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_207, 
  gSuccessorTable_easyBindings_grammar_208, NULL, gSuccessorTable_easyBindings_grammar_210, gSuccessorTable_easyBindings_grammar_211, 
  gSuccessorTable_easyBindings_grammar_212, gSuccessorTable_easyBindings_grammar_213, gSuccessorTable_easyBindings_grammar_214, gSuccessorTable_easyBindings_grammar_215, 
  gSuccessorTable_easyBindings_grammar_216, gSuccessorTable_easyBindings_grammar_217, NULL, gSuccessorTable_easyBindings_grammar_219, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_222, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_238, NULL, 
  gSuccessorTable_easyBindings_grammar_240, gSuccessorTable_easyBindings_grammar_241, gSuccessorTable_easyBindings_grammar_242, gSuccessorTable_easyBindings_grammar_243, 
  gSuccessorTable_easyBindings_grammar_244, gSuccessorTable_easyBindings_grammar_245, NULL, gSuccessorTable_easyBindings_grammar_247, 
  gSuccessorTable_easyBindings_grammar_248, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_252, gSuccessorTable_easyBindings_grammar_253, gSuccessorTable_easyBindings_grammar_254, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_257, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_260, NULL, gSuccessorTable_easyBindings_grammar_262, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_271, 
  NULL, gSuccessorTable_easyBindings_grammar_273, NULL, gSuccessorTable_easyBindings_grammar_275, 
  gSuccessorTable_easyBindings_grammar_276, NULL, gSuccessorTable_easyBindings_grammar_278, gSuccessorTable_easyBindings_grammar_279, 
  gSuccessorTable_easyBindings_grammar_280, gSuccessorTable_easyBindings_grammar_281, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_288, gSuccessorTable_easyBindings_grammar_289, gSuccessorTable_easyBindings_grammar_290, gSuccessorTable_easyBindings_grammar_291, 
  NULL, gSuccessorTable_easyBindings_grammar_293, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_299, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_306, NULL, 
  gSuccessorTable_easyBindings_grammar_308, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_313, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_317, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_323, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_328, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_333, gSuccessorTable_easyBindings_grammar_334, NULL, 
  gSuccessorTable_easyBindings_grammar_336, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_351, 
  gSuccessorTable_easyBindings_grammar_352, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_358, gSuccessorTable_easyBindings_grammar_359, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_367, 
  gSuccessorTable_easyBindings_grammar_368, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_384, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_392, NULL, gSuccessorTable_easyBindings_grammar_394, gSuccessorTable_easyBindings_grammar_395, 
  NULL, gSuccessorTable_easyBindings_grammar_397, NULL, gSuccessorTable_easyBindings_grammar_399, 
  gSuccessorTable_easyBindings_grammar_400, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_407, 
  gSuccessorTable_easyBindings_grammar_408, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_414, NULL, 
  gSuccessorTable_easyBindings_grammar_416, gSuccessorTable_easyBindings_grammar_417, gSuccessorTable_easyBindings_grammar_418, gSuccessorTable_easyBindings_grammar_419, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_422, gSuccessorTable_easyBindings_grammar_423, 
  gSuccessorTable_easyBindings_grammar_424, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_429, gSuccessorTable_easyBindings_grammar_430, gSuccessorTable_easyBindings_grammar_431, 
  gSuccessorTable_easyBindings_grammar_432, gSuccessorTable_easyBindings_grammar_433, NULL, NULL, 
  NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_easyBindings_grammar [195 * 2] = {
  0, 1,
  1, 3,
  2, 5,
  3, 5,
  4, 6,
  3, 5,
  5, 8,
  6, 7,
  7, 4,
  8, 7,
  9, 9,
  10, 5,
  11, 1,
  12, 8,
  13, 7,
  14, 6,
  15, 6,
  16, 4,
  17, 3,
  18, 2,
  19, 2,
  20, 2,
  21, 1,
  21, 2,
  21, 3,
  21, 1,
  22, 1,
  23, 13,
  24, 1,
  23, 9,
  23, 9,
  25, 1,
  26, 0,
  26, 4,
  26, 2,
  26, 2,
  26, 2,
  26, 2,
  26, 2,
  26, 2,
  26, 2,
  27, 1,
  27, 1,
  28, 0,
  28, 3,
  29, 0,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  30, 0,
  30, 1,
  31, 0,
  31, 4,
  32, 0,
  32, 3,
  33, 0,
  33, 2,
  34, 0,
  34, 2,
  34, 2,
  34, 2,
  34, 2,
  34, 2,
  34, 2,
  35, 0,
  35, 2,
  35, 2,
  35, 2,
  35, 2,
  36, 0,
  36, 2,
  36, 2,
  36, 2,
  36, 2,
  36, 2,
  36, 2,
  36, 2,
  37, 0,
  37, 2,
  38, 0,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  39, 0,
  39, 4,
  40, 1,
  40, 1,
  41, 1,
  41, 1,
  42, 0,
  42, 6,
  43, 0,
  43, 5,
  44, 0,
  44, 3,
  44, 5,
  44, 3,
  44, 3,
  44, 5,
  44, 6,
  45, 1,
  45, 1,
  46, 0,
  46, 3,
  47, 0,
  47, 2,
  48, 4,
  48, 4,
  48, 4,
  48, 4,
  48, 1,
  48, 1,
  48, 1,
  49, 0,
  49, 2,
  50, 1,
  50, 3,
  50, 1,
  51, 0,
  51, 2,
  52, 3,
  52, 3,
  52, 1,
  52, 1,
  53, 0,
  53, 2,
  54, 0,
  54, 2,
  55, 0,
  55, 2,
  56, 0,
  56, 3,
  57, 0,
  57, 2,
  58, 0,
  58, 2,
  59, 0,
  59, 3,
  60, 1,
  60, 1,
  61, 0,
  61, 2,
  62, 3,
  62, 0,
  63, 0,
  63, 3,
  64, 0,
  64, 2,
  64, 2,
  64, 2,
  64, 2,
  64, 2,
  64, 2,
  65, 0,
  65, 3,
  65, 3,
  66, 0,
  66, 6,
  67, 0,
  67, 5,
  68, 0,
  68, 5,
  69, 1,
  69, 1,
  70, 0,
  70, 3,
  71, 0,
  71, 3,
  72, 1,
  72, 3,
  73, 0,
  73, 6,
  74, 0,
  74, 2,
  75, 0,
  75, 5,
  75, 3,
  75, 3,
  75, 5,
  76, 0,
  76, 3,
  77, 1,
  77, 1,
  77, 1,
  77, 1,
  77, 1,
  77, 1,
  77, 4,
  78, 0,
  78, 3,
  79, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'start_symbol' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                GALGAS_location &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_easyBindings_5F_syntax_start_5F_symbol_i0_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_easyBindings_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                     gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                     gProductionsTable_easyBindings_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                GALGAS_location &  parameter_3
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                         gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                         gProductionsTable_easyBindings_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_easyBindings_5F_grammar grammar ;
          grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                GALGAS_location &  parameter_3
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                       gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                       gProductionsTable_easyBindings_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_easyBindings_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'extern_swift_delegate' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_delegate_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_delegate_ (GALGAS_externSwiftDelegateList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'extern_swift_func' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_func_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_func_ (GALGAS_externSwiftFunctionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'class_declaration' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse(inLexique) ;
    break ;
  case 5 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i5_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i3_(parameter_1, parameter_2, inLexique) ;
    break ;
  case 5 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i5_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'enum_declaration' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i4_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'entity_declaration' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i6_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i6_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'document_declaration' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i7_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'preferences_declaration' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'outlet_class_declaration' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i9_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i9_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'binding_specification' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i10_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_specification_ (const GALGAS_bool  parameter_1,
                                GALGAS_outletClassBindingSpecificationList &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i10_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'outlet_declaration' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i11_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i11_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'observable_property' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_observable_5F_property_i12_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_ (GALGAS_observablePropertyAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_observable_5F_property_i12_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'transient_declaration' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i13_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                const GALGAS_lstring  parameter_2,
                                GALGAS_secondaryPropertyList &  parameter_3,
                                GALGAS_astDeclarationStruct &  parameter_4,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i13_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'simple_stored_declaration' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 14 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                GALGAS_simpleStoredPropertyList &  parameter_2,
                                GALGAS_stringset &  parameter_3,
                                GALGAS_astDeclarationStruct &  parameter_4,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 14 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'toOne_relationship' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i15_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_ (const GALGAS_lstring  parameter_1,
                                GALGAS_toOneRelationshipListEX &  parameter_2,
                                GALGAS_astDeclarationStruct &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i15_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'toMany_relationship' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i16_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_ (const GALGAS_lstring  parameter_1,
                                GALGAS_toManyRelationshipListEX &  parameter_2,
                                GALGAS_stringset &  parameter_3,
                                GALGAS_astDeclarationStruct &  parameter_4,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i16_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'stored_array_declaration' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_stored_5F_array_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i17_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_stored_5F_array_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                GALGAS_storedArrayPropertyListAST &  parameter_2,
                                GALGAS_astDeclarationStruct &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i17_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'action_declaration' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 18 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i18_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_ (GALGAS_lstringlist &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 18 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i18_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'booleanMultipleBindingExpression' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i19_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i19_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'booleanMultipleBindingComparison' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i20_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i20_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'booleanMultipleBindingTerm' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i21_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i21_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'booleanMultipleBindingOperand' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_parse(inLexique) ;
    break ;
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse(inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse(inLexique) ;
    break ;
  case 25 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_(parameter_1, inLexique) ;
    break ;
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_(parameter_1, inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_(parameter_1, inLexique) ;
    break ;
  case 25 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'binding_option_list' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 26 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i26_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 26 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i26_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'controller_declaration' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i27_parse(inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i29_parse(inLexique) ;
    break ;
  case 30 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i30_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                const GALGAS_lstring  parameter_2,
                                GALGAS_secondaryPropertyList &  parameter_3,
                                GALGAS_astDeclarationStruct &  parameter_4,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i27_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i29_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 30 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i30_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'column_bindings' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 28 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i28_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_ (GALGAS_columnBindingAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 28 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i28_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'explicit_value' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 31 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i31_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_ (GALGAS_abstractDefaultValue &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 31 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i31_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_0' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 32 33 34 35 36 37 38 39 40
  return inLexique->nextProductionIndex () - 31 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_1' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 41 42
  return inLexique->nextProductionIndex () - 40 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_2' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 43 44
  return inLexique->nextProductionIndex () - 42 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_3' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 45 46 47 48 49 50
  return inLexique->nextProductionIndex () - 44 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_4' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 51 52
  return inLexique->nextProductionIndex () - 50 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_5' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 53 54
  return inLexique->nextProductionIndex () - 52 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_6' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 55 56
  return inLexique->nextProductionIndex () - 54 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_7' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 57 58
  return inLexique->nextProductionIndex () - 56 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_8' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 59 60 61 62 63 64 65
  return inLexique->nextProductionIndex () - 58 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_9' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 66 67 68 69 70
  return inLexique->nextProductionIndex () - 65 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_10' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 71 72 73 74 75 76 77 78
  return inLexique->nextProductionIndex () - 70 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_11' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 79 80
  return inLexique->nextProductionIndex () - 78 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_12' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 81 82 83 84 85 86
  return inLexique->nextProductionIndex () - 80 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_13' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 87 88
  return inLexique->nextProductionIndex () - 86 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_14' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 89 90
  return inLexique->nextProductionIndex () - 88 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_15' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 91 92
  return inLexique->nextProductionIndex () - 90 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_16' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 93 94
  return inLexique->nextProductionIndex () - 92 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_17' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 95 96
  return inLexique->nextProductionIndex () - 94 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_18' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 97 98 99 100 101 102 103
  return inLexique->nextProductionIndex () - 96 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_19' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 104 105
  return inLexique->nextProductionIndex () - 103 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_20' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 106 107
  return inLexique->nextProductionIndex () - 105 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_21' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 108 109
  return inLexique->nextProductionIndex () - 107 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_22' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 110 111 112 113 114 115 116
  return inLexique->nextProductionIndex () - 109 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_23' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 117 118
  return inLexique->nextProductionIndex () - 116 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_24' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 119 120 121
  return inLexique->nextProductionIndex () - 118 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_25' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 122 123
  return inLexique->nextProductionIndex () - 121 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_26' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 124 125 126 127
  return inLexique->nextProductionIndex () - 123 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_27' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 128 129
  return inLexique->nextProductionIndex () - 127 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_28' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 130 131
  return inLexique->nextProductionIndex () - 129 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_29' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 132 133
  return inLexique->nextProductionIndex () - 131 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_30' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 134 135
  return inLexique->nextProductionIndex () - 133 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_31' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 136 137
  return inLexique->nextProductionIndex () - 135 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_32' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 138 139
  return inLexique->nextProductionIndex () - 137 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_33' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 140 141
  return inLexique->nextProductionIndex () - 139 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_34' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 142 143
  return inLexique->nextProductionIndex () - 141 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_35' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 144 145
  return inLexique->nextProductionIndex () - 143 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_36' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 146 147
  return inLexique->nextProductionIndex () - 145 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_37' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 148 149
  return inLexique->nextProductionIndex () - 147 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_38' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 150 151 152 153 154 155 156
  return inLexique->nextProductionIndex () - 149 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_39' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 157 158 159
  return inLexique->nextProductionIndex () - 156 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_40' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 160 161
  return inLexique->nextProductionIndex () - 159 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_41' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 162 163
  return inLexique->nextProductionIndex () - 161 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_42' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 164 165
  return inLexique->nextProductionIndex () - 163 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_43' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 166 167
  return inLexique->nextProductionIndex () - 165 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_44' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 168 169
  return inLexique->nextProductionIndex () - 167 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_45' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 170 171
  return inLexique->nextProductionIndex () - 169 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_46' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 172 173
  return inLexique->nextProductionIndex () - 171 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_47' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 174 175
  return inLexique->nextProductionIndex () - 173 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_48' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 176 177
  return inLexique->nextProductionIndex () - 175 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_49' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 178 179 180 181 182
  return inLexique->nextProductionIndex () - 177 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_50' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 183 184
  return inLexique->nextProductionIndex () - 182 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_51' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 185 186 187 188 189 190 191
  return inLexique->nextProductionIndex () - 184 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_52' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 192 193
  return inLexique->nextProductionIndex () - 191 ;
}

//---------------------------------------------------------------------------------------------------------------------*

