#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@arrayControllerAttributListAST' list                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_arrayControllerAttributListAST : public cCollectionElement {
  public : GALGAS_arrayControllerAttributListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_arrayControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                              const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_arrayControllerAttributListAST::cCollectionElement_arrayControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                                      const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_arrayControllerAttributListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_arrayControllerAttributListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerAttributListAST (mObject.mAttribute_mAttributeName, mObject.mAttribute_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_arrayControllerAttributListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeValue" ":" ;
  mObject.mAttribute_mAttributeValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_arrayControllerAttributListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerAttributListAST * operand = (cCollectionElement_arrayControllerAttributListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerAttributListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST::GALGAS_arrayControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST::GALGAS_arrayControllerAttributListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_abstractDefaultValue & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerAttributListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_abstractDefaultValue & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mAttributeName ;
      outOperand1 = p->mObject.mAttribute_mAttributeValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::operator_concat (const GALGAS_arrayControllerAttributListAST & inOperand
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result = GALGAS_arrayControllerAttributListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result = GALGAS_arrayControllerAttributListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::dotAssign_operation (const GALGAS_arrayControllerAttributListAST inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerAttributListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_arrayControllerAttributListAST::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    result = p->mObject.mAttribute_mAttributeValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_arrayControllerAttributListAST::cEnumerator_arrayControllerAttributListAST (const GALGAS_arrayControllerAttributListAST & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST_2D_element cEnumerator_arrayControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_arrayControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue cEnumerator_arrayControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject.mAttribute_mAttributeValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @arrayControllerAttributListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerAttributListAST ("arrayControllerAttributListAST",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerAttributListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerAttributListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind::GALGAS_arrayControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_relationshipModel (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_relationshipModel ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_storedArrayModel (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_storedArrayModel ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_transientModel (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_transientModel ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_arrayControllerModelKind [4] = {
  "(not built)",
  "relationshipModel",
  "storedArrayModel",
  "transientModel"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isRelationshipModel (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_relationshipModel == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isStoredArrayModel (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_storedArrayModel == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isTransientModel (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientModel == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerModelKind::description (C_String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString << "<enum @arrayControllerModelKind: " << gEnumNameArrayFor_arrayControllerModelKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @arrayControllerModelKind type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModelKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerModelKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@arrayControllerFilterListForGeneration' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_arrayControllerFilterListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerFilterListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_string & in_mFilterPropertyName,
                                                                      const GALGAS_typeKind & in_mFilterPropertyType
                                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_arrayControllerFilterListForGeneration::cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_string & in_mFilterPropertyName,
                                                                                                                      const GALGAS_typeKind & in_mFilterPropertyType
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilterPropertyName, in_mFilterPropertyType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_arrayControllerFilterListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_arrayControllerFilterListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerFilterListForGeneration (mObject.mAttribute_mFilterPropertyName, mObject.mAttribute_mFilterPropertyType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_arrayControllerFilterListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilterPropertyName" ":" ;
  mObject.mAttribute_mFilterPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilterPropertyType" ":" ;
  mObject.mAttribute_mFilterPropertyType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_arrayControllerFilterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerFilterListForGeneration * operand = (cCollectionElement_arrayControllerFilterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration::GALGAS_arrayControllerFilterListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration::GALGAS_arrayControllerFilterListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_typeKind & inOperand1
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerFilterListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_string & in_mFilterPropertyName,
                                                                               const GALGAS_typeKind & in_mFilterPropertyType
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerFilterListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (in_mFilterPropertyName,
                                                                            in_mFilterPropertyType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                         const GALGAS_typeKind & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                                            const GALGAS_typeKind inOperand1,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                                            GALGAS_typeKind & outOperand1,
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
      outOperand0 = p->mObject.mAttribute_mFilterPropertyName ;
      outOperand1 = p->mObject.mAttribute_mFilterPropertyType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::modifier_popFirst (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mFilterPropertyName ;
    outOperand1 = p->mObject.mAttribute_mFilterPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::modifier_popLast (GALGAS_string & outOperand0,
                                                                      GALGAS_typeKind & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mFilterPropertyName ;
    outOperand1 = p->mObject.mAttribute_mFilterPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                  GALGAS_typeKind & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mFilterPropertyName ;
    outOperand1 = p->mObject.mAttribute_mFilterPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                 GALGAS_typeKind & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mFilterPropertyName ;
    outOperand1 = p->mObject.mAttribute_mFilterPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::operator_concat (const GALGAS_arrayControllerFilterListForGeneration & inOperand
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::dotAssign_operation (const GALGAS_arrayControllerFilterListForGeneration inOperand
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerFilterListForGeneration::getter_mFilterPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    result = p->mObject.mAttribute_mFilterPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_arrayControllerFilterListForGeneration::getter_mFilterPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    result = p->mObject.mAttribute_mFilterPropertyType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_arrayControllerFilterListForGeneration::cEnumerator_arrayControllerFilterListForGeneration (const GALGAS_arrayControllerFilterListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element cEnumerator_arrayControllerFilterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerFilterListForGeneration::current_mFilterPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject.mAttribute_mFilterPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind cEnumerator_arrayControllerFilterListForGeneration::current_mFilterPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject.mAttribute_mFilterPropertyType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @arrayControllerFilterListForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration ("arrayControllerFilterListForGeneration",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerFilterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerFilterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerFilterListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Class for element of '@arrayControllerBoundColumnListForGeneration' list                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_arrayControllerBoundColumnListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerBoundColumnListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                           const GALGAS_string & in_mColumnOutletTypeName,
                                                                           const GALGAS_string & in_mObservablePropertyForSorting,
                                                                           const GALGAS_string & in_mRunAction,
                                                                           const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_arrayControllerBoundColumnListForGeneration::cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                const GALGAS_string & in_mColumnOutletTypeName,
                                                                                                                                const GALGAS_string & in_mObservablePropertyForSorting,
                                                                                                                                const GALGAS_string & in_mRunAction,
                                                                                                                                const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mObservablePropertyForSorting, in_mRunAction, in_mRegularBindingsGenerationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_arrayControllerBoundColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_arrayControllerBoundColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerBoundColumnListForGeneration (mObject.mAttribute_mColumnName, mObject.mAttribute_mColumnOutletTypeName, mObject.mAttribute_mObservablePropertyForSorting, mObject.mAttribute_mRunAction, mObject.mAttribute_mRegularBindingsGenerationList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_arrayControllerBoundColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mAttribute_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnOutletTypeName" ":" ;
  mObject.mAttribute_mColumnOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservablePropertyForSorting" ":" ;
  mObject.mAttribute_mObservablePropertyForSorting.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunAction" ":" ;
  mObject.mAttribute_mRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingsGenerationList" ":" ;
  mObject.mAttribute_mRegularBindingsGenerationList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_arrayControllerBoundColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerBoundColumnListForGeneration * operand = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration::GALGAS_arrayControllerBoundColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration::GALGAS_arrayControllerBoundColumnListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                                  const GALGAS_string & inOperand3,
                                                                                                                                  const GALGAS_regularBindingsGenerationList & inOperand4
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerBoundColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                    const GALGAS_string & in_mColumnName,
                                                                                    const GALGAS_string & in_mColumnOutletTypeName,
                                                                                    const GALGAS_string & in_mObservablePropertyForSorting,
                                                                                    const GALGAS_string & in_mRunAction,
                                                                                    const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (in_mColumnName,
                                                                                 in_mColumnOutletTypeName,
                                                                                 in_mObservablePropertyForSorting,
                                                                                 in_mRunAction,
                                                                                 in_mRegularBindingsGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_regularBindingsGenerationList & inOperand4
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                                                 const GALGAS_string inOperand1,
                                                                                 const GALGAS_string inOperand2,
                                                                                 const GALGAS_string inOperand3,
                                                                                 const GALGAS_regularBindingsGenerationList inOperand4,
                                                                                 const GALGAS_uint inInsertionIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                                                 GALGAS_string & outOperand1,
                                                                                 GALGAS_string & outOperand2,
                                                                                 GALGAS_string & outOperand3,
                                                                                 GALGAS_regularBindingsGenerationList & outOperand4,
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
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mColumnName ;
      outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
      outOperand2 = p->mObject.mAttribute_mObservablePropertyForSorting ;
      outOperand3 = p->mObject.mAttribute_mRunAction ;
      outOperand4 = p->mObject.mAttribute_mRegularBindingsGenerationList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::modifier_popFirst (GALGAS_string & outOperand0,
                                                                            GALGAS_string & outOperand1,
                                                                            GALGAS_string & outOperand2,
                                                                            GALGAS_string & outOperand3,
                                                                            GALGAS_regularBindingsGenerationList & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mObservablePropertyForSorting ;
    outOperand3 = p->mObject.mAttribute_mRunAction ;
    outOperand4 = p->mObject.mAttribute_mRegularBindingsGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::modifier_popLast (GALGAS_string & outOperand0,
                                                                           GALGAS_string & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           GALGAS_string & outOperand3,
                                                                           GALGAS_regularBindingsGenerationList & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mObservablePropertyForSorting ;
    outOperand3 = p->mObject.mAttribute_mRunAction ;
    outOperand4 = p->mObject.mAttribute_mRegularBindingsGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                       GALGAS_string & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_string & outOperand3,
                                                                       GALGAS_regularBindingsGenerationList & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mObservablePropertyForSorting ;
    outOperand3 = p->mObject.mAttribute_mRunAction ;
    outOperand4 = p->mObject.mAttribute_mRegularBindingsGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                      GALGAS_string & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      GALGAS_string & outOperand3,
                                                                      GALGAS_regularBindingsGenerationList & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mObservablePropertyForSorting ;
    outOperand3 = p->mObject.mAttribute_mRunAction ;
    outOperand4 = p->mObject.mAttribute_mRegularBindingsGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::operator_concat (const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::dotAssign_operation (const GALGAS_arrayControllerBoundColumnListForGeneration inOperand
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mAttribute_mColumnName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mAttribute_mColumnOutletTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mObservablePropertyForSortingAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mAttribute_mObservablePropertyForSorting ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mAttribute_mRunAction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_arrayControllerBoundColumnListForGeneration::getter_mRegularBindingsGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mAttribute_mRegularBindingsGenerationList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_arrayControllerBoundColumnListForGeneration::cEnumerator_arrayControllerBoundColumnListForGeneration (const GALGAS_arrayControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element cEnumerator_arrayControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mAttribute_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mObservablePropertyForSorting (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mAttribute_mObservablePropertyForSorting ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mAttribute_mRunAction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList cEnumerator_arrayControllerBoundColumnListForGeneration::current_mRegularBindingsGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mAttribute_mRegularBindingsGenerationList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @arrayControllerBoundColumnListForGeneration type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration ("arrayControllerBoundColumnListForGeneration",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@defaultValueList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_defaultValueList : public cCollectionElement {
  public : GALGAS_defaultValueList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_defaultValueList (const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_defaultValueList::cCollectionElement_defaultValueList (const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDefaultValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_defaultValueList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_defaultValueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_defaultValueList (mObject.mAttribute_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_defaultValueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValue" ":" ;
  mObject.mAttribute_mDefaultValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_defaultValueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_defaultValueList * operand = (cCollectionElement_defaultValueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_defaultValueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList::GALGAS_defaultValueList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList::GALGAS_defaultValueList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_defaultValueList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::constructor_listWithValue (const GALGAS_abstractDefaultValue & inOperand0
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_defaultValueList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_defaultValueList * p = NULL ;
  macroMyNew (p, cCollectionElement_defaultValueList (in_mDefaultValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::addAssign_operation (const GALGAS_abstractDefaultValue & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_defaultValueList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::modifier_insertAtIndex (const GALGAS_abstractDefaultValue inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_defaultValueList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::modifier_removeAtIndex (GALGAS_abstractDefaultValue & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mDefaultValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::modifier_popFirst (GALGAS_abstractDefaultValue & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::modifier_popLast (GALGAS_abstractDefaultValue & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::operator_concat (const GALGAS_defaultValueList & inOperand
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_defaultValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_defaultValueList result = GALGAS_defaultValueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_defaultValueList result = GALGAS_defaultValueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::dotAssign_operation (const GALGAS_defaultValueList inOperand
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_defaultValueList::getter_mDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    result = p->mObject.mAttribute_mDefaultValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_defaultValueList::cEnumerator_defaultValueList (const GALGAS_defaultValueList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element cEnumerator_defaultValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_defaultValueList * p = (const cCollectionElement_defaultValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue cEnumerator_defaultValueList::current_mDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_defaultValueList * p = (const cCollectionElement_defaultValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
  return p->mObject.mAttribute_mDefaultValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @defaultValueList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultValueList ("defaultValueList",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_defaultValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_defaultValueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultValueList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_typeKind & in_mTypeKind,
                                                        const GALGAS_actionMap & in_mActionMap
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTypeKind (in_mTypeKind),
mAttribute_mActionMap (in_mActionMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTypeKind.isValid () && mAttribute_mActionMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mAttribute_lkey, mAttribute_mTypeKind, mAttribute_mActionMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeKind" ":" ;
  mAttribute_mTypeKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mAttribute_mActionMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeKind.objectCompare (operand->mAttribute_mTypeKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActionMap.objectCompare (operand->mAttribute_mActionMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton states                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                  *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton actions                                                    *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton action names                                                 *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                  *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                           *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_insertKey (GALGAS_lstring inKey,
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
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        0,
                        NULL,
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "the '%K' type is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mTypeKind ;
    outArgument1 = p->mAttribute_mActionMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_unifiedTypeMap::getter_mTypeKindForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mTypeKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap GALGAS_unifiedTypeMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mActionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMTypeKindForKey (GALGAS_typeKind inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mTypeKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mActionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind cEnumerator_unifiedTypeMap::current_mTypeKind (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mTypeKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap cEnumerator_unifiedTypeMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mActionMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @unifiedTypeMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy::GALGAS_unifiedTypeMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (GALGAS_unifiedTypeMap & ioMap,
                                                             GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                             COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (GALGAS_unifiedTypeMap & ioMap,
                                                                       GALGAS_string inKey,
                                                                       GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                                       COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_unifiedTypeMap_2D_proxy::getter_mTypeKind (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mTypeKind" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mTypeKind;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap GALGAS_unifiedTypeMap_2D_proxy::getter_mActionMap (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actionMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mActionMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mActionMap;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (const GALGAS_unifiedTypeMap & inMap,
                                                                                      const GALGAS_lstring & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedTypeMap_searchKey, inCompiler COMMA_THERE) ;
  return result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @unifiedTypeMap-proxy type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ("unifiedTypeMap-proxy",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_proxy (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@typeKindList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_typeKindList : public cCollectionElement {
  public : GALGAS_typeKindList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_typeKindList (const GALGAS_typeKind & in_mType
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GALGAS_typeKind & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_typeKindList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_typeKindList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typeKindList (mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_typeKindList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_typeKindList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typeKindList * operand = (cCollectionElement_typeKindList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typeKindList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList::GALGAS_typeKindList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList::GALGAS_typeKindList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_typeKindList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::constructor_listWithValue (const GALGAS_typeKind & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_typeKindList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_typeKind & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_typeKindList * p = NULL ;
  macroMyNew (p, cCollectionElement_typeKindList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::addAssign_operation (const GALGAS_typeKind & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::modifier_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::modifier_removeAtIndex (GALGAS_typeKind & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::modifier_popFirst (GALGAS_typeKind & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::modifier_popLast (GALGAS_typeKind & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::operator_concat (const GALGAS_typeKindList & inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKindList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::dotAssign_operation (const GALGAS_typeKindList inOperand
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKindList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typeKindList::cEnumerator_typeKindList (const GALGAS_typeKindList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element cEnumerator_typeKindList::current (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind cEnumerator_typeKindList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject.mAttribute_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @typeKindList type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList ("typeKindList",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeKindList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeKindList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@secondaryDeclarationListWorkingList' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_secondaryDeclarationListWorkingList : public cCollectionElement {
  public : GALGAS_secondaryDeclarationListWorkingList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_secondaryDeclarationListWorkingList (const GALGAS_astDeclaration & in_mDeclaration,
                                                                   const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_secondaryDeclarationListWorkingList::cCollectionElement_secondaryDeclarationListWorkingList (const GALGAS_astDeclaration & in_mDeclaration,
                                                                                                                const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration, in_mSecondaryPropertyList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_secondaryDeclarationListWorkingList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_secondaryDeclarationListWorkingList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_secondaryDeclarationListWorkingList (mObject.mAttribute_mDeclaration, mObject.mAttribute_mSecondaryPropertyList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_secondaryDeclarationListWorkingList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mAttribute_mDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSecondaryPropertyList" ":" ;
  mObject.mAttribute_mSecondaryPropertyList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_secondaryDeclarationListWorkingList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_secondaryDeclarationListWorkingList * operand = (cCollectionElement_secondaryDeclarationListWorkingList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList::GALGAS_secondaryDeclarationListWorkingList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList::GALGAS_secondaryDeclarationListWorkingList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_secondaryDeclarationListWorkingList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::constructor_listWithValue (const GALGAS_astDeclaration & inOperand0,
                                                                                                                  const GALGAS_secondaryPropertyList & inOperand1
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_secondaryDeclarationListWorkingList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_secondaryDeclarationListWorkingList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::addAssign_operation (const GALGAS_astDeclaration & inOperand0,
                                                                      const GALGAS_secondaryPropertyList & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryDeclarationListWorkingList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::modifier_insertAtIndex (const GALGAS_astDeclaration inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::modifier_removeAtIndex (GALGAS_astDeclaration & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mDeclaration ;
      outOperand1 = p->mObject.mAttribute_mSecondaryPropertyList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::modifier_popFirst (GALGAS_astDeclaration & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
    outOperand1 = p->mObject.mAttribute_mSecondaryPropertyList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::modifier_popLast (GALGAS_astDeclaration & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
    outOperand1 = p->mObject.mAttribute_mSecondaryPropertyList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
    outOperand1 = p->mObject.mAttribute_mSecondaryPropertyList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
    outOperand1 = p->mObject.mAttribute_mSecondaryPropertyList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::operator_concat (const GALGAS_secondaryDeclarationListWorkingList & inOperand
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result = GALGAS_secondaryDeclarationListWorkingList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result = GALGAS_secondaryDeclarationListWorkingList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::dotAssign_operation (const GALGAS_secondaryDeclarationListWorkingList inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration GALGAS_secondaryDeclarationListWorkingList::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  GALGAS_astDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    result = p->mObject.mAttribute_mDeclaration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList GALGAS_secondaryDeclarationListWorkingList::getter_mSecondaryPropertyListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  GALGAS_secondaryPropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    result = p->mObject.mAttribute_mSecondaryPropertyList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_secondaryDeclarationListWorkingList::cEnumerator_secondaryDeclarationListWorkingList (const GALGAS_secondaryDeclarationListWorkingList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList_2D_element cEnumerator_secondaryDeclarationListWorkingList::current (LOCATION_ARGS) const {
  const cCollectionElement_secondaryDeclarationListWorkingList * p = (const cCollectionElement_secondaryDeclarationListWorkingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration cEnumerator_secondaryDeclarationListWorkingList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_secondaryDeclarationListWorkingList * p = (const cCollectionElement_secondaryDeclarationListWorkingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return p->mObject.mAttribute_mDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList cEnumerator_secondaryDeclarationListWorkingList::current_mSecondaryPropertyList (LOCATION_ARGS) const {
  const cCollectionElement_secondaryDeclarationListWorkingList * p = (const cCollectionElement_secondaryDeclarationListWorkingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return p->mObject.mAttribute_mSecondaryPropertyList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @secondaryDeclarationListWorkingList type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_secondaryDeclarationListWorkingList ("secondaryDeclarationListWorkingList",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_secondaryDeclarationListWorkingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_secondaryDeclarationListWorkingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_secondaryDeclarationListWorkingList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_secondaryDeclarationListWorkingList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@XCodeGroupList' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_XCodeGroupList : public cCollectionElement {
  public : GALGAS_XCodeGroupList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                              const GALGAS_string & in_mGroupName,
                                              const GALGAS_string & in_mGroupPath,
                                              const GALGAS_stringlist & in_mChildrenRefs
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                                                      const GALGAS_string & in_mGroupName,
                                                                      const GALGAS_string & in_mGroupPath,
                                                                      const GALGAS_stringlist & in_mChildrenRefs
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_XCodeGroupList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_XCodeGroupList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeGroupList (mObject.mAttribute_mGroupReference, mObject.mAttribute_mGroupName, mObject.mAttribute_mGroupPath, mObject.mAttribute_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_XCodeGroupList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupReference" ":" ;
  mObject.mAttribute_mGroupReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupName" ":" ;
  mObject.mAttribute_mGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupPath" ":" ;
  mObject.mAttribute_mGroupPath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mChildrenRefs" ":" ;
  mObject.mAttribute_mChildrenRefs.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_XCodeGroupList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeGroupList * operand = (cCollectionElement_XCodeGroupList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeGroupList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                        const GALGAS_string & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_stringlist & inOperand3
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_XCodeGroupList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::addAssign_operation (const GALGAS_string & inOperand0,
                                                 const GALGAS_string & inOperand1,
                                                 const GALGAS_string & inOperand2,
                                                 const GALGAS_stringlist & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                    const GALGAS_string inOperand1,
                                                    const GALGAS_string inOperand2,
                                                    const GALGAS_stringlist inOperand3,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    GALGAS_stringlist & outOperand3,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
      outOperand0 = p->mObject.mAttribute_mGroupReference ;
      outOperand1 = p->mObject.mAttribute_mGroupName ;
      outOperand2 = p->mObject.mAttribute_mGroupPath ;
      outOperand3 = p->mObject.mAttribute_mChildrenRefs ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::modifier_popFirst (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mGroupReference ;
    outOperand1 = p->mObject.mAttribute_mGroupName ;
    outOperand2 = p->mObject.mAttribute_mGroupPath ;
    outOperand3 = p->mObject.mAttribute_mChildrenRefs ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::modifier_popLast (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mGroupReference ;
    outOperand1 = p->mObject.mAttribute_mGroupName ;
    outOperand2 = p->mObject.mAttribute_mGroupPath ;
    outOperand3 = p->mObject.mAttribute_mChildrenRefs ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mGroupReference ;
    outOperand1 = p->mObject.mAttribute_mGroupName ;
    outOperand2 = p->mObject.mAttribute_mGroupPath ;
    outOperand3 = p->mObject.mAttribute_mChildrenRefs ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mGroupReference ;
    outOperand1 = p->mObject.mAttribute_mGroupName ;
    outOperand2 = p->mObject.mAttribute_mGroupPath ;
    outOperand3 = p->mObject.mAttribute_mChildrenRefs ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::operator_concat (const GALGAS_XCodeGroupList & inOperand
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::dotAssign_operation (const GALGAS_XCodeGroupList inOperand
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mAttribute_mGroupReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mAttribute_mGroupName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupPathAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mAttribute_mGroupPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mAttribute_mChildrenRefs ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_XCodeGroupList::cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element cEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mAttribute_mGroupReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mAttribute_mGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mAttribute_mGroupPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mAttribute_mChildrenRefs ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @XCodeGroupList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@XCodeToolTargetList' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_XCodeToolTargetList : public cCollectionElement {
  public : GALGAS_XCodeToolTargetList_2D_element mObject ;

//--- Constructor
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

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_XCodeToolTargetList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_XCodeToolTargetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeToolTargetList (mObject.mAttribute_mTargetRef, mObject.mAttribute_mTargetName, mObject.mAttribute_mProductFileReference, mObject.mAttribute_mProductFileName, mObject.mAttribute_mBuildPhaseRefList, mObject.mAttribute_mBuildPhaseRef, mObject.mAttribute_mBuildConfigurationListRef, mObject.mAttribute_mBuildConfigurationSettingList, mObject.mAttribute_mBuildConfigurationRef, mObject.mAttribute_mFrameworksFileRefList, mObject.mAttribute_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_XCodeToolTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mAttribute_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mAttribute_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mAttribute_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mAttribute_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mAttribute_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mAttribute_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mAttribute_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mAttribute_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mAttribute_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mAttribute_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mAttribute_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_XCodeToolTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeToolTargetList * operand = (cCollectionElement_XCodeToolTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeToolTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_XCodeToolTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::modifier_insertAtIndex (const GALGAS_string inOperand0,
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::modifier_removeAtIndex (GALGAS_string & outOperand0,
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
  if (isValid () && inRemoveIndex.isValid ()) {
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
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
      outOperand0 = p->mObject.mAttribute_mTargetRef ;
      outOperand1 = p->mObject.mAttribute_mTargetName ;
      outOperand2 = p->mObject.mAttribute_mProductFileReference ;
      outOperand3 = p->mObject.mAttribute_mProductFileName ;
      outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
      outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
      outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
      outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
      outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
      outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
      outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::modifier_popFirst (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::modifier_popLast (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::operator_concat (const GALGAS_XCodeToolTargetList & inOperand
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::dotAssign_operation (const GALGAS_XCodeToolTargetList inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mTargetRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mTargetName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mProductFileReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mProductFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mBuildPhaseRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mBuildPhaseRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationListRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationSettingList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mFrameworksFileRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_XCodeToolTargetList::cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element cEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @XCodeToolTargetList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeToolTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@XCodeAppTargetList' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public : GALGAS_XCodeAppTargetList_2D_element mObject ;

//--- Constructor
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

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mAttribute_mTargetRef, mObject.mAttribute_mTargetName, mObject.mAttribute_mProductFileReference, mObject.mAttribute_mProductFileName, mObject.mAttribute_mBuildPhaseRefList, mObject.mAttribute_mBuildPhaseRef, mObject.mAttribute_mBuildConfigurationListRef, mObject.mAttribute_mBuildConfigurationSettingList, mObject.mAttribute_mBuildConfigurationRef, mObject.mAttribute_mFrameworksFileRefList, mObject.mAttribute_mFrameworkBuildPhaseRef, mObject.mAttribute_mDependentTargets, mObject.mAttribute_mResourceBuildRef, mObject.mAttribute_mResourceFileBuildRefs, mObject.mAttribute_mInfoPListFile COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_XCodeAppTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mAttribute_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mAttribute_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mAttribute_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mAttribute_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mAttribute_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mAttribute_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mAttribute_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mAttribute_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mAttribute_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mAttribute_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mAttribute_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependentTargets" ":" ;
  mObject.mAttribute_mDependentTargets.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceBuildRef" ":" ;
  mObject.mAttribute_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceFileBuildRefs" ":" ;
  mObject.mAttribute_mResourceFileBuildRefs.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInfoPListFile" ":" ;
  mObject.mAttribute_mInfoPListFile.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_XCodeAppTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeAppTargetList * operand = (cCollectionElement_XCodeAppTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeAppTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_XCodeAppTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::modifier_insertAtIndex (const GALGAS_string inOperand0,
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::modifier_removeAtIndex (GALGAS_string & outOperand0,
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
  if (isValid () && inRemoveIndex.isValid ()) {
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
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
      outOperand0 = p->mObject.mAttribute_mTargetRef ;
      outOperand1 = p->mObject.mAttribute_mTargetName ;
      outOperand2 = p->mObject.mAttribute_mProductFileReference ;
      outOperand3 = p->mObject.mAttribute_mProductFileName ;
      outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
      outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
      outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
      outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
      outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
      outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
      outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
      outOperand11 = p->mObject.mAttribute_mDependentTargets ;
      outOperand12 = p->mObject.mAttribute_mResourceBuildRef ;
      outOperand13 = p->mObject.mAttribute_mResourceFileBuildRefs ;
      outOperand14 = p->mObject.mAttribute_mInfoPListFile ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::modifier_popFirst (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mAttribute_mDependentTargets ;
    outOperand12 = p->mObject.mAttribute_mResourceBuildRef ;
    outOperand13 = p->mObject.mAttribute_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mAttribute_mInfoPListFile ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::modifier_popLast (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mAttribute_mDependentTargets ;
    outOperand12 = p->mObject.mAttribute_mResourceBuildRef ;
    outOperand13 = p->mObject.mAttribute_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mAttribute_mInfoPListFile ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mAttribute_mDependentTargets ;
    outOperand12 = p->mObject.mAttribute_mResourceBuildRef ;
    outOperand13 = p->mObject.mAttribute_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mAttribute_mInfoPListFile ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mAttribute_mDependentTargets ;
    outOperand12 = p->mObject.mAttribute_mResourceBuildRef ;
    outOperand13 = p->mObject.mAttribute_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mAttribute_mInfoPListFile ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::operator_concat (const GALGAS_XCodeAppTargetList & inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::dotAssign_operation (const GALGAS_XCodeAppTargetList inOperand
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mTargetRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mTargetName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mProductFileReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mProductFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mBuildPhaseRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mBuildPhaseRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationListRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationSettingList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mFrameworksFileRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mDependentTargets ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mResourceBuildRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mResourceFileBuildRefs ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mInfoPListFileAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mInfoPListFile ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_XCodeAppTargetList::cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element cEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist cEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mDependentTargets ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mResourceBuildRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mResourceFileBuildRefs ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mInfoPListFile (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mInfoPListFile ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @XCodeAppTargetList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@BuildFileList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_BuildFileList : public cCollectionElement {
  public : GALGAS_BuildFileList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                             const GALGAS_string & in_mFileName,
                                             const GALGAS_string & in_mBuildReference
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                                                    const GALGAS_string & in_mFileName,
                                                                    const GALGAS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_BuildFileList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mAttribute_mFileReference, mObject.mAttribute_mFileName, mObject.mAttribute_mBuildReference COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_BuildFileList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileReference" ":" ;
  mObject.mAttribute_mFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileName" ":" ;
  mObject.mAttribute_mFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildReference" ":" ;
  mObject.mAttribute_mBuildReference.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_BuildFileList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_BuildFileList * operand = (cCollectionElement_BuildFileList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_BuildFileList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList::GALGAS_BuildFileList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList::GALGAS_BuildFileList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_BuildFileList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_string & inOperand2
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                   const GALGAS_string inOperand1,
                                                   const GALGAS_string inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   GALGAS_string & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
      outOperand0 = p->mObject.mAttribute_mFileReference ;
      outOperand1 = p->mObject.mAttribute_mFileName ;
      outOperand2 = p->mObject.mAttribute_mBuildReference ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::modifier_popFirst (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::modifier_popLast (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::operator_concat (const GALGAS_BuildFileList & inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::dotAssign_operation (const GALGAS_BuildFileList inOperand
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList::getter_mFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mAttribute_mFileReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList::getter_mFileNameAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mAttribute_mFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList::getter_mBuildReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mAttribute_mBuildReference ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_BuildFileList::cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element cEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mAttribute_mFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mAttribute_mFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mAttribute_mBuildReference ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @BuildFileList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@mainXibLineDescriptorList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_mainXibLineDescriptorList : public cCollectionElement {
  public : GALGAS_mainXibLineDescriptorList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_mainXibLineDescriptorList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_mainXibLineDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mainXibLineDescriptorList (mObject.mAttribute_mElement COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_mainXibLineDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mAttribute_mElement.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_mainXibLineDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mainXibLineDescriptorList * operand = (cCollectionElement_mainXibLineDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mainXibLineDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_listWithValue (const GALGAS_mainXibElement & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_mainXibElement & in_mElement
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = NULL ;
  macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::addAssign_operation (const GALGAS_mainXibElement & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::modifier_insertAtIndex (const GALGAS_mainXibElement inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::modifier_removeAtIndex (GALGAS_mainXibElement & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
      outOperand0 = p->mObject.mAttribute_mElement ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::modifier_popFirst (GALGAS_mainXibElement & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::modifier_popLast (GALGAS_mainXibElement & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::operator_concat (const GALGAS_mainXibLineDescriptorList & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::dotAssign_operation (const GALGAS_mainXibLineDescriptorList inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibElement GALGAS_mainXibLineDescriptorList::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  GALGAS_mainXibElement result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    result = p->mObject.mAttribute_mElement ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mainXibLineDescriptorList::cEnumerator_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element cEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibElement cEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject.mAttribute_mElement ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @mainXibLineDescriptorList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList ("mainXibLineDescriptorList",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       N O N    T E R M I N A L    N A M E S                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_easyBindings_grammar [76] = {
  "<start_symbol>",// Index 0
  "<extern_swift_delegate>",// Index 1
  "<extern_swift_func>",// Index 2
  "<enum_declaration>",// Index 3
  "<toMany_relationship>",// Index 4
  "<toOne_relationship>",// Index 5
  "<class_declaration>",// Index 6
  "<entity_declaration>",// Index 7
  "<document_declaration>",// Index 8
  "<preferences_declaration>",// Index 9
  "<outlet_class_declaration>",// Index 10
  "<binding_specification>",// Index 11
  "<outlet_declaration>",// Index 12
  "<observable_property>",// Index 13
  "<observable_property_extension>",// Index 14
  "<transient_declaration>",// Index 15
  "<simple_stored_declaration>",// Index 16
  "<stored_array_declaration>",// Index 17
  "<action_declaration>",// Index 18
  "<booleanMultipleBindingExpression>",// Index 19
  "<booleanMultipleBindingComparison>",// Index 20
  "<booleanMultipleBindingTerm>",// Index 21
  "<booleanMultipleBindingOperand>",// Index 22
  "<binding_option_list>",// Index 23
  "<array_controller_declaration>",// Index 24
  "<column_bindings>",// Index 25
  "<explicit_value>",// Index 26
  "<xcode_project>",// Index 27
  "<main_xib>",// Index 28
  "<main_xib_line>",// Index 29
  "<select_easyBindings_5F_syntax_0>",// Index 30
  "<select_easyBindings_5F_syntax_1>",// Index 31
  "<select_easyBindings_5F_syntax_2>",// Index 32
  "<select_easyBindings_5F_syntax_3>",// Index 33
  "<select_easyBindings_5F_syntax_4>",// Index 34
  "<select_easyBindings_5F_syntax_5>",// Index 35
  "<select_easyBindings_5F_syntax_6>",// Index 36
  "<select_easyBindings_5F_syntax_7>",// Index 37
  "<select_easyBindings_5F_syntax_8>",// Index 38
  "<select_easyBindings_5F_syntax_9>",// Index 39
  "<select_easyBindings_5F_syntax_10>",// Index 40
  "<select_easyBindings_5F_syntax_11>",// Index 41
  "<select_easyBindings_5F_syntax_12>",// Index 42
  "<select_easyBindings_5F_syntax_13>",// Index 43
  "<select_easyBindings_5F_syntax_14>",// Index 44
  "<select_easyBindings_5F_syntax_15>",// Index 45
  "<select_easyBindings_5F_syntax_16>",// Index 46
  "<select_easyBindings_5F_syntax_17>",// Index 47
  "<select_easyBindings_5F_syntax_18>",// Index 48
  "<select_easyBindings_5F_syntax_19>",// Index 49
  "<select_easyBindings_5F_syntax_20>",// Index 50
  "<select_easyBindings_5F_syntax_21>",// Index 51
  "<select_easyBindings_5F_syntax_22>",// Index 52
  "<select_easyBindings_5F_syntax_23>",// Index 53
  "<select_easyBindings_5F_syntax_24>",// Index 54
  "<select_easyBindings_5F_syntax_25>",// Index 55
  "<select_easyBindings_5F_syntax_26>",// Index 56
  "<select_easyBindings_5F_syntax_27>",// Index 57
  "<select_easyBindings_5F_syntax_28>",// Index 58
  "<select_easyBindings_5F_syntax_29>",// Index 59
  "<select_easyBindings_5F_syntax_30>",// Index 60
  "<select_easyBindings_5F_syntax_31>",// Index 61
  "<select_easyBindings_5F_syntax_32>",// Index 62
  "<select_easyBindings_5F_syntax_33>",// Index 63
  "<select_easyBindings_5F_syntax_34>",// Index 64
  "<select_easyBindings_5F_syntax_35>",// Index 65
  "<select_easyBindings_5F_syntax_36>",// Index 66
  "<select_easyBindings_5F_syntax_37>",// Index 67
  "<select_easyBindings_5F_syntax_38>",// Index 68
  "<select_easyBindings_5F_syntax_39>",// Index 69
  "<select_easyBindings_5F_syntax_40>",// Index 70
  "<select_easyBindings_5F_syntax_41>",// Index 71
  "<select_easyBindings_5F_syntax_42>",// Index 72
  "<select_easyBindings_5F_syntax_43>",// Index 73
  "<select_easyBindings_5F_syntax_44>",// Index 74
  "<>"// Index 75
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                 *
//                                                                                                                     *
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
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S1 (index = 23)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (22)
, END
// State S2 (index = 26)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (23)
, END
// State S3 (index = 29)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (24)
, END
// State S4 (index = 32)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (25)
, END
// State S5 (index = 35)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (26)
, END
// State S6 (index = 38)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (27)
, END
// State S7 (index = 41)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (28)
, END
// State S8 (index = 44)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (29)
, END
// State S9 (index = 47)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (30)
, END
// State S10 (index = 50)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (31)
, END
// State S11 (index = 53)
, C_Lexique_easyBindings_5F_lexique::kToken_, ACCEPT
, END
// State S12 (index = 56)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S13 (index = 79)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S14 (index = 102)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S15 (index = 125)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S16 (index = 148)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S17 (index = 171)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S18 (index = 194)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S19 (index = 217)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S20 (index = 240)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S21 (index = 263)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (0)
, END
// State S22 (index = 266)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (41)
, END
// State S23 (index = 269)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (42)
, END
// State S24 (index = 272)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (43)
, END
// State S25 (index = 275)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (44)
, END
// State S26 (index = 280)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (46)
, END
// State S27 (index = 283)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S28 (index = 304)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (66)
, END
// State S29 (index = 313)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (68)
, END
// State S30 (index = 316)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (69)
, END
// State S31 (index = 319)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (71)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (72)
, END
// State S32 (index = 326)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S33 (index = 329)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (38)
, END
// State S34 (index = 332)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S35 (index = 335)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (40)
, END
// State S36 (index = 338)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (39)
, END
// State S37 (index = 341)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (41)
, END
// State S38 (index = 344)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (42)
, END
// State S39 (index = 347)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (43)
, END
// State S40 (index = 350)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (44)
, END
// State S41 (index = 353)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S42 (index = 376)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (75)
, END
// State S43 (index = 379)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (76)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S44 (index = 394)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (83)
, END
// State S45 (index = 397)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (84)
, END
// State S46 (index = 400)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (85)
, END
// State S47 (index = 403)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (86)
, END
// State S48 (index = 406)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (121)
, END
// State S49 (index = 409)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (87)
, END
// State S50 (index = 412)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (88)
, END
// State S51 (index = 415)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (89)
, END
// State S52 (index = 418)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (90)
, END
// State S53 (index = 421)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (91)
, END
// State S54 (index = 424)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (92)
, END
// State S55 (index = 427)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S56 (index = 448)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S57 (index = 469)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S58 (index = 490)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S59 (index = 511)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S60 (index = 532)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S61 (index = 553)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S62 (index = 574)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (100)
, END
// State S63 (index = 577)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (101)
, END
// State S64 (index = 580)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (66)
, END
// State S65 (index = 589)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (66)
, END
// State S66 (index = 598)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (66)
, END
// State S67 (index = 607)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (105)
, END
// State S68 (index = 610)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (106)
, END
// State S69 (index = 613)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (31)
, END
// State S70 (index = 636)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (167)
, END
// State S71 (index = 641)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (107)
, END
// State S72 (index = 644)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (108)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (109)
, END
// State S73 (index = 649)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (164)
, END
// State S74 (index = 654)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (35)
, END
// State S75 (index = 657)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (45)
, END
// State S76 (index = 662)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (116)
, END
// State S77 (index = 665)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (76)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S78 (index = 680)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (76)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S79 (index = 695)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (76)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S80 (index = 710)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (76)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S81 (index = 725)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (76)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (47)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S82 (index = 740)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (122)
, END
// State S83 (index = 743)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (58)
, END
// State S84 (index = 746)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (123)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (47)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (124)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S85 (index = 761)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (132)
, END
// State S86 (index = 764)
, C_Lexique_easyBindings_5F_lexique::kToken_calledBy, SHIFT (133)
, END
// State S87 (index = 767)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (134)
, END
// State S88 (index = 770)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (135)
, END
// State S89 (index = 773)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (136)
, END
// State S90 (index = 776)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (137)
, END
// State S91 (index = 779)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (138)
, END
// State S92 (index = 782)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (139)
, END
// State S93 (index = 785)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, END
// State S94 (index = 788)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, END
// State S95 (index = 791)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, END
// State S96 (index = 794)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (73)
, END
// State S97 (index = 797)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (77)
, END
// State S98 (index = 800)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, END
// State S99 (index = 803)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (78)
, END
// State S100 (index = 806)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (9)
, END
// State S101 (index = 829)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_validates, SHIFT (140)
, END
// State S102 (index = 834)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (80)
, END
// State S103 (index = 837)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (81)
, END
// State S104 (index = 840)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (82)
, END
// State S105 (index = 843)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (10)
, END
// State S106 (index = 866)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (142)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (143)
, END
// State S107 (index = 871)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, END
// State S108 (index = 876)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (172)
, END
// State S109 (index = 881)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (145)
, END
// State S110 (index = 884)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (146)
, END
// State S111 (index = 887)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (147)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (169)
, END
// State S112 (index = 892)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (71)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (72)
, END
// State S113 (index = 899)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (150)
, END
// State S114 (index = 902)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (151)
, END
// State S115 (index = 905)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (152)
, END
// State S116 (index = 908)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (153)
, END
// State S117 (index = 911)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (55)
, END
// State S118 (index = 914)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (54)
, END
// State S119 (index = 917)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (53)
, END
// State S120 (index = 920)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (52)
, END
// State S121 (index = 923)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (56)
, END
// State S122 (index = 926)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (6)
, END
// State S123 (index = 949)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (121)
, END
// State S124 (index = 954)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (154)
, END
// State S125 (index = 957)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (123)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (47)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (124)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S126 (index = 972)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (123)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (47)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (124)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S127 (index = 987)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (123)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (47)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (124)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S128 (index = 1002)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (123)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (47)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (124)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S129 (index = 1017)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (123)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (47)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (124)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, END
// State S130 (index = 1032)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (160)
, END
// State S131 (index = 1035)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (161)
, END
// State S132 (index = 1038)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S133 (index = 1055)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (168)
, END
// State S134 (index = 1058)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (169)
, END
// State S135 (index = 1061)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (172)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (173)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (174)
, END
// State S136 (index = 1074)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (176)
, END
// State S137 (index = 1077)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (18)
, END
// State S138 (index = 1104)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (177)
, END
// State S139 (index = 1107)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, END
// State S140 (index = 1110)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (123)
, END
// State S141 (index = 1113)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (179)
, END
// State S142 (index = 1116)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (85)
, END
// State S143 (index = 1121)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (86)
, END
// State S144 (index = 1126)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (181)
, END
// State S145 (index = 1131)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (171)
, END
// State S146 (index = 1136)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (168)
, END
// State S147 (index = 1141)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (108)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (109)
, END
// State S148 (index = 1146)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (33)
, END
// State S149 (index = 1149)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (164)
, END
// State S150 (index = 1154)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S151 (index = 1177)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (45)
, END
// State S152 (index = 1182)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (3)
, END
// State S153 (index = 1205)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (1)
, END
// State S154 (index = 1220)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (186)
, END
// State S155 (index = 1223)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, END
// State S156 (index = 1226)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, END
// State S157 (index = 1229)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (61)
, END
// State S158 (index = 1232)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (60)
, END
// State S159 (index = 1235)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, END
// State S160 (index = 1238)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (187)
, END
// State S161 (index = 1241)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (7)
, END
// State S162 (index = 1264)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S163 (index = 1281)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S164 (index = 1298)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S165 (index = 1315)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S166 (index = 1332)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (54)
, END
// State S167 (index = 1349)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (193)
, END
// State S168 (index = 1352)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (194)
, END
// State S169 (index = 1355)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, END
// State S170 (index = 1370)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (204)
, END
// State S171 (index = 1373)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, END
// State S172 (index = 1378)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (210)
, END
// State S173 (index = 1399)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, END
// State S174 (index = 1414)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (210)
, END
// State S175 (index = 1435)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (218)
, END
// State S176 (index = 1438)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (17)
, END
// State S177 (index = 1459)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (219)
, END
// State S178 (index = 1462)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (220)
, END
// State S179 (index = 1465)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (221)
, END
// State S180 (index = 1468)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (87)
, END
// State S181 (index = 1475)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (88)
, END
// State S182 (index = 1482)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (83)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (83)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (222)
, END
// State S183 (index = 1489)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (147)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (169)
, END
// State S184 (index = 1494)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (165)
, END
// State S185 (index = 1497)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (46)
, END
// State S186 (index = 1500)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (225)
, END
// State S187 (index = 1503)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, END
// State S188 (index = 1506)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, END
// State S189 (index = 1509)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (68)
, END
// State S190 (index = 1512)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, END
// State S191 (index = 1515)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, END
// State S192 (index = 1518)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, END
// State S193 (index = 1521)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (8)
, END
// State S194 (index = 1544)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (2)
, END
// State S195 (index = 1567)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (227)
, END
// State S196 (index = 1570)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (107)
, END
// State S197 (index = 1601)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (228)
, END
// State S198 (index = 1604)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (229)
, END
// State S199 (index = 1607)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (229)
, END
// State S200 (index = 1610)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (108)
, END
// State S201 (index = 1641)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (109)
, END
// State S202 (index = 1672)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (232)
, END
// State S203 (index = 1677)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (13)
, END
// State S204 (index = 1708)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (172)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (173)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (174)
, END
// State S205 (index = 1721)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (100)
, END
// State S206 (index = 1724)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (99)
, END
// State S207 (index = 1727)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (235)
, END
// State S208 (index = 1730)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (210)
, END
// State S209 (index = 1751)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (210)
, END
// State S210 (index = 1772)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (25)
, END
// State S211 (index = 1799)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (22)
, END
// State S212 (index = 1826)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (172)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (173)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (174)
, END
// State S213 (index = 1839)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (239)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (124)
, END
// State S214 (index = 1860)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, SHIFT (241)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (126)
, END
// State S215 (index = 1883)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (243)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (244)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (128)
, END
// State S216 (index = 1910)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (246)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (101)
, END
// State S217 (index = 1927)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (172)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (173)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (174)
, END
// State S218 (index = 1940)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (12)
, END
// State S219 (index = 1961)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (254)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (255)
, END
// State S220 (index = 1976)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (258)
, END
// State S221 (index = 1979)
, C_Lexique_easyBindings_5F_lexique::kToken_default, SHIFT (259)
, END
// State S222 (index = 1982)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (142)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (143)
, END
// State S223 (index = 1987)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (261)
, END
// State S224 (index = 1992)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (170)
, END
// State S225 (index = 1995)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (263)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (264)
, END
// State S226 (index = 2000)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (266)
, END
// State S227 (index = 2003)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (267)
, END
// State S228 (index = 2006)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (268)
, END
// State S229 (index = 2009)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (269)
, END
// State S230 (index = 2012)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (105)
, END
// State S231 (index = 2043)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (104)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (104)
, END
// State S232 (index = 2074)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, END
// State S233 (index = 2089)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (271)
, END
// State S234 (index = 2092)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (94)
, END
// State S235 (index = 2095)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (272)
, END
// State S236 (index = 2098)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (23)
, END
// State S237 (index = 2125)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (273)
, END
// State S238 (index = 2128)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (96)
, END
// State S239 (index = 2131)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (210)
, END
// State S240 (index = 2152)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (19)
, END
// State S241 (index = 2171)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (210)
, END
// State S242 (index = 2192)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (20)
, END
// State S243 (index = 2213)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (210)
, END
// State S244 (index = 2234)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (210)
, END
// State S245 (index = 2255)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (21)
, END
// State S246 (index = 2278)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, END
// State S247 (index = 2293)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (131)
, END
// State S248 (index = 2312)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, END
// State S249 (index = 2315)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (159)
, END
// State S250 (index = 2324)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (160)
, END
// State S251 (index = 2333)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (254)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (255)
, END
// State S252 (index = 2348)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (157)
, END
// State S253 (index = 2357)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (155)
, END
// State S254 (index = 2366)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (156)
, END
// State S255 (index = 2375)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (158)
, END
// State S256 (index = 2384)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (283)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (135)
, END
// State S257 (index = 2389)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (30)
, END
// State S258 (index = 2398)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (285)
, END
// State S259 (index = 2401)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (254)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (255)
, END
// State S260 (index = 2416)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (181)
, END
// State S261 (index = 2421)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (288)
, END
// State S262 (index = 2424)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (289)
, END
// State S263 (index = 2427)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (50)
, END
// State S264 (index = 2430)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (49)
, END
// State S265 (index = 2433)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (290)
, END
// State S266 (index = 2436)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (291)
, END
// State S267 (index = 2439)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (292)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (114)
, END
// State S268 (index = 2472)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (294)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (110)
, END
// State S269 (index = 2505)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (296)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (116)
, END
// State S270 (index = 2538)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (232)
, END
// State S271 (index = 2543)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (15)
, END
// State S272 (index = 2570)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (172)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (173)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (174)
, END
// State S273 (index = 2583)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (24)
, END
// State S274 (index = 2610)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (239)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (124)
, END
// State S275 (index = 2631)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (127)
, END
// State S276 (index = 2652)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (243)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (244)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (128)
, END
// State S277 (index = 2679)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (243)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (244)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (128)
, END
// State S278 (index = 2706)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (246)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (101)
, END
// State S279 (index = 2723)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (304)
, END
// State S280 (index = 2726)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (172)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (173)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (174)
, END
// State S281 (index = 2739)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (26)
, END
// State S282 (index = 2756)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (306)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (162)
, END
// State S283 (index = 2761)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (308)
, END
// State S284 (index = 2764)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (309)
, END
// State S285 (index = 2767)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (29)
, END
// State S286 (index = 2788)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (310)
, END
// State S287 (index = 2791)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (83)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (83)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (222)
, END
// State S288 (index = 2798)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (312)
, END
// State S289 (index = 2801)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (11)
, END
// State S290 (index = 2824)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (313)
, END
// State S291 (index = 2827)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (314)
, END
// State S292 (index = 2830)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (315)
, END
// State S293 (index = 2833)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (106)
, END
// State S294 (index = 2864)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (316)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (317)
, END
// State S295 (index = 2869)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (103)
, END
// State S296 (index = 2900)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (319)
, END
// State S297 (index = 2903)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (14)
, END
// State S298 (index = 2934)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (119)
, END
// State S299 (index = 2937)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (95)
, END
// State S300 (index = 2940)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (125)
, END
// State S301 (index = 2959)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (129)
, END
// State S302 (index = 2982)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (130)
, END
// State S303 (index = 3005)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (102)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (102)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (102)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (102)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (102)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (102)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (102)
, END
// State S304 (index = 3020)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (320)
, END
// State S305 (index = 3023)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, END
// State S306 (index = 3026)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (254)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (255)
, END
// State S307 (index = 3041)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (322)
, END
// State S308 (index = 3044)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (323)
, END
// State S309 (index = 3047)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (324)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (325)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (326)
, END
// State S310 (index = 3054)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (16)
, END
// State S311 (index = 3081)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (84)
, END
// State S312 (index = 3086)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (328)
, END
// State S313 (index = 3089)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (5)
, END
// State S314 (index = 3104)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (329)
, END
// State S315 (index = 3107)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (115)
, END
// State S316 (index = 3138)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (112)
, END
// State S317 (index = 3169)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (330)
, END
// State S318 (index = 3172)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (111)
, END
// State S319 (index = 3203)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (117)
, END
// State S320 (index = 3234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (254)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (255)
, END
// State S321 (index = 3249)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (306)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (162)
, END
// State S322 (index = 3254)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (161)
, END
// State S323 (index = 3263)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (254)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (255)
, END
// State S324 (index = 3278)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (334)
, END
// State S325 (index = 3281)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (335)
, END
// State S326 (index = 3284)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (336)
, END
// State S327 (index = 3287)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, SHIFT (337)
, END
// State S328 (index = 3292)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (91)
, END
// State S329 (index = 3297)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (4)
, END
// State S330 (index = 3312)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (341)
, END
// State S331 (index = 3315)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (342)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (133)
, END
// State S332 (index = 3320)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (163)
, END
// State S333 (index = 3323)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (283)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (135)
, END
// State S334 (index = 3328)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (345)
, END
// State S335 (index = 3331)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (346)
, END
// State S336 (index = 3334)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (347)
, END
// State S337 (index = 3337)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (348)
, END
// State S338 (index = 3340)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (349)
, END
// State S339 (index = 3343)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (350)
, END
// State S340 (index = 3346)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (351)
, END
// State S341 (index = 3349)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (113)
, END
// State S342 (index = 3380)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (352)
, END
// State S343 (index = 3383)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (353)
, END
// State S344 (index = 3386)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (136)
, END
// State S345 (index = 3389)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, REDUCE (139)
, END
// State S346 (index = 3394)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, REDUCE (137)
, END
// State S347 (index = 3399)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, REDUCE (138)
, END
// State S348 (index = 3404)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (354)
, END
// State S349 (index = 3409)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (356)
, END
// State S350 (index = 3414)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (358)
, END
// State S351 (index = 3417)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (90)
, END
// State S352 (index = 3420)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (359)
, END
// State S353 (index = 3423)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (132)
, END
// State S354 (index = 3440)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (360)
, END
// State S355 (index = 3443)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (141)
, END
// State S356 (index = 3446)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (361)
, END
// State S357 (index = 3449)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (362)
, END
// State S358 (index = 3452)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (363)
, END
// State S359 (index = 3455)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (254)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (255)
, END
// State S360 (index = 3470)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (354)
, END
// State S361 (index = 3475)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (146)
, C_Lexique_easyBindings_5F_lexique::kToken_sort, SHIFT (366)
, END
// State S362 (index = 3480)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (27)
, END
// State S363 (index = 3501)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (91)
, END
// State S364 (index = 3506)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (342)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (133)
, END
// State S365 (index = 3511)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (143)
, END
// State S366 (index = 3514)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (370)
, END
// State S367 (index = 3517)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (371)
, END
// State S368 (index = 3520)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (92)
, END
// State S369 (index = 3523)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (134)
, END
// State S370 (index = 3526)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (147)
, END
// State S371 (index = 3529)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (372)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (373)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (374)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (375)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (148)
, END
// State S372 (index = 3542)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (378)
, END
// State S373 (index = 3545)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (210)
, END
// State S374 (index = 3566)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, END
// State S375 (index = 3581)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (210)
, END
// State S376 (index = 3602)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (356)
, END
// State S377 (index = 3607)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (28)
, END
// State S378 (index = 3612)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (383)
, END
// State S379 (index = 3615)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (372)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (373)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (374)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (375)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (148)
, END
// State S380 (index = 3628)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (385)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (153)
, END
// State S381 (index = 3645)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (372)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (373)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (374)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (375)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (148)
, END
// State S382 (index = 3658)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (145)
, END
// State S383 (index = 3661)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (388)
, END
// State S384 (index = 3664)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (150)
, END
// State S385 (index = 3669)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (201)
, END
// State S386 (index = 3684)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (131)
, END
// State S387 (index = 3703)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (151)
, END
// State S388 (index = 3708)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (372)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (373)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (374)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (375)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (148)
, END
// State S389 (index = 3721)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (385)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (153)
, END
// State S390 (index = 3738)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (372)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (373)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (374)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (375)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (148)
, END
// State S391 (index = 3751)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (149)
, END
// State S392 (index = 3756)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (154)
, END
// State S393 (index = 3771)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (152)
, END} ;

static const uint32_t gActionTableIndex_easyBindings_grammar [394] = {
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
, 56  // S12
, 79  // S13
, 102  // S14
, 125  // S15
, 148  // S16
, 171  // S17
, 194  // S18
, 217  // S19
, 240  // S20
, 263  // S21
, 266  // S22
, 269  // S23
, 272  // S24
, 275  // S25
, 280  // S26
, 283  // S27
, 304  // S28
, 313  // S29
, 316  // S30
, 319  // S31
, 326  // S32
, 329  // S33
, 332  // S34
, 335  // S35
, 338  // S36
, 341  // S37
, 344  // S38
, 347  // S39
, 350  // S40
, 353  // S41
, 376  // S42
, 379  // S43
, 394  // S44
, 397  // S45
, 400  // S46
, 403  // S47
, 406  // S48
, 409  // S49
, 412  // S50
, 415  // S51
, 418  // S52
, 421  // S53
, 424  // S54
, 427  // S55
, 448  // S56
, 469  // S57
, 490  // S58
, 511  // S59
, 532  // S60
, 553  // S61
, 574  // S62
, 577  // S63
, 580  // S64
, 589  // S65
, 598  // S66
, 607  // S67
, 610  // S68
, 613  // S69
, 636  // S70
, 641  // S71
, 644  // S72
, 649  // S73
, 654  // S74
, 657  // S75
, 662  // S76
, 665  // S77
, 680  // S78
, 695  // S79
, 710  // S80
, 725  // S81
, 740  // S82
, 743  // S83
, 746  // S84
, 761  // S85
, 764  // S86
, 767  // S87
, 770  // S88
, 773  // S89
, 776  // S90
, 779  // S91
, 782  // S92
, 785  // S93
, 788  // S94
, 791  // S95
, 794  // S96
, 797  // S97
, 800  // S98
, 803  // S99
, 806  // S100
, 829  // S101
, 834  // S102
, 837  // S103
, 840  // S104
, 843  // S105
, 866  // S106
, 871  // S107
, 876  // S108
, 881  // S109
, 884  // S110
, 887  // S111
, 892  // S112
, 899  // S113
, 902  // S114
, 905  // S115
, 908  // S116
, 911  // S117
, 914  // S118
, 917  // S119
, 920  // S120
, 923  // S121
, 926  // S122
, 949  // S123
, 954  // S124
, 957  // S125
, 972  // S126
, 987  // S127
, 1002  // S128
, 1017  // S129
, 1032  // S130
, 1035  // S131
, 1038  // S132
, 1055  // S133
, 1058  // S134
, 1061  // S135
, 1074  // S136
, 1077  // S137
, 1104  // S138
, 1107  // S139
, 1110  // S140
, 1113  // S141
, 1116  // S142
, 1121  // S143
, 1126  // S144
, 1131  // S145
, 1136  // S146
, 1141  // S147
, 1146  // S148
, 1149  // S149
, 1154  // S150
, 1177  // S151
, 1182  // S152
, 1205  // S153
, 1220  // S154
, 1223  // S155
, 1226  // S156
, 1229  // S157
, 1232  // S158
, 1235  // S159
, 1238  // S160
, 1241  // S161
, 1264  // S162
, 1281  // S163
, 1298  // S164
, 1315  // S165
, 1332  // S166
, 1349  // S167
, 1352  // S168
, 1355  // S169
, 1370  // S170
, 1373  // S171
, 1378  // S172
, 1399  // S173
, 1414  // S174
, 1435  // S175
, 1438  // S176
, 1459  // S177
, 1462  // S178
, 1465  // S179
, 1468  // S180
, 1475  // S181
, 1482  // S182
, 1489  // S183
, 1494  // S184
, 1497  // S185
, 1500  // S186
, 1503  // S187
, 1506  // S188
, 1509  // S189
, 1512  // S190
, 1515  // S191
, 1518  // S192
, 1521  // S193
, 1544  // S194
, 1567  // S195
, 1570  // S196
, 1601  // S197
, 1604  // S198
, 1607  // S199
, 1610  // S200
, 1641  // S201
, 1672  // S202
, 1677  // S203
, 1708  // S204
, 1721  // S205
, 1724  // S206
, 1727  // S207
, 1730  // S208
, 1751  // S209
, 1772  // S210
, 1799  // S211
, 1826  // S212
, 1839  // S213
, 1860  // S214
, 1883  // S215
, 1910  // S216
, 1927  // S217
, 1940  // S218
, 1961  // S219
, 1976  // S220
, 1979  // S221
, 1982  // S222
, 1987  // S223
, 1992  // S224
, 1995  // S225
, 2000  // S226
, 2003  // S227
, 2006  // S228
, 2009  // S229
, 2012  // S230
, 2043  // S231
, 2074  // S232
, 2089  // S233
, 2092  // S234
, 2095  // S235
, 2098  // S236
, 2125  // S237
, 2128  // S238
, 2131  // S239
, 2152  // S240
, 2171  // S241
, 2192  // S242
, 2213  // S243
, 2234  // S244
, 2255  // S245
, 2278  // S246
, 2293  // S247
, 2312  // S248
, 2315  // S249
, 2324  // S250
, 2333  // S251
, 2348  // S252
, 2357  // S253
, 2366  // S254
, 2375  // S255
, 2384  // S256
, 2389  // S257
, 2398  // S258
, 2401  // S259
, 2416  // S260
, 2421  // S261
, 2424  // S262
, 2427  // S263
, 2430  // S264
, 2433  // S265
, 2436  // S266
, 2439  // S267
, 2472  // S268
, 2505  // S269
, 2538  // S270
, 2543  // S271
, 2570  // S272
, 2583  // S273
, 2610  // S274
, 2631  // S275
, 2652  // S276
, 2679  // S277
, 2706  // S278
, 2723  // S279
, 2726  // S280
, 2739  // S281
, 2756  // S282
, 2761  // S283
, 2764  // S284
, 2767  // S285
, 2788  // S286
, 2791  // S287
, 2798  // S288
, 2801  // S289
, 2824  // S290
, 2827  // S291
, 2830  // S292
, 2833  // S293
, 2864  // S294
, 2869  // S295
, 2900  // S296
, 2903  // S297
, 2934  // S298
, 2937  // S299
, 2940  // S300
, 2959  // S301
, 2982  // S302
, 3005  // S303
, 3020  // S304
, 3023  // S305
, 3026  // S306
, 3041  // S307
, 3044  // S308
, 3047  // S309
, 3054  // S310
, 3081  // S311
, 3086  // S312
, 3089  // S313
, 3104  // S314
, 3107  // S315
, 3138  // S316
, 3169  // S317
, 3172  // S318
, 3203  // S319
, 3234  // S320
, 3249  // S321
, 3254  // S322
, 3263  // S323
, 3278  // S324
, 3281  // S325
, 3284  // S326
, 3287  // S327
, 3292  // S328
, 3297  // S329
, 3312  // S330
, 3315  // S331
, 3320  // S332
, 3323  // S333
, 3328  // S334
, 3331  // S335
, 3334  // S336
, 3337  // S337
, 3340  // S338
, 3343  // S339
, 3346  // S340
, 3349  // S341
, 3380  // S342
, 3383  // S343
, 3386  // S344
, 3389  // S345
, 3394  // S346
, 3399  // S347
, 3404  // S348
, 3409  // S349
, 3414  // S350
, 3417  // S351
, 3420  // S352
, 3423  // S353
, 3440  // S354
, 3443  // S355
, 3446  // S356
, 3449  // S357
, 3452  // S358
, 3455  // S359
, 3470  // S360
, 3475  // S361
, 3480  // S362
, 3501  // S363
, 3506  // S364
, 3511  // S365
, 3514  // S366
, 3517  // S367
, 3520  // S368
, 3523  // S369
, 3526  // S370
, 3529  // S371
, 3542  // S372
, 3545  // S373
, 3566  // S374
, 3581  // S375
, 3602  // S376
, 3607  // S377
, 3612  // S378
, 3615  // S379
, 3628  // S380
, 3645  // S381
, 3658  // S382
, 3661  // S383
, 3664  // S384
, 3669  // S385
, 3684  // S386
, 3703  // S387
, 3708  // S388
, 3721  // S389
, 3738  // S390
, 3751  // S391
, 3756  // S392
, 3771  // S393
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            SLR states successors table                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_easyBindings_grammar_0 [23] = {0, 11,
  3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 21, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_12 [21] = {3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 32, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_13 [21] = {3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 33, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_14 [21] = {3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 34, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_15 [21] = {3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 35, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_16 [21] = {3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 36, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_17 [21] = {3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 37, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_18 [21] = {3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 38, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_19 [21] = {3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 39, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_20 [21] = {3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 40, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_25 [3] = {35, 45, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_27 [19] = {2, 55,
  12, 56,
  15, 57,
  16, 58,
  17, 59,
  18, 60,
  24, 61,
  38, 62,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_28 [3] = {39, 67, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_31 [3] = {72, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_41 [21] = {3, 12,
  6, 13,
  7, 14,
  8, 15,
  9, 16,
  10, 17,
  11, 18,
  27, 19,
  28, 20,
  30, 74, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_43 [15] = {1, 77,
  2, 78,
  15, 79,
  16, 80,
  18, 81,
  34, 82,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_55 [19] = {2, 55,
  12, 56,
  15, 57,
  16, 58,
  17, 59,
  18, 60,
  24, 61,
  38, 93,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_56 [19] = {2, 55,
  12, 56,
  15, 57,
  16, 58,
  17, 59,
  18, 60,
  24, 61,
  38, 94,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_57 [19] = {2, 55,
  12, 56,
  15, 57,
  16, 58,
  17, 59,
  18, 60,
  24, 61,
  38, 95,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_58 [19] = {2, 55,
  12, 56,
  15, 57,
  16, 58,
  17, 59,
  18, 60,
  24, 61,
  38, 96,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_59 [19] = {2, 55,
  12, 56,
  15, 57,
  16, 58,
  17, 59,
  18, 60,
  24, 61,
  38, 97,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_60 [19] = {2, 55,
  12, 56,
  15, 57,
  16, 58,
  17, 59,
  18, 60,
  24, 61,
  38, 98,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_61 [19] = {2, 55,
  12, 56,
  15, 57,
  16, 58,
  17, 59,
  18, 60,
  24, 61,
  38, 99,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_64 [3] = {39, 102, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_65 [3] = {39, 103, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_66 [3] = {39, 104, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_72 [5] = {29, 110,
  74, 111, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_73 [3] = {71, 113, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_75 [3] = {31, 115, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_77 [15] = {1, 77,
  2, 78,
  15, 79,
  16, 80,
  18, 81,
  34, 117,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_78 [15] = {1, 77,
  2, 78,
  15, 79,
  16, 80,
  18, 81,
  34, 118,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_79 [15] = {1, 77,
  2, 78,
  15, 79,
  16, 80,
  18, 81,
  34, 119,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_80 [15] = {1, 77,
  2, 78,
  15, 79,
  16, 80,
  18, 81,
  34, 120,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_81 [15] = {1, 77,
  2, 78,
  15, 79,
  16, 80,
  18, 81,
  34, 121,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_84 [17] = {4, 125,
  5, 126,
  15, 127,
  16, 128,
  18, 129,
  32, 130,
  36, 131,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_101 [3] = {55, 141, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_106 [3] = {41, 144, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_111 [3] = {73, 148, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_112 [3] = {72, 149, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_125 [17] = {4, 125,
  5, 126,
  15, 127,
  16, 128,
  18, 129,
  32, 130,
  36, 155,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_126 [17] = {4, 125,
  5, 126,
  15, 127,
  16, 128,
  18, 129,
  32, 130,
  36, 156,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_127 [17] = {4, 125,
  5, 126,
  15, 127,
  16, 128,
  18, 129,
  32, 130,
  36, 157,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_128 [17] = {4, 125,
  5, 126,
  15, 127,
  16, 128,
  18, 129,
  32, 130,
  36, 158,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_129 [17] = {4, 125,
  5, 126,
  15, 127,
  16, 128,
  18, 129,
  32, 130,
  36, 159,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_132 [15] = {12, 162,
  15, 163,
  16, 164,
  18, 165,
  24, 166,
  37, 167,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_135 [3] = {45, 175, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_144 [3] = {42, 182, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_147 [3] = {74, 183, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_149 [3] = {71, 184, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_151 [3] = {31, 185, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_162 [15] = {12, 162,
  15, 163,
  16, 164,
  18, 165,
  24, 166,
  37, 188,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_163 [15] = {12, 162,
  15, 163,
  16, 164,
  18, 165,
  24, 166,
  37, 189,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_164 [15] = {12, 162,
  15, 163,
  16, 164,
  18, 165,
  24, 166,
  37, 190,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_165 [15] = {12, 162,
  15, 163,
  16, 164,
  18, 165,
  24, 166,
  37, 191,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_166 [15] = {12, 162,
  15, 163,
  16, 164,
  18, 165,
  24, 166,
  37, 192,
  54, 63, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_169 [5] = {13, 202,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_171 [3] = {46, 207, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_172 [13] = {13, 211,
  19, 212,
  20, 213,
  21, 214,
  22, 215,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_173 [5] = {13, 216,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_174 [13] = {13, 211,
  19, 217,
  20, 213,
  21, 214,
  22, 215,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_182 [3] = {40, 223, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_183 [3] = {73, 224, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_198 [3] = {14, 230, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_199 [3] = {14, 231, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_202 [3] = {53, 233, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_204 [3] = {45, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_208 [7] = {13, 211,
  22, 236,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_209 [13] = {13, 211,
  19, 237,
  20, 213,
  21, 214,
  22, 215,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_212 [3] = {45, 238, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_213 [3] = {56, 240, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_214 [3] = {57, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_215 [3] = {58, 245, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_216 [3] = {47, 247, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_217 [3] = {45, 248, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_219 [5] = {26, 256,
  69, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_222 [3] = {41, 260, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_223 [3] = {43, 262, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_225 [3] = {33, 265, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_232 [5] = {13, 270,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_239 [11] = {13, 211,
  20, 274,
  21, 214,
  22, 215,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_241 [9] = {13, 211,
  21, 275,
  22, 215,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_243 [7] = {13, 211,
  22, 276,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_244 [7] = {13, 211,
  22, 277,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_246 [5] = {13, 278,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_247 [5] = {23, 280,
  59, 281, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_251 [5] = {26, 282,
  69, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_256 [3] = {61, 284, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_259 [5] = {26, 286,
  69, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_260 [3] = {42, 287, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_267 [3] = {51, 293, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_268 [3] = {49, 295, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_269 [3] = {52, 297, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_270 [3] = {53, 298, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_272 [3] = {45, 299, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_274 [3] = {56, 300, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_276 [3] = {58, 301, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_277 [3] = {58, 302, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_278 [3] = {47, 303, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_280 [3] = {45, 305, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_282 [3] = {70, 307, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_287 [3] = {40, 311, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_294 [3] = {50, 318, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_306 [5] = {26, 321,
  69, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_309 [3] = {62, 327, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_320 [5] = {26, 331,
  69, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_321 [3] = {70, 332, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_323 [5] = {26, 333,
  69, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_327 [3] = {63, 338, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_328 [3] = {44, 340, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_331 [3] = {60, 343, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_333 [3] = {61, 344, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_348 [3] = {64, 355, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_349 [3] = {65, 357, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_359 [5] = {26, 364,
  69, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_360 [3] = {64, 365, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_361 [3] = {66, 367, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_363 [3] = {44, 368, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_364 [3] = {60, 369, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_371 [5] = {25, 376,
  67, 377, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_373 [13] = {13, 211,
  19, 379,
  20, 213,
  21, 214,
  22, 215,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_374 [5] = {13, 380,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_375 [13] = {13, 211,
  19, 381,
  20, 213,
  21, 214,
  22, 215,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_376 [3] = {65, 382, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_379 [3] = {67, 384, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_380 [3] = {68, 386, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_381 [3] = {67, 387, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_385 [5] = {13, 389,
  48, 203, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_386 [5] = {23, 390,
  59, 281, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_388 [3] = {67, 391, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_389 [3] = {68, 392, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_390 [3] = {67, 393, -1} ;

static const int16_t * gSuccessorTable_easyBindings_grammar [394] = {
gSuccessorTable_easyBindings_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_12, gSuccessorTable_easyBindings_grammar_13, gSuccessorTable_easyBindings_grammar_14, gSuccessorTable_easyBindings_grammar_15, 
  gSuccessorTable_easyBindings_grammar_16, gSuccessorTable_easyBindings_grammar_17, gSuccessorTable_easyBindings_grammar_18, gSuccessorTable_easyBindings_grammar_19, 
  gSuccessorTable_easyBindings_grammar_20, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_25, NULL, gSuccessorTable_easyBindings_grammar_27, 
  gSuccessorTable_easyBindings_grammar_28, NULL, NULL, gSuccessorTable_easyBindings_grammar_31, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_41, NULL, gSuccessorTable_easyBindings_grammar_43, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_55, 
  gSuccessorTable_easyBindings_grammar_56, gSuccessorTable_easyBindings_grammar_57, gSuccessorTable_easyBindings_grammar_58, gSuccessorTable_easyBindings_grammar_59, 
  gSuccessorTable_easyBindings_grammar_60, gSuccessorTable_easyBindings_grammar_61, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_64, gSuccessorTable_easyBindings_grammar_65, gSuccessorTable_easyBindings_grammar_66, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_72, gSuccessorTable_easyBindings_grammar_73, NULL, gSuccessorTable_easyBindings_grammar_75, 
  NULL, gSuccessorTable_easyBindings_grammar_77, gSuccessorTable_easyBindings_grammar_78, gSuccessorTable_easyBindings_grammar_79, 
  gSuccessorTable_easyBindings_grammar_80, gSuccessorTable_easyBindings_grammar_81, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_84, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_101, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_106, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_111, 
  gSuccessorTable_easyBindings_grammar_112, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_125, gSuccessorTable_easyBindings_grammar_126, gSuccessorTable_easyBindings_grammar_127, 
  gSuccessorTable_easyBindings_grammar_128, gSuccessorTable_easyBindings_grammar_129, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_132, NULL, NULL, gSuccessorTable_easyBindings_grammar_135, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_144, NULL, NULL, gSuccessorTable_easyBindings_grammar_147, 
  NULL, gSuccessorTable_easyBindings_grammar_149, NULL, gSuccessorTable_easyBindings_grammar_151, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_162, gSuccessorTable_easyBindings_grammar_163, 
  gSuccessorTable_easyBindings_grammar_164, gSuccessorTable_easyBindings_grammar_165, gSuccessorTable_easyBindings_grammar_166, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_169, NULL, gSuccessorTable_easyBindings_grammar_171, 
  gSuccessorTable_easyBindings_grammar_172, gSuccessorTable_easyBindings_grammar_173, gSuccessorTable_easyBindings_grammar_174, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_182, gSuccessorTable_easyBindings_grammar_183, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_198, gSuccessorTable_easyBindings_grammar_199, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_202, NULL, 
  gSuccessorTable_easyBindings_grammar_204, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_208, gSuccessorTable_easyBindings_grammar_209, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_212, gSuccessorTable_easyBindings_grammar_213, gSuccessorTable_easyBindings_grammar_214, gSuccessorTable_easyBindings_grammar_215, 
  gSuccessorTable_easyBindings_grammar_216, gSuccessorTable_easyBindings_grammar_217, NULL, gSuccessorTable_easyBindings_grammar_219, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_222, gSuccessorTable_easyBindings_grammar_223, 
  NULL, gSuccessorTable_easyBindings_grammar_225, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_232, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_239, 
  NULL, gSuccessorTable_easyBindings_grammar_241, NULL, gSuccessorTable_easyBindings_grammar_243, 
  gSuccessorTable_easyBindings_grammar_244, NULL, gSuccessorTable_easyBindings_grammar_246, gSuccessorTable_easyBindings_grammar_247, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_251, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_256, NULL, NULL, gSuccessorTable_easyBindings_grammar_259, 
  gSuccessorTable_easyBindings_grammar_260, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_267, 
  gSuccessorTable_easyBindings_grammar_268, gSuccessorTable_easyBindings_grammar_269, gSuccessorTable_easyBindings_grammar_270, NULL, 
  gSuccessorTable_easyBindings_grammar_272, NULL, gSuccessorTable_easyBindings_grammar_274, NULL, 
  gSuccessorTable_easyBindings_grammar_276, gSuccessorTable_easyBindings_grammar_277, gSuccessorTable_easyBindings_grammar_278, NULL, 
  gSuccessorTable_easyBindings_grammar_280, NULL, gSuccessorTable_easyBindings_grammar_282, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_287, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_294, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_306, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_309, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_320, gSuccessorTable_easyBindings_grammar_321, NULL, gSuccessorTable_easyBindings_grammar_323, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_327, 
  gSuccessorTable_easyBindings_grammar_328, NULL, NULL, gSuccessorTable_easyBindings_grammar_331, 
  NULL, gSuccessorTable_easyBindings_grammar_333, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_348, gSuccessorTable_easyBindings_grammar_349, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_359, 
  gSuccessorTable_easyBindings_grammar_360, gSuccessorTable_easyBindings_grammar_361, NULL, gSuccessorTable_easyBindings_grammar_363, 
  gSuccessorTable_easyBindings_grammar_364, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_371, 
  NULL, gSuccessorTable_easyBindings_grammar_373, gSuccessorTable_easyBindings_grammar_374, gSuccessorTable_easyBindings_grammar_375, 
  gSuccessorTable_easyBindings_grammar_376, NULL, NULL, gSuccessorTable_easyBindings_grammar_379, 
  gSuccessorTable_easyBindings_grammar_380, gSuccessorTable_easyBindings_grammar_381, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_385, gSuccessorTable_easyBindings_grammar_386, NULL, 
  gSuccessorTable_easyBindings_grammar_388, gSuccessorTable_easyBindings_grammar_389, gSuccessorTable_easyBindings_grammar_390, NULL, 
  NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Production rules infos (left non terminal, size of right string)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_easyBindings_grammar [174 * 2] = {
  0, 1,
  1, 3,
  2, 5,
  3, 6,
  4, 8,
  5, 7,
  6, 5,
  7, 6,
  8, 7,
  9, 4,
  10, 4,
  11, 9,
  12, 5,
  13, 1,
  14, 3,
  15, 7,
  16, 8,
  17, 4,
  18, 3,
  19, 2,
  20, 2,
  21, 2,
  22, 1,
  22, 2,
  22, 3,
  22, 1,
  23, 1,
  24, 13,
  25, 1,
  24, 7,
  26, 1,
  27, 3,
  28, 5,
  29, 2,
  30, 0,
  30, 4,
  30, 2,
  30, 2,
  30, 2,
  30, 2,
  30, 2,
  30, 2,
  30, 2,
  30, 2,
  30, 2,
  31, 0,
  31, 3,
  32, 0,
  32, 1,
  33, 1,
  33, 1,
  34, 0,
  34, 2,
  34, 2,
  34, 2,
  34, 2,
  34, 2,
  35, 0,
  35, 2,
  36, 0,
  36, 2,
  36, 2,
  36, 2,
  36, 2,
  36, 2,
  37, 0,
  37, 2,
  37, 2,
  37, 2,
  37, 2,
  37, 2,
  38, 0,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  39, 0,
  39, 2,
  39, 2,
  39, 2,
  40, 0,
  40, 4,
  41, 1,
  41, 1,
  42, 1,
  42, 1,
  43, 0,
  43, 6,
  44, 0,
  44, 5,
  45, 0,
  45, 3,
  45, 5,
  45, 3,
  45, 3,
  45, 5,
  46, 1,
  46, 1,
  47, 0,
  47, 3,
  48, 4,
  48, 2,
  48, 2,
  48, 4,
  48, 1,
  48, 1,
  48, 1,
  49, 0,
  49, 2,
  50, 1,
  50, 3,
  51, 0,
  51, 2,
  52, 0,
  52, 2,
  53, 0,
  53, 3,
  54, 0,
  54, 1,
  55, 0,
  55, 1,
  56, 0,
  56, 3,
  57, 0,
  57, 2,
  58, 0,
  58, 3,
  58, 3,
  59, 0,
  59, 6,
  60, 0,
  60, 5,
  61, 0,
  61, 5,
  62, 3,
  62, 3,
  62, 3,
  63, 0,
  63, 3,
  64, 0,
  64, 3,
  65, 0,
  65, 6,
  66, 0,
  66, 2,
  67, 0,
  67, 5,
  67, 3,
  67, 3,
  67, 5,
  68, 0,
  68, 3,
  69, 1,
  69, 1,
  69, 1,
  69, 1,
  69, 1,
  69, 1,
  69, 4,
  70, 0,
  70, 3,
  71, 0,
  71, 3,
  72, 2,
  72, 1,
  72, 3,
  73, 0,
  73, 3,
  74, 2,
  74, 1,
  75, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     'start_symbol' non terminal implementation                                      *
//                                                                                                                     *
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
  macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_easyBindings_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                     gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                     gProductionsTable_easyBindings_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Grammar start symbol implementation                                          *
//                                                                                                                     *
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
      macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, "", "", filePath COMMA_HERE)) ;
      if (scanner->sourceText () != NULL) {
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
        inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
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
    if (scanner->sourceText () != NULL) {
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
//                                                                                                                     *
//                                'extern_swift_delegate' non terminal implementation                                  *
//                                                                                                                     *
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
//                                                                                                                     *
//                                  'extern_swift_func' non terminal implementation                                    *
//                                                                                                                     *
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
//                                                                                                                     *
//                                   'enum_declaration' non terminal implementation                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i3_parse(inLexique) ;
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
  case 3 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i3_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 'toMany_relationship' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i4_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_ (GALGAS_toManyRelationshipList &  parameter_1,
                                GALGAS_stringset &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i4_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'toOne_relationship' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i5_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_ (GALGAS_toOneRelationshipList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i5_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'class_declaration' non terminal implementation                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i6_parse(inLexique) ;
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
  case 6 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i6_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'entity_declaration' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i7_parse(inLexique) ;
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
  case 7 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i7_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 'document_declaration' non terminal implementation                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i8_parse(inLexique) ;
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
  case 8 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i8_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               'preferences_declaration' non terminal implementation                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i9_parse(inLexique) ;
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
  case 9 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i9_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               'outlet_class_declaration' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i10_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_outletClassDeclarationList &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i10_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                'binding_specification' non terminal implementation                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i11_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_specification_ (const GALGAS_bool  parameter_1,
                                GALGAS_bindingSpecificationListMap &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i11_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'outlet_declaration' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i12_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i12_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 'observable_property' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_observable_5F_property_i13_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_ (GALGAS_observablePropertyAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_observable_5F_property_i13_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'observable_property_extension' non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_5F_extension_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 14 :
      rule_easyBindings_5F_syntax_observable_5F_property_5F_extension_i14_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_5F_extension_ (GALGAS_lstring &  parameter_1,
                                GALGAS_lstring &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 14 :
      rule_easyBindings_5F_syntax_observable_5F_property_5F_extension_i14_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                'transient_declaration' non terminal implementation                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i15_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_ (GALGAS_secondaryPropertyList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i15_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'simple_stored_declaration' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i16_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_ (GALGAS_simpleStoredPropertyList &  parameter_1,
                                GALGAS_stringset &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i16_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               'stored_array_declaration' non terminal implementation                                *
//                                                                                                                     *
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

void cGrammar_easyBindings_5F_grammar::nt_stored_5F_array_5F_declaration_ (GALGAS_storedArrayPropertyList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i17_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'action_declaration' non terminal implementation                                   *
//                                                                                                                     *
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
//                                                                                                                     *
//                           'booleanMultipleBindingExpression' non terminal implementation                            *
//                                                                                                                     *
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
//                                                                                                                     *
//                           'booleanMultipleBindingComparison' non terminal implementation                            *
//                                                                                                                     *
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
//                                                                                                                     *
//                              'booleanMultipleBindingTerm' non terminal implementation                               *
//                                                                                                                     *
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
//                                                                                                                     *
//                            'booleanMultipleBindingOperand' non terminal implementation                              *
//                                                                                                                     *
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
//                                                                                                                     *
//                                 'binding_option_list' non terminal implementation                                   *
//                                                                                                                     *
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
//                                                                                                                     *
//                             'array_controller_declaration' non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_array_5F_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i27_parse(inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i29_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_array_5F_controller_5F_declaration_ (GALGAS_secondaryPropertyList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i27_(parameter_1, inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i29_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   'column_bindings' non terminal implementation                                     *
//                                                                                                                     *
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
//                                                                                                                     *
//                                    'explicit_value' non terminal implementation                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i30_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_ (GALGAS_abstractDefaultValue &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i30_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    'xcode_project' non terminal implementation                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 31 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i31_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_ (GALGAS_lstring &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 31 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i31_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       'main_xib' non terminal implementation                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_easyBindings_5F_syntax_main_5F_xib_i32_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_ (GALGAS_mainXibDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_easyBindings_5F_syntax_main_5F_xib_i32_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    'main_xib_line' non terminal implementation                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i33_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i33_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_0' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 34 35 36 37 38 39 40 41 42 43 44
  return inLexique->nextProductionIndex () - 33 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_1' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 45 46
  return inLexique->nextProductionIndex () - 44 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_2' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 47 48
  return inLexique->nextProductionIndex () - 46 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_3' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 49 50
  return inLexique->nextProductionIndex () - 48 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_4' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 51 52 53 54 55 56
  return inLexique->nextProductionIndex () - 50 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_5' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 57 58
  return inLexique->nextProductionIndex () - 56 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_6' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 59 60 61 62 63 64
  return inLexique->nextProductionIndex () - 58 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_7' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 65 66 67 68 69 70
  return inLexique->nextProductionIndex () - 64 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_8' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 71 72 73 74 75 76 77 78
  return inLexique->nextProductionIndex () - 70 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_9' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 79 80 81 82
  return inLexique->nextProductionIndex () - 78 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_10' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 83 84
  return inLexique->nextProductionIndex () - 82 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_11' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 85 86
  return inLexique->nextProductionIndex () - 84 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_12' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 87 88
  return inLexique->nextProductionIndex () - 86 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_13' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 89 90
  return inLexique->nextProductionIndex () - 88 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_14' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 91 92
  return inLexique->nextProductionIndex () - 90 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_15' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 93 94 95 96 97 98
  return inLexique->nextProductionIndex () - 92 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_16' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 99 100
  return inLexique->nextProductionIndex () - 98 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_17' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 101 102
  return inLexique->nextProductionIndex () - 100 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_18' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 103 104 105 106 107 108 109
  return inLexique->nextProductionIndex () - 102 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_19' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 110 111
  return inLexique->nextProductionIndex () - 109 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_20' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 112 113
  return inLexique->nextProductionIndex () - 111 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_21' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 114 115
  return inLexique->nextProductionIndex () - 113 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_22' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 116 117
  return inLexique->nextProductionIndex () - 115 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_23' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 118 119
  return inLexique->nextProductionIndex () - 117 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_24' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 120 121
  return inLexique->nextProductionIndex () - 119 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_25' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 122 123
  return inLexique->nextProductionIndex () - 121 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_26' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 124 125
  return inLexique->nextProductionIndex () - 123 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_27' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 126 127
  return inLexique->nextProductionIndex () - 125 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_28' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 128 129 130
  return inLexique->nextProductionIndex () - 127 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_29' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 131 132
  return inLexique->nextProductionIndex () - 130 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_30' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 133 134
  return inLexique->nextProductionIndex () - 132 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_31' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 135 136
  return inLexique->nextProductionIndex () - 134 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_32' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 137 138 139
  return inLexique->nextProductionIndex () - 136 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_33' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 140 141
  return inLexique->nextProductionIndex () - 139 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_34' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 142 143
  return inLexique->nextProductionIndex () - 141 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_35' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 144 145
  return inLexique->nextProductionIndex () - 143 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_36' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 146 147
  return inLexique->nextProductionIndex () - 145 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_37' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 148 149 150 151 152
  return inLexique->nextProductionIndex () - 147 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_38' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 153 154
  return inLexique->nextProductionIndex () - 152 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_39' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 155 156 157 158 159 160 161
  return inLexique->nextProductionIndex () - 154 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_40' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 162 163
  return inLexique->nextProductionIndex () - 161 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_41' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 164 165
  return inLexique->nextProductionIndex () - 163 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_42' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 166 167 168
  return inLexique->nextProductionIndex () - 165 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_43' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 169 170
  return inLexique->nextProductionIndex () - 168 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_44' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 171 172
  return inLexique->nextProductionIndex () - 170 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap::GALGAS_bindingSpecificationListMap (void) :
AC_GALGAS_listmap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap GALGAS_bindingSpecificationListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationListMap::addAssign_operation (const GALGAS_string & inKey,
                                                              const GALGAS_bool & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                              const GALGAS_controllerBindingOptionList & inOperand3
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_outletClassBindingSpecificationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList GALGAS_bindingSpecificationListMap::getter_listForKey (const GALGAS_string & inKey
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_outletClassBindingSpecificationList (listForKey (inKey)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bindingSpecificationListMap::cEnumerator_bindingSpecificationListMap (const GALGAS_bindingSpecificationListMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element cEnumerator_bindingSpecificationListMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_bindingSpecificationListMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_bindingSpecificationListMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList cEnumerator_bindingSpecificationListMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_outletClassBindingSpecificationList (p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @bindingSpecificationListMap type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationListMap ("bindingSpecificationListMap",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingSpecificationListMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationListMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap GALGAS_bindingSpecificationListMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap result ;
  const GALGAS_bindingSpecificationListMap * p = (const GALGAS_bindingSpecificationListMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_tableValueBinding_tableValueBinding::cEnumAssociatedValues_tableValueBinding_tableValueBinding (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_tableValueBinding_tableValueBinding::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_tableValueBinding_tableValueBinding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_tableValueBinding_tableValueBinding * ptr = dynamic_cast<const cEnumAssociatedValues_tableValueBinding_tableValueBinding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableValueBinding::GALGAS_tableValueBinding (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableValueBinding GALGAS_tableValueBinding::constructor_noTableValueBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  result.mEnum = kEnum_noTableValueBinding ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableValueBinding GALGAS_tableValueBinding::constructor_tableValueBinding (const GALGAS_lstring & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_tableValueBinding ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_tableValueBinding_tableValueBinding (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableValueBinding::method_tableValueBinding (GALGAS_lstring & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_tableValueBinding) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @tableValueBinding tableValueBinding invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_tableValueBinding_tableValueBinding * ptr = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_tableValueBinding [3] = {
  "(not built)",
  "noTableValueBinding",
  "tableValueBinding"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_tableValueBinding::getter_isNoTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noTableValueBinding == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_tableValueBinding::getter_isTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_tableValueBinding == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableValueBinding::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @tableValueBinding: " << gEnumNameArrayFor_tableValueBinding [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_tableValueBinding::objectCompare (const GALGAS_tableValueBinding & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @tableValueBinding type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableValueBinding ("tableValueBinding",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tableValueBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableValueBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tableValueBinding::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableValueBinding (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableValueBinding GALGAS_tableValueBinding::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  const GALGAS_tableValueBinding * p = (const GALGAS_tableValueBinding *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableValueBinding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableValueBinding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_runActionDescriptor_action::cEnumAssociatedValues_runActionDescriptor_action (const GALGAS_lstring & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_runActionDescriptor_action::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_runActionDescriptor_action::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_runActionDescriptor_action * ptr = dynamic_cast<const cEnumAssociatedValues_runActionDescriptor_action *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor::GALGAS_runActionDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::constructor_noAction (UNUSED_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  result.mEnum = kEnum_noAction ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::constructor_action (const GALGAS_lstring & inAssociatedValue0,
                                                                           const GALGAS_lstring & inAssociatedValue1
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_action ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_runActionDescriptor_action (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_runActionDescriptor::method_action (GALGAS_lstring & outAssociatedValue0,
                                                GALGAS_lstring & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_action) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @runActionDescriptor action invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_runActionDescriptor_action * ptr = (const cEnumAssociatedValues_runActionDescriptor_action *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_runActionDescriptor [3] = {
  "(not built)",
  "noAction",
  "action"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_runActionDescriptor::getter_isNoAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noAction == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_runActionDescriptor::getter_isAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_action == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_runActionDescriptor::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @runActionDescriptor: " << gEnumNameArrayFor_runActionDescriptor [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_runActionDescriptor::objectCompare (const GALGAS_runActionDescriptor & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @runActionDescriptor type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_runActionDescriptor ("runActionDescriptor",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_runActionDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_runActionDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_runActionDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_runActionDescriptor (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  const GALGAS_runActionDescriptor * p = (const GALGAS_runActionDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_runActionDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("runActionDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_multipleBindingDescriptor_binding::cEnumAssociatedValues_multipleBindingDescriptor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_multipleBindingDescriptor_binding::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_multipleBindingDescriptor_binding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_multipleBindingDescriptor_binding * ptr = dynamic_cast<const cEnumAssociatedValues_multipleBindingDescriptor_binding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor::GALGAS_multipleBindingDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::constructor_noBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  result.mEnum = kEnum_noBinding ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::constructor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_binding ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_multipleBindingDescriptor_binding (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingDescriptor::method_binding (GALGAS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_binding) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @multipleBindingDescriptor binding invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_multipleBindingDescriptor_binding * ptr = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_multipleBindingDescriptor [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noBinding == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_binding == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingDescriptor::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @multipleBindingDescriptor: " << gEnumNameArrayFor_multipleBindingDescriptor [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_multipleBindingDescriptor::objectCompare (const GALGAS_multipleBindingDescriptor & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @multipleBindingDescriptor type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingDescriptor ("multipleBindingDescriptor",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_multipleBindingDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_multipleBindingDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingDescriptor (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  const GALGAS_multipleBindingDescriptor * p = (const GALGAS_multipleBindingDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_rootProperty::cEnumAssociatedValues_observablePropertyAST_rootProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_rootProperty::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_rootProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_rootProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_rootProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                            const GALGAS_lstring & inAssociatedValue1
                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::description (C_String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_selfProperty::cEnumAssociatedValues_observablePropertyAST_selfProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_selfProperty::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfProperty *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_prefsProperty::cEnumAssociatedValues_observablePropertyAST_prefsProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                      const GALGAS_lstring & inAssociatedValue1
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_prefsProperty::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_prefsProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_prefsProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_prefsProperty *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_controllerProperty::cEnumAssociatedValues_observablePropertyAST_controllerProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                const GALGAS_lstring & inAssociatedValue1
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_controllerProperty::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_controllerProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_controllerProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_controllerProperty *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty::cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                                  const GALGAS_lstring & inAssociatedValue1,
                                                                                                                                                  const GALGAS_lstring & inAssociatedValue2
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty::description (C_String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_signatureProperty::cEnumAssociatedValues_observablePropertyAST_signatureProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_signatureProperty::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_signatureProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_signatureProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_signatureProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_versionProperty::cEnumAssociatedValues_observablePropertyAST_versionProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_versionProperty::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_versionProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_versionProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_versionProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::description (C_String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST::GALGAS_observablePropertyAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                     const GALGAS_lstring & inAssociatedValue1
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_selfProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_prefsProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                      const GALGAS_lstring & inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_prefsProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_prefsProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_controllerProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                           const GALGAS_lstring & inAssociatedValue1
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_controllerProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_controllerProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_controllerSecondaryProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                                                    const GALGAS_lstring & inAssociatedValue2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_controllerSecondaryProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_selfProperty (GALGAS_lstring & outAssociatedValue0,
                                                        GALGAS_lstring & outAssociatedValue1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_prefsProperty (GALGAS_lstring & outAssociatedValue0,
                                                         GALGAS_lstring & outAssociatedValue1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_prefsProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST prefsProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_prefsProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_controllerProperty (GALGAS_lstring & outAssociatedValue0,
                                                              GALGAS_lstring & outAssociatedValue1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_controllerProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST controllerProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_controllerProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_controllerSecondaryProperty (GALGAS_lstring & outAssociatedValue0,
                                                                       GALGAS_lstring & outAssociatedValue1,
                                                                       GALGAS_lstring & outAssociatedValue2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_controllerSecondaryProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @observablePropertyAST controllerSecondaryProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_observablePropertyAST [11] = {
  "(not built)",
  "rootProperty",
  "rootPropertyWithOption",
  "rootPropertyRelationship",
  "selfProperty",
  "prefsProperty",
  "controllerProperty",
  "controllerSecondaryProperty",
  "signatureProperty",
  "versionProperty",
  "versionShouldChangeProperty"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootPropertyWithOption == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootPropertyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootPropertyRelationship == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isPrefsProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefsProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isControllerProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_controllerProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isControllerSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_controllerSecondaryProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSignatureProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_signatureProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isVersionProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_versionProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isVersionShouldChangeProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_versionShouldChangeProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @observablePropertyAST: " << gEnumNameArrayFor_observablePropertyAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @observablePropertyAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyAST ("observablePropertyAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_observablePropertyAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_observablePropertyAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship::cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * ptr = dynamic_cast<const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_arrayControllerModel_selfCollection::cEnumAssociatedValues_arrayControllerModel_selfCollection (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_arrayControllerModel_selfCollection::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_arrayControllerModel_selfCollection::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_arrayControllerModel_selfCollection * ptr = dynamic_cast<const cEnumAssociatedValues_arrayControllerModel_selfCollection *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_arrayControllerModel_controllerArray::cEnumAssociatedValues_arrayControllerModel_controllerArray (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_arrayControllerModel_controllerArray::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_arrayControllerModel_controllerArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_arrayControllerModel_controllerArray * ptr = dynamic_cast<const cEnumAssociatedValues_arrayControllerModel_controllerArray *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel::GALGAS_arrayControllerModel (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel GALGAS_arrayControllerModel::constructor_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModel result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_rootToManyRelationship ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel GALGAS_arrayControllerModel::constructor_selfCollection (const GALGAS_lstring & inAssociatedValue0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModel result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selfCollection ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_arrayControllerModel_selfCollection (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel GALGAS_arrayControllerModel::constructor_controllerArray (const GALGAS_lstring & inAssociatedValue0,
                                                                                      const GALGAS_lstring & inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModel result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_controllerArray ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_arrayControllerModel_controllerArray (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerModel::method_rootToManyRelationship (GALGAS_lstring & outAssociatedValue0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootToManyRelationship) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @arrayControllerModel rootToManyRelationship invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * ptr = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerModel::method_selfCollection (GALGAS_lstring & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfCollection) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @arrayControllerModel selfCollection invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_arrayControllerModel_selfCollection * ptr = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerModel::method_controllerArray (GALGAS_lstring & outAssociatedValue0,
                                                          GALGAS_lstring & outAssociatedValue1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_controllerArray) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @arrayControllerModel controllerArray invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_arrayControllerModel_controllerArray * ptr = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_arrayControllerModel [4] = {
  "(not built)",
  "rootToManyRelationship",
  "selfCollection",
  "controllerArray"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModel::getter_isRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootToManyRelationship == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModel::getter_isSelfCollection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfCollection == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModel::getter_isControllerArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_controllerArray == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerModel::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<enum @arrayControllerModel: " << gEnumNameArrayFor_arrayControllerModel [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerModel::objectCompare (const GALGAS_arrayControllerModel & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @arrayControllerModel type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerModel ("arrayControllerModel",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerModel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModel ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerModel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerModel (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel GALGAS_arrayControllerModel::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModel result ;
  const GALGAS_arrayControllerModel * p = (const GALGAS_arrayControllerModel *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerModel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerModel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_mainXibElement_text::cEnumAssociatedValues_mainXibElement_text (const GALGAS_lstring & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_mainXibElement_text::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_mainXibElement_text::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_mainXibElement_text * ptr = dynamic_cast<const cEnumAssociatedValues_mainXibElement_text *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_mainXibElement_outlet::cEnumAssociatedValues_mainXibElement_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_mainXibElement_outlet::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibElement::GALGAS_mainXibElement (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_mainXibElement [3] = {
  "(not built)",
  "text",
  "outlet"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mainXibElement::getter_isText (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_text == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mainXibElement::getter_isOutlet (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outlet == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibElement::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<enum @mainXibElement: " << gEnumNameArrayFor_mainXibElement [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @mainXibElement type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibElement ("mainXibElement",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mainXibElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mainXibElement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibElement (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_easyBindings_5F_options_outputClassDependencyGraph ("easyBindings_options",
                                         "outputClassDependencyGraph",
                                         99,
                                         "output-class-graph",
                                         "Output a class dependancy graph graphviz file") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'predefinedOutletClasses'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of 'collection-controller-templates' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'collection-controller-templates' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_1 [1] = {
  NULL
} ;

//--- Directory 'collection-controller-templates'

const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses (
  "collection-controller-templates",
  0,
  gWrapperAllFiles_predefinedOutletClasses_1,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_1
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_2 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses (
  "outlet-classes",
  0,
  gWrapperAllFiles_predefinedOutletClasses_2,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_2
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_3 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses (
  "standard-properties",
  0,
  gWrapperAllFiles_predefinedOutletClasses_3,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_3
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_4 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_4_predefinedOutletClasses (
  "swift-sources",
  0,
  gWrapperAllFiles_predefinedOutletClasses_4,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_4
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_5 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_5_predefinedOutletClasses (
  "xcode-project",
  0,
  gWrapperAllFiles_predefinedOutletClasses_5,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_5
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_0 [6] = {
  & gWrapperDirectory_1_predefinedOutletClasses,
  & gWrapperDirectory_2_predefinedOutletClasses,
  & gWrapperDirectory_3_predefinedOutletClasses,
  & gWrapperDirectory_4_predefinedOutletClasses,
  & gWrapperDirectory_5_predefinedOutletClasses,
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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Filewrapper template 'predefinedOutletClasses sourceFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "outletClass EBButton $run $enabled ;\n"
    "\n"
    "outletClass EBColorObserverWell $enabled ;\n"
    "binding EBColorObserverWell $colorObserver : property Color ;\n"
    "\n"
    "outletClass EBColorWell $enabled ;\n"
    "binding EBColorWell $color : property Color {sendContinously : Bool} ;\n"
    "\n"
    "\n"
    "outletClass EBDatePicker $enabled ;\n"
    "binding EBDatePicker $date : property Date ;\n"
    "\n"
    "\n"
    "outletClass EBMatrix $enabled ;\n"
    "binding EBMatrix $selectedIndex : property enum ;\n"
    "\n"
    "\n"
    "outletClass EBDoubleField ;\n"
    "binding EBDoubleField $value : property Double {sendContinously : Bool, autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "outletClass EBIntField ;\n"
    "binding EBIntField $value : property Int {sendContinously : Bool, autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "outletClass EBIntObserverField ;\n"
    "binding EBIntObserverField $valueObserver : transient Int {autoFormatter:Bool} ;\n"
    "\n"
    "\n"
    "outletClass EBFontButton $enabled ;\n"
    "binding EBFontButton $fontValue : property Font ;\n"
    "\n"
    "\n"
    "outletClass EBPopUpButton $enabled ;\n"
    "binding EBPopUpButton $selectedTag : property Int ;\n"
    "\n"
    "\n"
    "outletClass EBGroupButton $enabled ;\n"
    "binding EBGroupButton $selectedIndex : property Int ;\n"
    "\n"
    "\n"
    "outletClass EBImageObserverView $enabled ;\n"
    "binding EBImageObserverView $image : transient Image ;\n"
    "\n"
    "\n"
    "outletClass EBMenuItem ;\n"
    "\n"
    "\n"
    "outletClass EBProgressIndicator ;\n"
    "\n"
    "\n"
    "outletClass EBSegmentedControl $enabled ;\n"
    "binding EBSegmentedControl $selectedIndex : property Int ;\n"
    "\n"
    "\n"
    "outletClass EBSlider $enabled ;\n"
    "binding EBSlider $doubleValue : property Double {sendContinously:Bool} ;\n"
    "\n"
    "\n"
    "outletClass EBSwitch $enabled ;\n"
    "binding EBSwitch $value : property Bool ;\n"
    "\n"
    "\n"
    "outletClass EBTableView $enabled $tableValue ;\n"
    "\n"
    "\n"
    "outletClass EBTextField $enabled ;\n"
    "binding EBTextField $value : property String {sendContinously : Bool} ;\n"
    "\n"
    "outletClass EBTextObserverField ;\n"
    "binding EBTextObserverField $valueObserver : transient String ;\n"
    "\n"
    "\n"
    "outletClass EBTextView ;\n"
    "binding EBTextView $value : property String ;\n"
    "\n"
    "outletClass EBWindow ;\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of 'collection-controller-templates' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'collection-controller-templates' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'collection-controller-templates'

const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate (
  "collection-controller-templates",
  0,
  gWrapperAllFiles_enumGenerationTemplate_1,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_1
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_2 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate (
  "outlet-classes",
  0,
  gWrapperAllFiles_enumGenerationTemplate_2,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_2
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_3 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_enumGenerationTemplate_3,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_3
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_4_enumGenerationTemplate (
  "swift-sources",
  0,
  gWrapperAllFiles_enumGenerationTemplate_4,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_4
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_5_enumGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_enumGenerationTemplate_5,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_5
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [6] = {
  & gWrapperDirectory_1_enumGenerationTemplate,
  & gWrapperDirectory_2_enumGenerationTemplate,
  & gWrapperDirectory_3_enumGenerationTemplate,
  & gWrapperDirectory_4_enumGenerationTemplate,
  & gWrapperDirectory_5_enumGenerationTemplate,
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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  result << " : Int {\n" ;
  GALGAS_uint index_517_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_517 (in_CONSTANT_5F_ORDERED_5F_LIST, kEnumeration_up) ;
    while (enumerator_517.hasCurrentObject ()) {
      result << "  case " ;
      result << enumerator_517.current_mValue (HERE).mAttribute_string.stringValue () ;
      result << " = " ;
      result << index_517_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 12)).stringValue () ;
      result << "\n" ;
      index_517_idx.increment () ;
      enumerator_517.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  func descriptionForExplorer () -> String {\n"
    "    switch self {\n" ;
  GALGAS_uint index_683_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_683 (in_CONSTANT_5F_ORDERED_5F_LIST, kEnumeration_up) ;
    while (enumerator_683.hasCurrentObject ()) {
      result << "      case " ;
      result << enumerator_683.current_mValue (HERE).mAttribute_string.stringValue () ;
      result << " : return \"" ;
      result << enumerator_683.current_mValue (HERE).mAttribute_string.stringValue () ;
      result << "\" // " ;
      result << index_683_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 20)).stringValue () ;
      result << "\n" ;
      index_683_idx.increment () ;
      enumerator_683.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
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
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("EBReadOnlyProperty_").add_operation (in_ENUM_5F_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("enum.swift.galgasTemplate", 36)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class EBReadOnlyProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " : EBAbstractProperty, EBReadOnlyEnumPropertyProtocol {\n"
    "\n"
    "  var prop : EBProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "> { get { return .noSelection } } // Abstract method\n"
    "\n"
    "  func rawValue () -> Int { return " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_CONSTANT_5F_ORDERED_5F_LIST.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("enum.swift.galgasTemplate", 43)).mAttribute_string.stringValue () ;
  result << ".rawValue }  // Abstract method\n"
    "\n"
    "  func count () -> Int { return " ;
  result << in_CONSTANT_5F_ORDERED_5F_LIST.getter_length (SOURCE_FILE ("enum.swift.galgasTemplate", 45)).getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 45)).stringValue () ;
  result << " }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func compare (other : EBReadOnlyProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ") -> NSComparisonResult {\n"
    "    switch prop {\n"
    "    case .noSelection :\n"
    "      switch other.prop {\n"
    "      case .noSelection :\n"
    "        return .OrderedSame\n"
    "      default:\n"
    "        return .OrderedAscending\n"
    "      }\n"
    "    case .multipleSelection :\n"
    "      switch other.prop {\n"
    "      case .noSelection :\n"
    "        return .OrderedDescending\n"
    "      case .multipleSelection :\n"
    "        return .OrderedSame\n"
    "     case .singleSelection (_) :\n"
    "        return .OrderedAscending\n"
    "     }\n"
    "   case .singleSelection (let currentValue) :\n"
    "      switch other.prop {\n"
    "      case .noSelection, .multipleSelection :\n"
    "        return .OrderedDescending\n"
    "      case .singleSelection (let otherValue) :\n"
    "        if currentValue.rawValue < otherValue.rawValue {\n"
    "          return .OrderedAscending\n"
    "        }else if currentValue.rawValue > otherValue.rawValue {\n"
    "          return .OrderedDescending\n"
    "        }else{\n"
    "          return .OrderedSame\n"
    "        }\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("EBStoredProperty_").add_operation (in_ENUM_5F_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("enum.swift.galgasTemplate", 87)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class EBStoredProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " : EBReadOnlyProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ", EBEnumPropertyProtocol {\n"
    "  weak var undoManager : NSUndoManager\?\n"
    "\n"
    "  var mValueExplorer : NSTextField\? {\n"
    "    didSet {\n"
    "      mValueExplorer\?.stringValue = mValue.descriptionForExplorer ()\n"
    "    }\n"
    "  }\n"
    "\n"
    "  init (_ inValue : " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n"
    "    mValue = inValue\n"
    "    super.init ()\n"
    "  }\n"
    "\n"
    "  private var mValue : " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n"
    "    didSet {\n"
    "      if mValue != oldValue {\n"
    "        mValueExplorer\?.stringValue = mValue.descriptionForExplorer ()\n"
    "        undoManager\?.registerUndoWithTarget (self, selector:Selector (\"performUndo:\"), object:NSNumber (integer:oldValue.rawValue))\n"
    "        postEvent ()\n"
    "        clearSignatureCache ()\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  func performUndo (oldValue : NSNumber) {\n"
    "    if let v = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " (rawValue:oldValue.integerValue) {\n"
    "      mValue = v\n"
    "    }\n"
    "  }\n"
    "\n"
    "  override var prop : EBProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "> { get { return .singleSelection (mValue) } }\n"
    "\n"
    "  func setProp (inValue : " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ") { mValue = inValue }\n"
    "\n"
    "  override func rawValue () -> Int {\n"
    "    return mValue.rawValue\n"
    "  }\n"
    "\n"
    "  func setFromRawValue (rawValue : Int) {\n"
    "    if let v = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " (rawValue:rawValue) {\n"
    "      mValue = v\n"
    "    }\n"
    "  }\n"
    "\n"
    "  func readInPreferencesWithKey (inKey : String) {\n"
    "    let ud = NSUserDefaults.standardUserDefaults ()\n"
    "    let value : AnyObject\? = ud.objectForKey (inKey)\n"
    "    if let unwValue : AnyObject = value where unwValue is NSNumber {\n"
    "      setFromRawValue ((unwValue as! NSNumber).integerValue)\n"
    "    }\n"
    "  }\n"
    "  \n"
    "  func storeInPreferencesWithKey (inKey : String) {\n"
    "    let ud = NSUserDefaults.standardUserDefaults ()\n"
    "    ud.setObject (NSNumber (integer:mValue.rawValue), forKey:inKey)\n"
    "  }\n"
    "\n"
    "  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {\n"
    "    ioDictionary.setValue (NSNumber (integer:mValue.rawValue), forKey:inKey)\n"
    "  }\n"
    "\n"
    "  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {\n"
    "    let value : AnyObject\? = inDictionary.objectForKey (inKey)\n"
    "    if let unwValue : AnyObject = value where unwValue is NSNumber {\n"
    "      setFromRawValue ((unwValue as! NSNumber).integerValue)\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    " \n"
    "  var validationFunction : (" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ") -> EBValidationResult = defaultValidationFunction\n"
    "  \n"
    "  func validate (proposedValue : " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ") -> EBValidationResult {\n"
    "    return validationFunction (proposedValue)\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    SIGNATURE\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final private weak var mSignatureObserver : EBSignatureObserverProtocol\? = nil\n"
    "  final private var mSignatureCache : UInt32\? = nil\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func setSignatureObserver (observer : EBSignatureObserverProtocol) {\n"
    "    mSignatureObserver = observer\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final private func clearSignatureCache () {\n"
    "    if mSignatureCache != nil {\n"
    "      mSignatureCache = nil\n"
    "      mSignatureObserver\?.clearSignatureCache ()\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final func signature () -> UInt32 {\n"
    "    let computedSignature : UInt32\n"
    "    if let s = mSignatureCache {\n"
    "      computedSignature = s\n"
    "    }else{\n"
    "      computedSignature = mValue.rawValue.ebHashValue ()\n"
    "      mSignatureCache = computedSignature\n"
    "    }\n"
    "    return computedSignature\n"
    "  }\n"
    "  \n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("EBTransientProperty_").add_operation (in_ENUM_5F_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("enum.swift.galgasTemplate", 207)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class EBTransientProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " : EBReadOnlyProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n"
    "  private var mValueCache : EBProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\?\n"
    "\n"
    "  var computeFunction : Optional<() -> EBProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "> >\n"
    "  \n"
    "  override init () {\n"
    "    super.init ()\n"
    "  }\n"
    "\n"
    "  override var prop : EBProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "> {\n"
    "    get {\n"
    "      if mValueCache == nil {\n"
    "        if let unwrappedComputeFunction = computeFunction {\n"
    "          mValueCache = unwrappedComputeFunction ()\n"
    "        }else{\n"
    "          mValueCache = .noSelection\n"
    "        }\n"
    "      }\n"
    "      return mValueCache!\n"
    "    }\n"
    "  }\n"
    "\n"
    "  override func postEvent () {\n"
    "    if mValueCache != nil {\n"
    "      mValueCache = nil\n"
    "      super.postEvent ()\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'generateEnums'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateEnums (const GALGAS_enumListForGeneration constinArgument_inEnumListForGeneration,
                            const GALGAS_string constinArgument_inOutputDirectory,
                            GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_enumListForGeneration enumerator_5796 (constinArgument_inEnumListForGeneration, kEnumeration_up) ;
  while (enumerator_5796.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_5796.current_mEnumConstantList (HERE).getter_length (SOURCE_FILE ("enumeration.galgas", 135)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (inCompiler, enumerator_5796.current_mEnumName (HERE), enumerator_5796.current_mEnumConstantList (HERE) COMMA_SOURCE_FILE ("enumeration.galgas", 136))) ;
      GALGAS_string var_fileName = enumerator_5796.current_mEnumName (HERE).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 140)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName  COMMA_SOURCE_FILE ("enumeration.galgas", 141)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName, var_s, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 142)) ;
      }
    }
    enumerator_5796.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Once function 'externSwiftFunctionCallerSet'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset onceFunction_externSwiftFunctionCallerSet (C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outResult ; // Returned variable
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("class.galgas", 186)) ;
  temp_0.addAssign_operation (GALGAS_string ("setUpWithDictionary")  COMMA_SOURCE_FILE ("class.galgas", 186)) ;
  temp_0.addAssign_operation (GALGAS_string ("init")  COMMA_SOURCE_FILE ("class.galgas", 186)) ;
  temp_0.addAssign_operation (GALGAS_string ("saveIntoDictionary")  COMMA_SOURCE_FILE ("class.galgas", 186)) ;
  result_outResult = temp_0 ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_externSwiftFunctionCallerSet = false ;
static GALGAS_stringset gOnceFunctionResult_externSwiftFunctionCallerSet ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_externSwiftFunctionCallerSet (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_externSwiftFunctionCallerSet) {
    gOnceFunctionResult_externSwiftFunctionCallerSet = onceFunction_externSwiftFunctionCallerSet (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_externSwiftFunctionCallerSet = true ;
  }
  return gOnceFunctionResult_externSwiftFunctionCallerSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_externSwiftFunctionCallerSet (void) {
  gOnceFunctionResult_externSwiftFunctionCallerSet.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_externSwiftFunctionCallerSet (NULL,
                                                                          releaseOnceFunctionResult_externSwiftFunctionCallerSet) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_externSwiftFunctionCallerSet [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_externSwiftFunctionCallerSet (C_Compiler * inCompiler,
                                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  return function_externSwiftFunctionCallerSet (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_externSwiftFunctionCallerSet ("externSwiftFunctionCallerSet",
                                                                              functionWithGenericHeader_externSwiftFunctionCallerSet,
                                                                              & kTypeDescriptor_GALGAS_stringset,
                                                                              0,
                                                                              functionArgs_externSwiftFunctionCallerSet) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'classGenerationTemplate'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of 'collection-controller-templates' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'collection-controller-templates' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'collection-controller-templates'

const cDirectoryWrapper gWrapperDirectory_1_classGenerationTemplate (
  "collection-controller-templates",
  0,
  gWrapperAllFiles_classGenerationTemplate_1,
  0,
  gWrapperAllDirectories_classGenerationTemplate_1
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_2 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_2_classGenerationTemplate (
  "outlet-classes",
  0,
  gWrapperAllFiles_classGenerationTemplate_2,
  0,
  gWrapperAllDirectories_classGenerationTemplate_2
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_3 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_3_classGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_classGenerationTemplate_3,
  0,
  gWrapperAllDirectories_classGenerationTemplate_3
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_4_classGenerationTemplate (
  "swift-sources",
  0,
  gWrapperAllFiles_classGenerationTemplate_4,
  0,
  gWrapperAllDirectories_classGenerationTemplate_4
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_5_classGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_classGenerationTemplate_5,
  0,
  gWrapperAllDirectories_classGenerationTemplate_5
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_0 [6] = {
  & gWrapperDirectory_1_classGenerationTemplate,
  & gWrapperDirectory_2_classGenerationTemplate,
  & gWrapperDirectory_3_classGenerationTemplate,
  & gWrapperDirectory_4_classGenerationTemplate,
  & gWrapperDirectory_5_classGenerationTemplate,
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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'classGenerationTemplate classImplementationInSwift'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_classGenerationTemplate_classImplementationInSwift (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & in_CLASS_5F_NAME,
                                                                                      const GALGAS_simpleStoredPropertyListForGeneration & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                      const GALGAS_transientDefinitionListForGeneration & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                      const GALGAS_externSwiftFunctionList & in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                      const GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION
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
  result << GALGAS_string ("ReadOnlyArrayOf_").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 8)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class ReadOnlyArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " : EBAbstractProperty {\n"
    "\n"
    "  var prop : EBProperty < [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] > { get { return .noSelection } }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  final var count = EBTransientProperty_Int ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    super.init ()\n"
    "    count.computeFunction = { [weak self] in\n"
    "      if let unwSelf = self {\n"
    "        switch unwSelf.prop {\n"
    "        case .noSelection :\n"
    "          return .noSelection\n"
    "        case .multipleSelection :\n"
    "          return .multipleSelection\n"
    "        case .singleSelection (let v) :\n"
    "          return .singleSelection (v.count)\n"
    "        }\n"
    "      }else{\n"
    "        return .noSelection\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func postEvent () {\n"
    "    count.postEvent ()\n"
    "    super.postEvent ()\n"
    "  }\n"
    "\n" ;
  GALGAS_uint index_1718_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_1718 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_1718.hasCurrentObject ()) {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  // Stored property '" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << "'\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  private var mObserversOf_" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << " = EBWeakEventSet ()\n"
        "\n"
        "  final func addEBObserverOf_" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << " (inObserver : EBEvent) {\n"
        "    mObserversOf_" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".insert (inObserver)\n"
        "    switch prop {\n"
        "    case .noSelection, .multipleSelection :\n"
        "      break\n"
        "    case .singleSelection (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".addEBObserver (inObserver)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func removeEBObserverOf_" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << " (inObserver : EBEvent) {\n"
        "    mObserversOf_" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".remove (inObserver)\n"
        "    switch prop {\n"
        "    case .noSelection, .multipleSelection :\n"
        "      break\n"
        "    case .singleSelection (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".removeEBObserver (inObserver)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func postEventTo_" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << " () {\n"
        "    switch prop {\n"
        "    case .noSelection, .multipleSelection :\n"
        "      break\n"
        "    case .singleSelection (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".postEvent ()\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func addEBObserversOf_" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << "_toElementsOfSet (inSet : Set<" ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << ">) {\n"
        "    for managedObject in inSet {\n"
        "      for observer in mObserversOf_" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << " {\n"
        "        managedObject." ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".addEBObserver (observer)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func removeEBObserversOf_" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << "_fromElementsOfSet (inSet : Set<" ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << ">) {\n"
        "    for managedObject in inSet {\n"
        "      for observer in mObserversOf_" ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << " {\n"
        "        managedObject." ;
      result << enumerator_1718.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".removeEBObserver (observer)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n" ;
      index_1718_.increment () ;
      enumerator_1718.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3719_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientDefinitionListForGeneration enumerator_3719 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kEnumeration_up) ;
    while (enumerator_3719.hasCurrentObject ()) {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  // Transient property '" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << "'\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  private var mObserversOf_" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << " = EBWeakEventSet ()\n"
        "\n"
        "  final func addEBObserverOf_" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << " (inObserver : EBEvent) {\n"
        "    mObserversOf_" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << ".insert (inObserver)\n"
        "    switch prop {\n"
        "    case .noSelection, .multipleSelection :\n"
        "      break\n"
        "    case .singleSelection (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << ".addEBObserver (inObserver)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func removeEBObserverOf_" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << " (inObserver : EBEvent) {\n"
        "    mObserversOf_" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << ".remove (inObserver)\n"
        "    switch prop {\n"
        "    case .noSelection, .multipleSelection :\n"
        "      break\n"
        "    case .singleSelection (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << ".removeEBObserver (inObserver)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func postEventTo_" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << " () {\n"
        "    switch prop {\n"
        "    case .noSelection, .multipleSelection :\n"
        "      break\n"
        "    case .singleSelection (let v) :\n"
        "      for managedObject in v {\n"
        "        managedObject." ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << ".postEvent ()\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func addEBObserversOf_" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << "_toElementsOfSet (inSet : Set<" ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << ">) {\n"
        "    for managedObject in inSet {\n"
        "      for observer in mObserversOf_" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << " {\n"
        "        managedObject." ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << ".addEBObserver (observer)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "\n"
        "  final func removeEBObserversOf_" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << "_fromElementsOfSet (inSet : Set<" ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << ">) {\n"
        "    for managedObject in inSet {\n"
        "      for observer in mObserversOf_" ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << " {\n"
        "        managedObject." ;
      result << enumerator_3719.current_mTransientName (HERE).stringValue () ;
      result << ".removeEBObserver (observer)\n"
        "      }\n"
        "    }\n"
        "  }\n"
        "  \n" ;
      index_3719_.increment () ;
      enumerator_3719.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("TransientArrayOf_").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 172)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class TransientArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " : ReadOnlyArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " {\n"
    "\n"
    "  var computeFunction : Optional<() -> EBProperty < [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] > >\n"
    " \n"
    "  private var prop_cache : EBProperty < [" ;
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
    "  override var prop : EBProperty < [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] > {\n"
    "    get {\n"
    "      if let unwrappedComputeFunction = computeFunction where prop_cache == nil {\n"
    "        prop_cache = unwrappedComputeFunction ()\n"
    "      }\n"
    "      if prop_cache == nil {\n"
    "        prop_cache = .noSelection\n"
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
    "      super.postEvent ()\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_7237_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_7237 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_7237.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
        "\n"
        "@objc(" ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_7237.current_mStoredPropertyName (HERE).stringValue () ;
      result << ") protocol " ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_7237.current_mStoredPropertyName (HERE).stringValue () ;
      result << " {\n"
        "  var " ;
      result << enumerator_7237.current_mStoredPropertyName (HERE).stringValue () ;
      result << " : EBStoredProperty_" ;
      result << extensionGetter_swiftTypeName (enumerator_7237.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 219)).stringValue () ;
      result << " { get }\n"
        "}\n"
        "\n" ;
      index_7237_.increment () ;
      enumerator_7237.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("Array of class: ").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 227)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class EBClassArray_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " : ReadOnlyArrayOf_" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func readInPreferencesWithKey (inKey : String) {\n"
    "    let ud = NSUserDefaults.standardUserDefaults ()\n"
    "    let value : AnyObject\? = ud.objectForKey (inKey)\n"
    "    if let unwValue : AnyObject = value {\n"
    "      if let array : [NSDictionary] = unwValue as\? [NSDictionary] {\n"
    "        for dict in array {\n"
    "          let object = " ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " ()\n"
    "          object.setUpWithDictionary (dict)\n"
    "          mValue.append (object)\n"
    "        }\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func storeInPreferencesWithKey (inKey : String) {\n"
    "    let ud = NSUserDefaults.standardUserDefaults ()\n"
    "    var array = [NSDictionary] ()\n"
    "    for object in mValue {\n"
    "      let dict = NSMutableDictionary ()\n"
    "      object.saveIntoDictionary (dict)\n"
    "      array.append (dict)\n"
    "    }\n"
    "    ud.setObject (array, forKey:inKey)\n"
    "  }\n"
    "\n"
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
    "      //--- Update explorer\n"
    "       // if explorer != nil {\n"
    "       //   owner\?.updateManagedObjectToManyRelationshipDisplay (mValue, popUpButton:explorer!)\n"
    "       // }\n"
    "      //--- Removed object set\n"
    "        let removedSet = oldSet.subtract (mSet)\n" ;
  GALGAS_uint index_9511_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_9511 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_9511.hasCurrentObject ()) {
      result << "        removeEBObserversOf_" ;
      result << enumerator_9511.current_mStoredPropertyName (HERE).stringValue () ;
      result << "_fromElementsOfSet (removedSet)\n" ;
      index_9511_.increment () ;
      enumerator_9511.gotoNextObject () ;
    }
  }
  result << "      //--- Added object set\n"
    "        let addedSet = mSet.subtract (oldSet)\n" ;
  GALGAS_uint index_9737_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_9737 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_9737.hasCurrentObject ()) {
      result << "        addEBObserversOf_" ;
      result << enumerator_9737.current_mStoredPropertyName (HERE).stringValue () ;
      result << "_toElementsOfSet (addedSet)\n" ;
      index_9737_.increment () ;
      enumerator_9737.gotoNextObject () ;
    }
  }
  result << "      //--- Notify observers object count did change\n"
    "        postEvent ()\n"
    "/*        if oldValue.count != mValue.count {\n"
    "          count.postEvent ()\n"
    "        } */\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override var prop : EBProperty < [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] > {\n"
    "    get {\n"
    "      return .singleSelection (mValue \?\? [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] ())\n"
    "    }\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func setProp (inValue :  [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "]) { mValue = inValue }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var propval : [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] { get { return mValue \?\? [" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << "] () } }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//    " ;
  result << GALGAS_string ("Class: ").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 315)).stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "@objc(" ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << ") class " ;
  result << in_CLASS_5F_NAME.stringValue () ;
  result << " : EBSimpleClass" ;
  GALGAS_uint index_11168_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_11168 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_11168.hasCurrentObject ()) {
      result << ", " ;
      result << in_CLASS_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_11168.current_mStoredPropertyName (HERE).stringValue () ;
      index_11168_.increment () ;
      enumerator_11168.gotoNextObject () ;
    }
  }
  result << " {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Properties\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_11538_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_11538 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_11538.hasCurrentObject ()) {
      result << "  var " ;
      result << enumerator_11538.current_mStoredPropertyName (HERE).stringValue () ;
      result << " = EBStoredProperty_" ;
      result << extensionGetter_swiftTypeName (enumerator_11538.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 330)).stringValue () ;
      result << " (" ;
      result << enumerator_11538.current_mDefaultValueInSwift (HERE).stringValue () ;
      result << ")\n"
        "\n"
        "/*  var " ;
      result << enumerator_11538.current_mStoredPropertyName (HERE).stringValue () ;
      result << "_kvc : " ;
      result << extensionGetter_swiftTypeName (enumerator_11538.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 331)).stringValue () ;
      result << " {\n"
        "    get {\n"
        "      switch " ;
      result << enumerator_11538.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".prop {\n"
        "      case .noSelection, .multipleSelection :\n"
        "        return " ;
      result << extensionGetter_defaultSwiftTypeValueAsString (enumerator_11538.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 335)).stringValue () ;
      result << "\n"
        "      case .singleSelection (let v) :\n"
        "        return v\n"
        "      }\n"
        "    }\n"
        "  } */\n"
        "\n" ;
      if (enumerator_11538.hasNextObject ()) {
        result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
          "\n" ;
      }
      index_11538_.increment () ;
      enumerator_11538.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Transient properties\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_12464_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientDefinitionListForGeneration enumerator_12464 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kEnumeration_up) ;
    while (enumerator_12464.hasCurrentObject ()) {
      result << "  var " ;
      result << enumerator_12464.current_mTransientName (HERE).stringValue () ;
      result << " = EBTransientProperty_" ;
      result << extensionGetter_swiftTypeName (enumerator_12464.current_mTransientType (HERE), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 351)).stringValue () ;
      result << " ()\n" ;
      index_12464_.increment () ;
      enumerator_12464.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Extern delegates\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_12893_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_12893 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kEnumeration_up) ;
    while (enumerator_12893.hasCurrentObject ()) {
      result << "  var mExternDelegate" ;
      result << index_12893_idx.getter_string (SOURCE_FILE ("class.swift.galgasTemplate", 361)).stringValue () ;
      result << " : " ;
      result << enumerator_12893.current_mExternSwiftDelegateName (HERE).mAttribute_string.stringValue () ;
      result << "\? = nil\n" ;
      index_12893_idx.increment () ;
      enumerator_12893.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    init\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    super.init ()\n" ;
  GALGAS_uint index_13343_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_13343 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_13343.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_13343.current_mNeedsValidation (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "    " ;
        result << enumerator_13343.current_mStoredPropertyName (HERE).stringValue () ;
        result << ".setValidationFunction (self.validate_" ;
        result << enumerator_13343.current_mStoredPropertyName (HERE).stringValue () ;
        result << ")\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_13343_.increment () ;
      enumerator_13343.gotoNextObject () ;
    }
  }
  result << "  //--- Install compute functions for transients\n" ;
  GALGAS_uint index_13571_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientDefinitionListForGeneration enumerator_13571 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kEnumeration_up) ;
    while (enumerator_13571.hasCurrentObject ()) {
      const enumGalgasBool test_1 = extensionGetter_needs_5F_unwSelf (enumerator_13571.current_mDependencyList (HERE), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 379)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "    " ;
        result << enumerator_13571.current_mTransientName (HERE).stringValue () ;
        result << ".computeFunction = { [weak self] in\n"
          "      if let unwSelf = self {\n" ;
        result << extensionGetter_transientComputeFunctionCall (enumerator_13571.current_mDependencyList (HERE), in_CLASS_5F_NAME, enumerator_13571.current_mTransientName (HERE), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 382)).stringValue () ;
        result << "      }else{\n"
          "        return .noSelection\n"
          "      }\n"
          "    }\n" ;
      }else if (kBoolFalse == test_1) {
        result << "    " ;
        result << enumerator_13571.current_mTransientName (HERE).stringValue () ;
        result << ".computeFunction = {\n" ;
        result << extensionGetter_transientComputeFunctionCall (enumerator_13571.current_mDependencyList (HERE), in_CLASS_5F_NAME, enumerator_13571.current_mTransientName (HERE), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 389)).stringValue () ;
        result << "    }\n" ;
      }
      index_13571_.increment () ;
      enumerator_13571.gotoNextObject () ;
    }
  }
  result << "  //--- Install property observers for transients\n" ;
  GALGAS_uint index_14144_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientDefinitionListForGeneration enumerator_14144 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kEnumeration_up) ;
    while (enumerator_14144.hasCurrentObject ()) {
      GALGAS_uint index_14175_ (0) ;
      if (enumerator_14144.current_mDependencyList (HERE).isValid ()) {
        cEnumerator_transientDependencyListForGeneration enumerator_14175 (enumerator_14144.current_mDependencyList (HERE), kEnumeration_up) ;
        while (enumerator_14175.hasCurrentObject ()) {
          result << "    " ;
          result << extensionGetter_generateAddObserverCall (enumerator_14175.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("class.swift.galgasTemplate", 397)).stringValue () ;
          result << " (" ;
          result << enumerator_14144.current_mTransientName (HERE).stringValue () ;
          result << ")\n" ;
          index_14175_.increment () ;
          enumerator_14175.gotoNextObject () ;
        }
      }
      index_14144_.increment () ;
      enumerator_14144.gotoNextObject () ;
    }
  }
  result << "  //--- Extern functions\n" ;
  GALGAS_uint index_14341_ (0) ;
  if (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_14341 (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kEnumeration_up) ;
    while (enumerator_14341.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_14341.current_mCallerName (HERE).mAttribute_string.objectCompare (GALGAS_string ("init"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    " ;
        result << enumerator_14341.current_mExternSwiftFunctionName (HERE).mAttribute_string.stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_14341_.increment () ;
      enumerator_14341.gotoNextObject () ;
    }
  }
  result << "  //--- Extern delegates\n" ;
  GALGAS_uint index_14541_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_14541 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kEnumeration_up) ;
    while (enumerator_14541.hasCurrentObject ()) {
      result << "    mExternDelegate" ;
      result << index_14541_idx.getter_string (SOURCE_FILE ("class.swift.galgasTemplate", 410)).stringValue () ;
      result << " = " ;
      result << enumerator_14541.current_mExternSwiftDelegateName (HERE).mAttribute_string.stringValue () ;
      result << " (object:self)\n" ;
      index_14541_idx.increment () ;
      enumerator_14541.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    populateExplorerWindow\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func populateExplorerWindow (inout y : CGFloat, view : NSView) {\n"
    "    super.populateExplorerWindow (&y, view:view)\n" ;
  GALGAS_uint index_15104_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_15104 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_15104.hasCurrentObject ()) {
      result << "    createEntryForPropertyNamed (\n"
        "      \"" ;
      result << enumerator_15104.current_mStoredPropertyName (HERE).stringValue () ;
      result << "\",\n"
        "      idx:" ;
      result << enumerator_15104.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".mExplorerObjectIndex,\n"
        "      y:&y,\n"
        "      view:view,\n"
        "      observerExplorer:&" ;
      result << enumerator_15104.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".mObserverExplorer,\n"
        "      valueExplorer:&" ;
      result << enumerator_15104.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".mValueExplorer\n"
        "    )\n" ;
      index_15104_.increment () ;
      enumerator_15104.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    clearObjectExplorer\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func clearObjectExplorer () {\n" ;
  GALGAS_uint index_15812_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_15812 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_15812.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_15812.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".mObserverExplorer = nil\n"
        "    " ;
      result << enumerator_15812.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".mValueExplorer = nil\n" ;
      index_15812_.increment () ;
      enumerator_15812.gotoNextObject () ;
    }
  }
  result << "    super.clearObjectExplorer ()\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    saveIntoDictionary\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {\n"
    "    super.saveIntoDictionary (ioDictionary)\n" ;
  GALGAS_uint index_16407_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_16407 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_16407.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_16407.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".storeInDictionary (ioDictionary, forKey: \"" ;
      result << enumerator_16407.current_mStoredPropertyName (HERE).stringValue () ;
      result << "\")\n" ;
      index_16407_.increment () ;
      enumerator_16407.gotoNextObject () ;
    }
  }
  GALGAS_uint index_16564_ (0) ;
  if (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_16564 (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kEnumeration_up) ;
    while (enumerator_16564.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_16564.current_mCallerName (HERE).mAttribute_string.objectCompare (GALGAS_string ("saveIntoDictionary"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "    " ;
        result << enumerator_16564.current_mExternSwiftFunctionName (HERE).mAttribute_string.stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_16564_.increment () ;
      enumerator_16564.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    setUpWithDictionary\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func setUpWithDictionary (inDictionary : NSDictionary) {\n"
    "    super.setUpWithDictionary (inDictionary)\n" ;
  GALGAS_uint index_17132_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_simpleStoredPropertyListForGeneration enumerator_17132 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kEnumeration_up) ;
    while (enumerator_17132.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_17132.current_mStoredPropertyName (HERE).stringValue () ;
      result << ".readFromDictionary (inDictionary, forKey:\"" ;
      result << enumerator_17132.current_mStoredPropertyName (HERE).stringValue () ;
      result << "\")\n" ;
      index_17132_.increment () ;
      enumerator_17132.gotoNextObject () ;
    }
  }
  GALGAS_uint index_17289_ (0) ;
  if (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_17289 (in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kEnumeration_up) ;
    while (enumerator_17289.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_17289.current_mCallerName (HERE).mAttribute_string.objectCompare (GALGAS_string ("setUpWithDictionary"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "    " ;
        result << enumerator_17289.current_mExternSwiftFunctionName (HERE).mAttribute_string.stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_17289_.increment () ;
      enumerator_17289.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  return GALGAS_string (result) ;
}

